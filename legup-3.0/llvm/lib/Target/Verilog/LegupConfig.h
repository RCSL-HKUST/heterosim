//===-- LegupConfig.h - Legup Configuration ---------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file declares the Legup configuration object
//
//===----------------------------------------------------------------------===//

#ifndef LEGUP_CONFIG_H
#define LEGUP_CONFIG_H

#include "llvm/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Constants.h"
#include "llvm/Instructions.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/ADT/StringExtras.h"

#include <string>
#include <set>
#include <map>
using namespace llvm;

namespace legup {

class LegupConfig;

// global variable to hold the LegupConfig object
// I'd rather use the LLVM getAnalysisIfAvailable mechanism but its broken when
// sharing an immutable pass (LegupConfig) between ModulePass/FunctionPass
// passes
extern LegupConfig *LEGUP_CONFIG;

class Operation {
public:
    Operation () { }

    Operation (float FMax, float CritDelay, float StaticPower, float
            DynamicPower, int LUTs, int Registers, int LogicElements, int
            DSPElements, int Latency) : FMax(FMax), CritDelay(CritDelay),
        StaticPower(StaticPower), DynamicPower(DynamicPower), LUTs(LUTs),
        Registers(Registers), LogicElements(LogicElements),
        DSPElements(DSPElements),    Latency(Latency) {}

    float getFmax() { return FMax; }
    float getCritDelay() { return CritDelay; }
    float getStaticPower() { return StaticPower; }
    float getDynamicPower() { return DynamicPower; }
    int getLUTs() { return LUTs; }
    int getRegisters() { return Registers; }
    int getLogicElements() { return LogicElements; }
    int getDSPElements() { return DSPElements; }
    int getLatency() { return Latency; }

private:
    float FMax;
    float CritDelay;
    float StaticPower;
    float DynamicPower;
    int LUTs;
    int Registers;
    int LogicElements;
    int DSPElements;
    int Latency;
};

class LegupConfig {
public:
    LegupConfig() {}
    ~LegupConfig() {
        for (std::map<std::string, Operation*>::iterator i =
                Operations.begin(), e = Operations.end(); i != e; ++i) {
            assert(i->second);
            delete i->second;
        }
    }

    static LegupConfig *getLegupConfig();

    /// addAccelerator - mark function name for acceleration
    void addAccelerator(std::string function) {
        functions.insert(function);
    }

    /// addParallelAccelerator - mark function name for parallel acceleration
    void addParallelAccelerator(std::string function) {
		parallelfunctions.insert(function);
        functions.insert(function);
    }

	void setCacheParameters(std::string type, int value) {
		cacheParameters[type] = value;
	}

	int getCacheParameters(std::string type) {
		int value;
		if (cacheParameters.find(type) == cacheParameters.end()) {
			value = 0; //if this cache parameter was not defined, return 0;
		} else {
			value = cacheParameters[type]; //if defined, return value
		}

		return value;
	}

	void setDCacheType(std::string type) {
		dcacheType = type;
	}

	const std::string getDCacheType() {
		if (dcacheType == "") {
			return "MP"; //if cachetype is not specified, it defaults to MP cache.
		} else {
			return dcacheType;
		}
	}

/*
	bool isMultiPorted() {
		if (getCacheParameters("dcacheports") > 2) { //if number of ports is bigger than 2
			return true;
		} else {
			return false;
		}		
	}*/

    /// addParameter - add a parameter ie. SHARE_DIV
    void addParameter(std::string name, std::string value) {
        parameters[name] = value;
    }

    std::string getParameter(const std::string name) {
        // check environment variable first
        std::string env_name = "LEGUP_" + name;
        char* env_value = getenv(env_name.c_str());
        if (env_value) {
            return env_value;
        } else {
            return parameters[name];
        }
    }

	const std::string getFPGABoard() {
		std::string FPGABoard;
		std::string FPGADevice = getDeviceFamily();
	   	if (FPGADevice == "CycloneII") {
			FPGABoard = "DE2";
		} else if (FPGADevice == "StratixIV") {
			FPGABoard = "DE4";
		} else {
		    llvm_unreachable("Unrecognized device family!");
		}
		return FPGABoard;
	}

    int getParameterInt(std::string name) {
        return atoi(getParameter(name.c_str()).c_str());
    }

    struct LOOP_PIPELINE {
        bool user_II;
        unsigned II;
        std::string label;
    };

    void addLoopPipeline(std::string label, bool user_II, unsigned II) {
        LOOP_PIPELINE pipeline;
        pipeline.user_II = user_II;
        pipeline.II = II;
        pipeline.label = label;
        loop_pipelines[label] = pipeline;
    }

    bool isLoopPipelined(std::string label) {
        return (loop_pipelines.find(label) != loop_pipelines.end());
    }

    LOOP_PIPELINE getLoopPipeline(std::string label) {
        assert(isLoopPipelined(label));
        return loop_pipelines[label];
    }

    unsigned numLoopPipelines() {
        return loop_pipelines.size();
    }

    void setParameter(std::string name, std::string value) {
        parameters[name] = value;
    }

    /// isAccelerated - returns true if the function name is marked for
    /// acceleration
    bool isAccelerated(const Function &F) const {
        std::string name = F.getName();
        return isAccelerated(name);
    }

    bool isAccelerated(const std::string &function) const {
        return functions.find(function) != functions.end();
    }

    bool isPCIeFlow() const {
        std::string PROC_PARAM = "processor";
        return ((parameters.find(PROC_PARAM) != parameters.end()) 
                    && (parameters.find(PROC_PARAM)->second == "host"));
    }

    bool isParallelAccel(const Function &F) const {
        std::string name = F.getName();
        // pcie hack to generate polling functions
        return isPCIeFlow() || isParallelAccel(name);
    }

    bool isParallelAccel(const std::string &function) const {
        return parallelfunctions.find(function) != parallelfunctions.end();
    }

    unsigned numAccelerators() const {
        return functions.size();
    }
	
    void addOperation(const std::string op_name, const float FMax, const float
            CritDelay, const float StaticPower, const float DynamicPower, const
            int LUTs, const int Registers, const int LogicElements, const int
            DSPElements, const int Latency) {
        Operations[op_name] = new Operation(FMax, CritDelay, StaticPower,
                DynamicPower, LUTs, Registers, LogicElements, DSPElements,
                Latency);
    }

    void setDeviceSpecs(const std::string _DeviceFamily, const std::string
            _Device, const int _maxLEs, const int _maxM4Ks, const int
            _maxRAMBits, const int _maxDSPs) {
        DeviceFamily = _DeviceFamily;
        Device = _Device;
        maxLEs = _maxLEs;
        maxM4Ks = _maxM4Ks;
        maxRAMBits = _maxRAMBits;
        maxDSPs = _maxDSPs;
    }

    std::string getOpNameFromInst(Instruction *instr);
	bool isAnyOfTwoOperandsZero(Instruction *instr);
	bool populateStringsForTwoOperandInstr(Instruction *instr, std::string params[10]);
	bool populateStringsForThreeOperandInstr(Instruction *instr, std::string params[10]);
	bool populateStringsForBinaryOperator(Instruction *instr, std::string params[10]);
	void populateStringsForICmpInst(const ICmpInst *cmp, std::string params[10]);
	void populateStringsForFCmpInst(const FCmpInst *cmp, std::string params[10]);
	bool isBinaryOperatorNoOp(Instruction *instr);
	bool isSecondOperandZero(Instruction *instr);
	bool isSecondOperandPowerOfTwo(Instruction *instr);
	bool isSecondOperandConstant(Instruction *instr);
	int maxBitWidth(int width0, int width1, int width2);
	bool isSupportedBitwidth(int width);
	std::string assembleOpNameFromStringList(std::string params[10]);

    Operation* getOpFromInst(Instruction *instr) {
        return getOperationRef(getOpNameFromInst(instr));
    }

    std::string getDeviceFamily() { return DeviceFamily; }

    void check_op_exists(const std::string op_name) {
        if (Operations.find(op_name) == Operations.end()) {
            errs() << "Couldn't find operation '" << op_name <<
                "' in device tcl file!\n";
            assert(0);
        }
    }
    Operation* getOperationRef(const std::string op_name) {
        check_op_exists(op_name);
        return Operations[op_name];
    }

    Operation &getOperation(const std::string op_name) {
        check_op_exists(op_name);
        return *Operations[op_name];
    }

    int getMaxM4Ks() { return maxM4Ks; }
    int getMaxLEs() { return maxLEs; }
    int getMaxRAM() { return maxRAMBits; }
    int getMaxDSPs() { return maxDSPs; }

private:
    std::set<std::string> functions;
    std::set<std::string> parallelfunctions;
    std::map<std::string, LOOP_PIPELINE> loop_pipelines;
    std::map<std::string, std::string> parameters;
    std::map<std::string, Operation*> Operations;
	std::map<std::string, int> cacheParameters;
	std::string dcacheType;
    std::string DeviceFamily;
    std::string Device;
    int maxLEs;
    int maxM4Ks;
    int maxRAMBits;
    int maxDSPs;
};

} // End legup namespace

#endif
