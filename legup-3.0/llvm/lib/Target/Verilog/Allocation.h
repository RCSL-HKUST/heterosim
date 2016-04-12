//===-- Allocation.h - Allocation Information -------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// The Allocation class stores the Rams, RTL, and GlobalNames for a circuit
//
//===----------------------------------------------------------------------===//

#ifndef LEGUP_ALLOCATION_H
#define LEGUP_ALLOCATION_H

#include "llvm/Analysis/AliasAnalysis.h"
#include "llvm/Instructions.h"
#include "GlobalNames.h"
#include "GenerateRTL.h"
#include <list>

using namespace llvm;

namespace legup {

class RAM;
class LegupConfig;
class RTLModule;
class LiveVariableAnalysis;
class MinimizeBitwidth;

/// Allocation - Stores the global information needed for the circuit
/// RTLModules, TargetData, GlobalNames, RAMs
/// @brief Allocation Class
class Allocation {
public:
    Allocation(Module *M);
    ~Allocation();

    GenerateRTL *createGenerateRTL(Function *F);

    /// verilogName - return the verilog variable name of a LLVM value
    std::string verilogName(const Value *val);

    /// scope specific to a function
    std::string verilogNameFunction(const Value *val, Function *F);

    const TargetData* getTargetData() const { return TD; }

    /// RTLModule iterator methods
    ///
    typedef std::list<RTLModule*> rtlListType;
    typedef rtlListType::iterator       rtl_iterator;
    typedef rtlListType::const_iterator const_rtl_iterator;

    inline rtl_iterator       rtl_begin()       { return rtlList.begin(); }
    inline const_rtl_iterator rtl_begin() const { return rtlList.begin(); }
    inline rtl_iterator       rtl_end  ()       { return rtlList.end();   }
    inline const_rtl_iterator rtl_end  () const { return rtlList.end();   }


    /// GenerateRTL iterator methods
    ///
    typedef std::list<GenerateRTL*> HwListType;
    typedef HwListType::iterator       hw_iterator;
    typedef HwListType::const_iterator const_hw_iterator;

    inline hw_iterator       hw_begin()       { return hwList.begin(); }
    inline const_hw_iterator hw_begin() const { return hwList.begin(); }
    inline hw_iterator       hw_end  ()       { return hwList.end();   }
    inline const_hw_iterator hw_end  () const { return hwList.end();   }

    /// RAM iterator methods
    ///
    typedef std::list<RAM*> RamListType;
    typedef RamListType::iterator       ram_iterator;
    typedef RamListType::const_iterator const_ram_iterator;

    inline ram_iterator       ram_begin()       { return ramList.begin(); }
    inline const_ram_iterator ram_begin() const { return ramList.begin(); }
    inline ram_iterator       ram_end  ()       { return ramList.end();   }
    inline const_ram_iterator ram_end  () const { return ramList.end();   }


    /// global `define statements
    ///
    typedef std::map<std::string, std::string> DefineListType;
    typedef DefineListType::iterator       define_iterator;
    typedef DefineListType::const_iterator const_define_iterator;

    inline define_iterator       define_begin()       { return defineList.begin(); }
    inline const_define_iterator define_begin() const { return defineList.begin(); }
    inline define_iterator       define_end  ()       { return defineList.end();   }
    inline const_define_iterator define_end  () const { return defineList.end();   }

    /// setDefine - create a global `define
    void setDefine(std::string name, std::string value, std::string comment="") {
        assert(defineList.find(name) == defineList.end());
        defineList[name] = value;
        defineCommentList[name] = comment;
    }

    std::string getDefineComment(std::string name) const {
        const_define_iterator it = defineCommentList.find(name);
        if (it == defineCommentList.end()) return "";
        return it->second;
    }

    /// allocateRAM - create a RAM object from LLVM value
    RAM* allocateRAM(const Value *I);

    /// getRAM - return the RAM object of a LLVM value
    RAM* getRAM(const Value *I);

    int getRamTagNum(const Value *op);

    /// getNumRAMs - return the number of RAM objects
    unsigned getNumRAMs() const { return mapValueRam.size(); }

    unsigned getTagSize() const { return 9; }

    /// setNoDSPMult - changes multiplier data to non-DSP implementation
    std::string setNoDSPMult(std::string OpName);

    bool usesGenericRAMs() const { return genericRAMs; }

    bool stripRAM(const Value *R);

    GenerateRTL *getGenerateRTL(Function *F);

    Module *getModule() const { return module; }

    void addRTL(RTLModule *rtl) { rtlList.push_back(rtl); }

    /// getRegCount - returns total bits used by variables declared
    int getRegCount(GenerateRTL *hw);

    /// getVarCount - returns total variables declared
    int getVarCount(GenerateRTL *hw);

    /// addGlobalDefines - create global `define statements
    void addGlobalDefines();
    unsigned getDataSize() const { return dataSize; }

    void calculateRequiredFunctionalUnits();

    std::map <std::string, int> &getNumFuncUnits(Function *F)
        { return mapFunctionNumFUs[F]; }

    void addLVA(Function *F, LiveVariableAnalysis *LVA) { LVAmap[F] = LVA; }
    LiveVariableAnalysis* getLVA(Function *F) { return LVAmap[F]; }

    void addMBW(Function *F, MinimizeBitwidth *MBW) { MBWmap[F] = MBW; }
    MinimizeBitwidth* getMBW(Function *F) { return MBWmap[F]; }

    void addAA(AliasAnalysis *A) {AA = A;}
    AliasAnalysis* getAA() { return AA; }

    // log files
    raw_fd_ostream &getBindingFile() { return bindingFile; }
    raw_fd_ostream &getPatternFile() { return patternFile; }
    raw_fd_ostream &getSchedulingFile() { return schedulingFile; }
    raw_fd_ostream &getMultipumpingFile() { return multipumpingFile; }
    raw_fd_ostream &getPipelineDotFile() { return pipelineDotFile; }
    raw_fd_ostream &getPipeliningRTLFile() { return pipeliningRTLFile; }

    bool useExplicitDSP(Instruction *I);
	bool usesParallelAPI (const Function &F, bool &usesLocks, bool &usesBarriers, bool &usesOMP) const;

private:
    void allocateGlobalVarRAMs();
    void allocateStackRAMs();
    bool structsExistInCode();
    void calculateMinMaxFUs (
            FiniteStateMachine *fsm,
            std::map <std::string, int> &minFUs,
            std::map <std::string, int> &maxFUs);
    void restrictToMaxDSPs(
        std::map <Function *, std::map <std::string, int> > mapFunctionMinFUs,
        std::map <Function *, std::map <std::string, int> > mapFunctionMaxFUs);

    std::map<Function*, GenerateRTL*> mapFctModule;
    std::map<const Value*, RAM*> mapValueRam;
    std::map<RAM*, int> mapRamTag;
    HwListType hwList;
    rtlListType rtlList;
    RamListType ramList;
    DefineListType defineList;
    DefineListType defineCommentList;
    bool genericRAMs;
    int ramTagNum;

    Module *module;
    std::map<Function*, GlobalNames> functionScope;
    GlobalNames globalScope;
    const TargetData* TD;
    unsigned dataSize;
    std::string FileError;
    std::map <Function *, std::map <std::string, int> > mapFunctionNumFUs;
    std::map<Function*, LiveVariableAnalysis*> LVAmap;
    std::map<Function*, MinimizeBitwidth*> MBWmap;
    AliasAnalysis *AA;
    raw_fd_ostream bindingFile, patternFile, schedulingFile, multipumpingFile,
                   pipelineDotFile, pipeliningRTLFile;
    std::map<Function*, std::set<Instruction*> > same_inputs;
    void detect_multipliers_with_identical_inputs();
};

} // End legup namespace

#endif
