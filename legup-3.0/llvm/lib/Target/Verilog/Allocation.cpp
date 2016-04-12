//===-- Allocation.cpp ------------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the Allocation object
//
//===----------------------------------------------------------------------===//

#include "Allocation.h"
#include "Ram.h"
#include "Binding.h"
#include "BipartiteWeightedMatchingBinding.h"
#include "utils.h"
#include "LegupConfig.h"
#include "FiniteStateMachine.h"
#include <iostream>
#include <iomanip>

using namespace llvm;
using namespace legup;

namespace legup {

// x * 10 is equivalent to:
// = x * (2^3 + 2)
// = (x << 3) + (x << 1)
// quartus will not infer a DSP if a multiply by constant
// can be replaced by shifts (which are free) and at most one addition
// to see if this is possible:
// 1) calculate the closest power of two
// 2) can get there by adding/subtracting x or (x << n)?
bool canReplaceMultiplyByConstantWithShiftAdd(uint64_t multiplierInput) {
    uint64_t closestPower2, diff, l, addPower2, newdiff;
    int debug = 0;

    if (LEGUP_CONFIG->getParameterInt("MULT_BY_CONST_INFER_DSP")) {
        return false;
    }

    if (debug) printf("multiplierInput: %d\n", multiplierInput);
    l = log2((double)multiplierInput)+0.5;
    if (debug) printf("log2(multiplierInput): %d\n", l);
    closestPower2 = pow(2,l);
    if (debug) printf("closestPower2: %d\n", closestPower2);
    diff = labs(multiplierInput-closestPower2);
    if (debug) printf("diff=abs(multiplierInput-pow2): %d\n", diff);
    // multiplierInput is a power
    if (diff == 0) return true;

    // within one addition/subtraction of multiplierInput << x
    l = log2((double)diff)+0.5;
    if (debug) printf("log2(multiplierInput): %d\n", l);
    addPower2 = pow(2,l);
    if (debug) printf("addPower2: %d\n", addPower2);
    newdiff = labs(diff-addPower2);
    if (debug) printf("newdiff=abs(diff-addPower2): %d\n", newdiff);
    if (newdiff == 0) return true;

    if (debug) printf("%d will infer a DSP\n", multiplierInput);
    return false;
}

// determines when a signal comes from the memory controller output
// for instance in this case %113 comes from memory:
//  %112 = load i16* %111, align 2, !tbaa !0
//  %113 = sext i16 %112 to i32
bool from_memory_controller(Value *value) {
    if (isa<SExtInst>(value) || isa<ZExtInst>(value)) {
        Instruction *ext = dyn_cast<Instruction>(value);
        Value *op = ext->getOperand(0);
        if (isa<LoadInst>(op)) {
            return true;
        }
    }
    return false;
}

// detect multipliers with identical inputs:
// 1) a shared input
// 2) one input coming from the memory controller (second shared input)
// note: commutativity matters for multiply
void Allocation::detect_multipliers_with_identical_inputs() {
    map<pair<Value*, Value*>, Instruction*> multiplier_shared;
    // using the NULL pointer as a placeholder for memory controller
    Value *mem_controller = 0;

    for (Module::iterator F = module->begin(), E = module->end(); F != E; ++F) {

        multiplier_shared.clear();
        for (Function::iterator b = F->begin(), be = F->end(); b != be; ++b) {
            for (BasicBlock::iterator I = b->begin(), ie = b->end(); I
                    != ie; ++I) {
                if (!isMul(I)) continue;
                Value *vop0 = I->getOperand(0);
                Value *vop1 = I->getOperand(1);
                if (from_memory_controller(vop0)) vop0 = mem_controller;
                if (from_memory_controller(vop1)) vop1 = mem_controller;

                pair<Value *, Value*> key(vop0, vop1);
                if (multiplier_shared.find(key) != multiplier_shared.end()) {
                    same_inputs[F].insert(I);
                    same_inputs[F].insert(multiplier_shared[key]);
                    //errs() << "Detected identical inputs:\n";
                    //errs() << *I << "\n";
                    //errs() << *multiplier_shared[key] << "\n";
                }
                multiplier_shared[key] = I;
            }
        }
    }
}


Allocation::Allocation(Module *M) : genericRAMs(false), module(M), dataSize(0),
    bindingFile("binding.legup.rpt", FileError),
    patternFile("patterns.legup.rpt", FileError),
    schedulingFile("scheduling.legup.rpt", FileError),
    multipumpingFile("multipumping.legup.rpt", FileError),
    pipelineDotFile("pipeline.dot", FileError),
    pipeliningRTLFile("pipelining.rtl.legup.rpt", FileError) {

    assert(FileError.empty() && "Error opening log files");
    TD = new TargetData(module);

    pipelineDotFile << getFileHeader();
    bindingFile << getFileHeader();
    patternFile << getFileHeader();
    schedulingFile << getFileHeader();
    multipumpingFile << getFileHeader();
    pipeliningRTLFile << getFileHeader();

    // first 2 tags are reserved for processor memory and the null pointer
    ramTagNum = 2;

    allocateGlobalVarRAMs();

    allocateStackRAMs();

//    genericRAMs = structsExistInCode();
	genericRAMs = true;

    detect_multipliers_with_identical_inputs();

}


GenerateRTL *Allocation::createGenerateRTL(Function *F) {
    GenerateRTL *HW = new GenerateRTL(this, F);

    mapFctModule[F] = HW;
    hwList.push_back(HW);

    return HW;
}

// get ram tag number, needed for initializing constant pointers
int Allocation::getRamTagNum(const Value * op) {
    RAM* r = getRAM(op);

    return mapRamTag[r];
}

std::string Allocation::verilogName(const Value *val) {
    const Value *value = val;
     return globalScope.verilogName(value);
}

std::string Allocation::verilogNameFunction(const Value *val, Function *F) {
    assert(F);
    // keep global updated

    const Value *value = val;
    globalScope.verilogName(value);
    return functionScope[F].verilogName(value);

}

RAM* Allocation::getRAM(const Value *I) {

    if (mapValueRam.find(I) == mapValueRam.end()) {
        errs() << "getRam: " << *I << "\n";

        errs() << "RAM not defined for: " << I->getName() << "\n";
    }
    assert (mapValueRam.find(I) != mapValueRam.end());

    return mapValueRam[I];
}

RAM* Allocation::allocateRAM(const Value *I) {

    assert (mapValueRam.find(I) == mapValueRam.end());

    RAM *r = new RAM(I, this);
    assert(r);

    ramList.push_back(r);
    mapRamTag[r] = ramTagNum++;
    mapValueRam[I] = r;

    // reserve name (avoid _var### for rams)
    verilogName(I);

    return r;
}

void Allocation::addGlobalDefines() {
    // extra tag for the NULL tag
    unsigned tagSize = requiredBits(getNumRAMs() + 1);

    // tag size should always be 8
    assert(tagSize <= getTagSize());
    tagSize = getTagSize();

    setDefine("MEMORY_CONTROLLER_TAG_SIZE", utostr(tagSize),
            "Number of RAM elements: " + utostr(getNumRAMs()));

    // reserve tag 0 as the NULL tag
    defineList["TAG_NULL"] = "`MEMORY_CONTROLLER_TAG_SIZE'd0";
    // reserve tag 1 as the Processor Memory tag
    defineList["TAG_PROCESSOR"] = "`MEMORY_CONTROLLER_TAG_SIZE'd1";

    dataSize = (usesGenericRAMs()) ? 64 : 32;

    unsigned tag = 2;
    if (LEGUP_CONFIG->numAccelerators() == 0) {
		for (Allocation::const_ram_iterator i = ram_begin(), e = ram_end();
		        i != e; ++i) {
		    const RAM *R = *i;

            std::string tmp;
            raw_string_ostream Out(tmp);
            Out << getValueStr(R->getValue());
            defineCommentList[R->getTag()] = Out.str();

            defineList[R->getTag()] = "`MEMORY_CONTROLLER_TAG_SIZE'd" + utostr(tag);
		    tag++;
		    dataSize = std::max(dataSize, R->getDataWidth());
            defineList[R->getTagAddrName()] = R->getTagAddr();
		}
	}
    defineList["MEMORY_CONTROLLER_ADDR_SIZE"] =
        utostr((int)getTargetData()->getPointerSizeInBits());
    defineList["MEMORY_CONTROLLER_DATA_SIZE"] = utostr(dataSize);
}

bool Allocation::structsExistInCode() {
    for (std::map<const Value*, RAM*>::iterator i =
            mapValueRam.begin(), e = mapValueRam.end(); i != e; ++i) {
        RAM *R = i->second;
        if (R->isStruct()) {
            return true;
        }
    }

    return false;
}

void Allocation::allocateGlobalVarRAMs() {
    for (Module::global_iterator I = module->global_begin(), E =
            module->global_end();
            I != E; ++I) {
        if (I->isDeclaration()) continue;
        if (I->getName() == "llvm.used") continue;
        if (isaPrintfString(I)) continue;
        allocateRAM(I);
    }
}

void Allocation::allocateStackRAMs() {
    for (Module::iterator F = module->begin(), E = module->end(); F != E; ++F) {
        for (Function::iterator b = F->begin(), be = F->end(); b != be; ++b) {
            for (BasicBlock::iterator instr = b->begin(), ie = b->end(); instr
                    != ie; ++instr) {
                if (const AllocaInst *alloca = dyn_cast<AllocaInst>(instr)) {
                    allocateRAM(alloca);
                }
            }
        }
    }
}

GenerateRTL *Allocation::getGenerateRTL(Function *F) {
    if (mapFctModule.find(F) == mapFctModule.end()) {
        errs() << "Function not defined: " << F->getName() << "\n";
    }
    assert (mapFctModule.find(F) != mapFctModule.end());

    return mapFctModule[F];
}

int Allocation::getRegCount(GenerateRTL *hw) {
    int RegCount = 0;
    Function *F = hw->getFunction();
    for (std::map<const Value*, std::string>::iterator i =
            functionScope[F].uniquename.begin(), e = functionScope[F].uniquename.end(); i
            != e; ++i) {
        if(const Type *T = dyn_cast<IntegerType>(i->first->getType()))
            RegCount += T->getPrimitiveSizeInBits();
        else
            RegCount += getTargetData()->getPointerSizeInBits();
    }
    return RegCount;
}

int Allocation::getVarCount(GenerateRTL *hw) {
    return functionScope[hw->getFunction()].uniquename.size();
}

Allocation::~Allocation() {

    for (Allocation::hw_iterator r = hw_begin(), re = hw_end();
            r != re; ++r) {
        assert(*r);
        delete *r;
    }
    for (Allocation::ram_iterator i = ram_begin(), e = ram_end(); i != e; ++i) {
        assert(*i);
        delete *i;
    }
    assert(TD);
    delete TD;
}

// Fill the minFUs map by counting max number of operations in any state
void Allocation::calculateMinMaxFUs (
    FiniteStateMachine *fsm, std::map <std::string, int> &minFUs,
    std::map <std::string, int> &maxFUs) {

    // determine how many functional units we need
    for (FiniteStateMachine::iterator state = fsm->begin(), se = fsm->end();
            state != se; ++state) {
        // FUs needed in this state (used for Bipartite Weighted Matching)
        std::map <std::string, int> ops;

        for (State::iterator i = state->begin(), ie = state->end(); i != ie;
                ++i) {
            Instruction *I = *i;
            std::string opName = LEGUP_CONFIG->getOpNameFromInst(I);

            // when opName is empty then the operation will be optimized away
            // so don't increment the number of functional units (ops)
            // ie. divide by a power of 2
            if (opName.empty()) continue;

            if (BipartiteWeightedMatchingBinding::isInstructionSharable(I,
                        this)) {
                ops[opName]++;
            }
        }

        for (std::map<std::string, int>::iterator i = ops.begin(), ie =
                ops.end(); i != ie; ++i) {
            std::string opName = i->first;
            int num = i->second;

            minFUs[opName] = std::max(minFUs[opName], num);
            maxFUs[opName] += num;
        }
    }

}

void Allocation::calculateRequiredFunctionalUnits() {

    std::map <Function *, std::map <std::string, int> > mapFunctionMinFUs;
    std::map <Function *, std::map <std::string, int> > mapFunctionMaxFUs;

    // calculate required functional units for each module
    // calculate min/max DSPs required for each module
    for (hw_iterator i = hw_begin(), ie = hw_end(); i != ie; ++i) {
        GenerateRTL *HW = *i;

        // minFUs is the number of FUs which will be created for a given
        // operation name, determined by the maximum number of those operations
        // which occur in a given state
        std::map <std::string, int> minFUs;

        // maxFUs is the total number of times each FU is used in this function
        std::map <std::string, int> maxFUs;

        FiniteStateMachine *fsm = HW->getFSM();

        // Fill the minFUs/maxFUs map
        calculateMinMaxFUs(fsm,
                minFUs, maxFUs);
               //mapFunctionMinFUs[F], mapFunctionMaxFUs[F]);

        Function *F = HW->getFunction();
        mapFunctionMinFUs[F] = minFUs;
        mapFunctionMaxFUs[F] = maxFUs;
    }

    // always start off using the minimum FUs per function
    mapFunctionNumFUs = mapFunctionMinFUs;

    // if we want to restrict ourselves to the number of DSPs on the FPGA
    if (LEGUP_CONFIG->getParameterInt("RESTRICT_TO_MAXDSP")) {
        restrictToMaxDSPs(mapFunctionMinFUs, mapFunctionMaxFUs);
    }

    std::string s;
    std::stringstream ss;
    for (std::map <Function *, std::map <std::string, int> >::iterator i =
            mapFunctionNumFUs.begin(), ie = mapFunctionNumFUs.end(); i != ie;
            ++i) {
        Function *F = i->first;

        ss << "--------------------------------------------------------------------------------\n";
        ss << "Function: " << F->getNameStr() << "\n";
        ss << "--------------------------------------------------------------------------------\n";
        ss << left << setw(30) << "Function unit type:" << setw(30) << 
            "Number Required" << "\n";
        for (std::map <std::string, int> ::iterator j =
                mapFunctionNumFUs[F].begin(), je = mapFunctionNumFUs[F].end();
                j != je; ++j) {
            std::string fu = j->first;
            int num = j->second;
            ss << left << setw(30) << fu << setw(30) << num << "\n";
        }
    }
    ss << "\n";
    formatted_raw_ostream out(getBindingFile());
    ss.flush();
    out << ss.str();

}

// This function restricts the multiplier functional units in such
// a way that we don't use more DSPs than available on the device
// Note: We only deal with functional units that use DSPs in this function
// Basically we assign functional units in round robin fashion one at a time
// until all the DSPs are used on the FPGA
void Allocation::restrictToMaxDSPs(
    std::map <Function *, std::map <std::string, int> > mapFunctionMinFUs,
    std::map <Function *, std::map <std::string, int> > mapFunctionMaxFUs) {

    // the first iteration collects the initial running totals.
    bool firstIteration = true;
    unsigned runningTotalMax = 0;
    unsigned runningTotal = 0;
    bool changed = true;
    while (changed) {
        changed = false;

        for (hw_iterator i = hw_begin(), ie = hw_end(); i != ie; ++i) {
            GenerateRTL *HW = *i;
            Function *F = HW->getFunction();

            std::map <std::string, int> minFUs = mapFunctionMinFUs[F];

            for (std::map<std::string, int>::iterator i = minFUs.begin(),
                    ie = minFUs.end(); i != ie; ++i) {
                std::string opName = i->first;

                Operation *Op = LEGUP_CONFIG->getOperationRef(opName);
                assert(Op);
                unsigned DSPs = Op->getDSPElements();
                if (!DSPs) continue;

                if (firstIteration) {
                    runningTotalMax += DSPs * mapFunctionMaxFUs[F][opName];
                    runningTotal += DSPs * mapFunctionNumFUs[F][opName];
                    continue;
                }

                // we have allocated the max FUs necessary for this
                // operand in the function
                if (mapFunctionNumFUs[F][opName] ==
                        mapFunctionMaxFUs[F][opName]) continue;

                unsigned maxDSPs = LEGUP_CONFIG->getMaxDSPs();

                /*
                errs() << "Opname: " << opName << "\n";
                errs() << "DSPs: " << DSPs << "\n";
                errs() << "Total DSPs: " << runningTotal << "\n";
                unsigned requiredFUs = runningTotal/DSPs;
                errs() << "Required FUs: " << requiredFUs << "\n";
                errs() << "Max DSPs: " << maxDSPs << "\n";
                unsigned maxFUsAvail = maxDSPs/DSPs;
                errs() << "Max FUs: " << maxFUsAvail << "\n";
                */

                if (runningTotal > maxDSPs) {
                    DEBUG(errs() << "Using maximum number of DSPs: " <<
                        runningTotal << "/" << maxDSPs << "\n");
                    break;
                } else {
                    runningTotal += DSPs;
                    mapFunctionNumFUs[F][opName]++;
                    changed = true;
                }
            }
        }
        if (firstIteration) {
            firstIteration = false;
            changed = true;
            DEBUG(errs() << "Minimum DSPs: " << runningTotal << "\n");
        }
    }

    DEBUG(errs() << "Expected DSPs: " << runningTotal << "\n");
    DEBUG(errs() << "Without round robin DSPs: " << runningTotalMax << "\n");
}

// returns true if the instruction infers a DSP block
bool Allocation::useExplicitDSP(Instruction *I) {
    if (!isMul(I)) return false;

    // if we are multiplying by a constant then don't use a DSP
    ConstantInt * ci = dyn_cast<ConstantInt>(I->getOperand(0));
    if (ci && canReplaceMultiplyByConstantWithShiftAdd(ci->getZExtValue())) {
        return false;
    }
    ci = dyn_cast<ConstantInt>(I->getOperand(1));
    if (ci && canReplaceMultiplyByConstantWithShiftAdd(ci->getZExtValue())) {
        return false;
    }

    // squares don't use DSPs?
    // actually they do
    //if (I->getOperand(0) == I->getOperand(1)) return false;

    if (!LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
        Function* F = I->getParent()->getParent();
        if (same_inputs.find(F) != same_inputs.end() &&
            same_inputs[F].find(I) != same_inputs[F].end()) {
                return false;
        }
    }

    return true;
}


bool Allocation::usesParallelAPI (const Function &F, bool &usesLocks, bool &usesBarriers, bool &usesOMP) const {

	bool usesParallel = false;
    for (Function::const_iterator BB = F.begin(), EE = F.end(); BB != EE; ++BB) {
		for (BasicBlock::const_iterator I = BB->begin(), EE = BB->end(); I != EE; ++I) {
		    if (const CallInst *CI = dyn_cast<CallInst>(I)) {
		        Function *calledFunction = CI->getCalledFunction();
		        // ignore indirect function calls
		        if (!calledFunction) continue;

				if (calledFunction->getName().str() == "legup_lock") { //uses locks
					usesLocks = true;
					usesParallel = true;
				} else if (calledFunction->getName().str() == "legup_get_thread_num" 
						|| calledFunction->getName().str() == "legup_set_num_threads") { //uses omp core
					usesOMP = true;
					usesParallel = true;
				} else if (calledFunction->getName().str() == "legup_barrier_wait") {
					usesBarriers = true;
					usesParallel = true;
				}
		    }
		}
	}
	return usesParallel;
}

} // End legup namespace

