//===-- GenerateRTL.cpp -----------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the GenerateRTL object
//
//===----------------------------------------------------------------------===//

#include "Allocation.h"
#include "GenerateRTL.h"
#include "BipartiteWeightedMatchingBinding.h"
#include "PatternBinding.h"
#include "SchedulerDAG.h"
#include "SDCScheduler.h"
#include "ASAPScheduler.h"
#include "LegupPass.h"
#include "LegupConfig.h"
#include "Ram.h"
#include "utils.h"
#include "RTL.h"
#include "llvm/Pass.h"
#include "llvm/Support/InstVisitor.h"
#include "llvm/Support/InstIterator.h"
#include "llvm/Instructions.h"
#include "llvm/Analysis/AliasAnalysis.h"

using namespace llvm;
using namespace legup;


namespace legup {

void GenerateRTL::updateOperationUsage (std::map <std::string, int>
        &_OperationUsage) {
    for(std::map<std::string, int>::iterator i =
            OperationUsageFunction.begin(), e = OperationUsageFunction.end(); i
            != e; ++i) {
        std::string OpName = i->first;
        if (_OperationUsage.find(OpName) == _OperationUsage.end()) {
            _OperationUsage[OpName] = i->second;
        } else {
            _OperationUsage[OpName] += i->second;
        }
    }
}

void GenerateRTL::setOperationUsageFunction(Instruction *instr) {
    //mem related instr should not be counted
    //as it isn't an "operation" with an fmax/area.
    if(isMem(instr)) return; 
    
    std::string OpName = LEGUP_CONFIG->getOpNameFromInst(instr);
    if (OperationUsageFunction.find(OpName) == OperationUsageFunction.end()) {
        OperationUsageFunction[OpName] = 1;
    } else {
        OperationUsageFunction[OpName] += 1;
    }
}



std::string GenerateRTL::verilogName(const Value &val) {
    return verilogName(&val);
}

// return the unique Verilog identifier for val
std::string GenerateRTL::verilogName(const Value *val) {
    // keep global updated
    return alloc->verilogNameFunction(val, Fp);
}




RAM* GenerateRTL::allocateRAM(const Value *I) {
    RAM *r = alloc->getRAM(I);

    return r;
}

// get ram from a GetElementPtrInst, or getElementPtr constant
RAM* GenerateRTL::getRam(Value *op) {
    const Value *ram;

    DEBUG(errs() << "getRam: " << *op << "\n");

    ram = op;
    if (const User *U = dyn_cast<User>(op)) {
        if (U->getNumOperands() > 1) {
            ram = U->getOperand(0);
        }
    }
    return alloc->getRAM(ram);
}

// get ram from a load/store pointer operand
RAM* GenerateRTL::getLocalRam(Value *op) {
    const Value *ram;

    //errs() << "getLocalRam: " << *op << "\n";

    ram = op;
    // handle cases like:
    // %st.i.0 = phi i32* [ getelementptr inbounds ([3 x [3 x i32]]* @main.A, i32 0, i32 0, i32 0), %0 ], [ %6, %4 ]
    // assume the phi isn't going to switch to another array
    for (int depth = 0; depth < 10; depth++) {
        const User *U = dyn_cast<User>(ram);
        if (U->getNumOperands() > 1 || isa<BitCastInst>(U)) {
            ram = U->getOperand(0);
        } else {
            break;
        }
    }
    RAM *r = alloc->getRAM(ram);
    //errs() << "Found Ram: " << r->getName() << "\n";
    assert(r && "Using LOCAL_RAMS - all rams must be trivial to detect");
    return r;
}


// get ram address from a GetElementPtrInst, or getElementPtr constant
RTLSignal *GenerateRTL::getGEP(State *state, User *GEP) {


    RTLSignal *basePointer = getOp(state, GEP->getOperand(0));
    //RTLWidth w("`MEMORY_CONTROLLER_ADDR_SIZE-1");
    //basePointer->setWidth(w);

    RTLSignal *offset = getGEPOffset(state, GEP);
    if (!offset) {
        return basePointer;
    }

    // add offset to base pointer
    RTLOp *gep = rtl->addOp(RTLOp::Add);
    gep->setOperand(0, basePointer);
    gep->setOperand(1, offset);

    return gep;
}


RTLSignal *GenerateRTL::getGEPOffset(State *state, User *GEP) {

    RTLSignal *gepOffset = NULL;

    gep_type_iterator GTI = gep_type_begin(GEP);
    for (User::op_iterator i = GEP->op_begin() + 1, e = GEP->op_end(); i != e;
            ++i, ++GTI) {
        Value *Op = *i;

        RTLSignal *offset = getByteOffset(state, Op, GTI);
        if (!offset) continue;

        if (!gepOffset) {
            gepOffset = offset;
        } else {
            RTLOp *newGepOffset = rtl->addOp(RTLOp::Add);
            newGepOffset->setOperand(0, gepOffset);
            newGepOffset->setOperand(1, offset);
            RTLWidth w("`MEMORY_CONTROLLER_ADDR_SIZE-1");
            gepOffset->setWidth(w);
            gepOffset = newGepOffset;
        }
    }

    return gepOffset;

}

RTLSignal *GenerateRTL::getByteOffset(State *state, Value *Op, gep_type_iterator
        GTI) {

    // Build a mask for high order bits.
    const TargetData* TD = alloc->getTargetData();
    unsigned IntPtrWidth = TD->getPointerSizeInBits();
    uint64_t PtrSizeMask = ~0ULL >> (64-IntPtrWidth);

    // apply mask
    uint64_t Size =
        TD->getTypeAllocSize(GTI.getIndexedType()) & PtrSizeMask;


    RTLWidth w("`MEMORY_CONTROLLER_ADDR_SIZE-1");
    RTLOp *offset = rtl->addOp(RTLOp::Mul);
    offset->setOperand(0, rtl->addConst(utostr(Size), w));

    if (ConstantInt *OpC = dyn_cast<ConstantInt>(Op)) {
        if (OpC->isZero()) return NULL;

        // Handle a struct index, which adds its field offset.
        if (StructType *STy = dyn_cast<StructType>(*GTI)) {

            return rtl->addConst(utostr(
                TD->getStructLayout(STy)->
                getElementOffset(OpC->getZExtValue())), w);
        }

        offset->setOperand(1, getConstantSignal(OpC));

    } else {

        offset->setOperand(1, getOp(state, Op));

    }

    return offset;

}




bool GenerateRTL::fromSameState(Value *v, State *state) {
    // never gets called
    assert(0);
    errs() << "fromSameState: " << *v << "\n";
    Instruction *operand = dyn_cast<Instruction>(v);
    if (!operand || isa<AllocaInst>(operand)) {
        return false;
    }

    errs() << "fromSameState: " << *operand << "\n";
    //if (isa<LoadInst>(operand)) return false;

    if(sched->getFSM(Fp)->getEndState(operand) == state) {
        return true;
    } else {
        return false;
    }
}

// does the value 'v' finish in another state?
bool GenerateRTL::fromOtherState(Value *v, State *state) {
    Instruction *operand = dyn_cast<Instruction>(v);
    if (!operand) return false;

    if(sched->getFSM(Fp)->getEndState(operand) != state) {
        return true;
    } else {
        return false;
    }
}

bool GenerateRTL::usedSameState(Value *instr, State *state) {
    // never called
    assert(0);
    for (Value::use_iterator i = instr->use_begin(), e = instr->use_end(); i
        != e; ++i) {
        Instruction *use = dyn_cast<Instruction>(*i);
        if (!use) continue;
        if(sched->getFSM(Fp)->getEndState(use) == state) {
            return true;
        }
    }
    return false;
}

// is the value 'val' used in a state other than 'state'?
bool GenerateRTL::usedAcrossStates(Value *val, State *state) {
    for (Value::use_iterator i = val->use_begin(), e = val->use_end(); i
        != e; ++i) {
        Instruction *use = dyn_cast<Instruction>(*i);
        if (!use) continue;
        if(sched->getFSM(Fp)->getEndState(use) != state) {
            return true;
        }
    }
    return false;
}

// we need this to create the phi registers because we can see them before they
// are defined.
// For instance given the phi node:
//      %23 = phi i32 [ %37, %legup_memset_4.exit ],
//                    [ 0, %legup_memset_4.exit.preheader ]
// Three signals are created:
//      1. register named: verilogName(%23)_phi_temp
//          The phi_temp register will be assigned in each of the phi's
//          predecessor basic blocks, in this case %legup_memset_4.exit and
//          %legup_memset_4.exit.preheader
//      2. wire named: verilogName(%23)
//          This wire will be connected to the phi_temp register in state
//          'state'
//      3. register named: verilogName(%23)_reg
//          The register will be connected to the wire (from step 2) during
//          state 'state' Note: register is only created if %23 is used in a
//          state other than 'state'
void GenerateRTL::createPHISignals(PHINode *phi, State *state) {

    RTLWidth width(phi->getType());
    RTLSignal *phi_temp = rtl->addReg(verilogName(phi) + "_phi_temp",width);
    if(USE_MB) phi_temp->modifySignalWithMBW(MBW,phi);
    RTLSignal *phiWire = rtl->addWire(verilogName(phi), width);
    if(USE_MB) phiWire->modifySignalWithMBW(MBW,phi);
    connectState(phiWire, state, phi_temp, phi);

    if (usedAcrossStates(phi, state)) {
        //rtl->addWire(verilogName(phi) + "_wire",
        RTLSignal *tempReg = rtl->addReg(verilogName(phi) + "_reg",width);
        if(USE_MB) tempReg->modifySignalWithMBW(MBW,phi);
        connectState(tempReg, state,phiWire, phi);
        //errs() << "Adding " << verilogName(phi) << "_reg to state: " <<
        //    state->getName() << "\n";

    }
}

// like getOp but instead of returning a wire,
// returns a register
RTLSignal *GenerateRTL::getOpReg(Value *v, State* state) {
    if (rtl->exists(verilogName(v) + "_reg")) {
        RTLSignal *reg = rtl->find(verilogName(v) + "_reg");
        return reg;
    } else {
        return getOp(state, v);
    }
}

void GenerateRTL::createMultiPumpMultiplierFU(Instruction *AxB,
        Instruction *CxD) {

    // create multipump
    /*
    multipump	multipump_inst (
        .clk( clk ),
        .clk2x( clk2x ),
        .clk1x_follower( clk1x_follower ),

        .inA( main_1_6_reg_wire ),
        .inB( 32'd12 ),
        .outAxB( main_encode_exit__crit_edge_phitmp_wire ),

        .inC( main_1_5_reg_wire ),
        .inD( -32'd44 ),
        .outCxD( main_encode_exit__crit_edge_phitmp29_wire )
        );
    */

    // registers retain their value so we just need
    // to connect up the divider
    RTLModule *m = rtl->addModule("multipump", "multipump_" + verilogName(AxB));

    // add a comment
    std::string tmp;
    raw_string_ostream Out(tmp);
    Out << "/* " << getValueStr(AxB) << "\n" <<
                    getValueStr(CxD) << "*/";
    m->setBody(Out.str());

    m->addIn("clk")->connect(rtl->find("clk"));
    m->addIn("clk2x")->connect(rtl->find("clk2x"));
    m->addIn("clk1x_follower")->connect(rtl->find("clk1x_follower"));

    Value *vop0 = AxB->getOperand(0);
    Value *vop1 = AxB->getOperand(1);

    // in many cases for a 64-bit multiply, only 32-bit operands are required
    unsigned sizeAxB = max(MBW->getMinBitwidth(vop0),
                        MBW->getMinBitwidth(vop1));

    vop0 = CxD->getOperand(0);
    vop1 = CxD->getOperand(1);

    // in many cases for a 64-bit multiply, only 32-bit operands are required
    unsigned sizeCxD = max(MBW->getMinBitwidth(vop0),
                        MBW->getMinBitwidth(vop1));
    assert(sizeAxB == sizeCxD);

    //RTLWidth width(AxB->getType());
    RTLWidth width(sizeAxB);

    RTLSignal *inA_wire = rtl->addWire(multipumping_pairs_op0[AxB], width);
    m->addIn("inA")->connect(inA_wire);

    RTLSignal *inB_wire = rtl->addWire(multipumping_pairs_op1[AxB], width);
    m->addIn("inB")->connect(inB_wire);

    RTLSignal *outAxB_actual = rtl->addWire(multipumping_pairs[AxB] +
            "_outAxB_actual", RTLWidth(sizeAxB*2));

    m->addOut("outAxB")->connect(outAxB_actual);

    RTLOp *trunc = rtl->addOp(RTLOp::Trunc);
    trunc->setCastWidth(getBitWidth(AxB->getType()));
    trunc->setOperand(0, outAxB_actual);

    RTLSignal *outAxB = rtl->addWire(multipumping_pairs_out[AxB],
            trunc->getWidth());
    outAxB->connect(trunc);

    RTLSignal *outCxD_actual = rtl->addWire(multipumping_pairs[CxD] +
            "_outCxD_actual", RTLWidth(sizeAxB*2));

    m->addOut("outCxD")->connect(outCxD_actual);

    RTLOp *trunc2 = rtl->addOp(RTLOp::Trunc);
    trunc2->setCastWidth(getBitWidth(CxD->getType()));
    trunc2->setOperand(0, outCxD_actual);

    RTLSignal *outCxD = rtl->addWire(multipumping_pairs_out[CxD], trunc2->getWidth());
    outCxD->connect(trunc2);

    RTLSignal *en = rtl->addWire("lpm_mult_" + verilogName(CxD) + "_en");
    m->addIn("clken")->connect(en);

    RTLSignal *inC_wire = rtl->addWire(multipumping_pairs_op0[CxD], width);
    m->addIn("inC")->connect(inC_wire);

    RTLSignal *inD_wire = rtl->addWire(multipumping_pairs_op1[CxD], width);
    m->addIn("inD")->connect(inD_wire);

    //m->addParam("size", utostr(getBitWidth(AxB->getType())));
    m->addParam("size", utostr(sizeAxB));

    if (sizeAxB < getBitWidth(AxB->getType()) && isa<SExtInst>(vop0) &&
            isa<SExtInst>(vop1)) {
        m->addParam("sign", "\"SIGNED\"");
    } else {
        m->addParam("sign", "\"UNSIGNED\"");
    }

}


RTLSignal *GenerateRTL::createMulFU(Instruction *instr, RTLSignal *op0,
        RTLSignal *op1) {
    /*
    lpm_mult	lpm_mult_component (
    .clock (clk2x),
    .dataa (dataa_wire),
    .datab (datab_wire),
    .result (dsp_out),
    .aclr (1'b0),
    .clken (1'b1),
    .sum (1'b0));

    defparam
    lpm_mult_component.lpm_hint = "DEDICATED_MULTIPLIER_CIRCUITRY=YES,MAXIMIZE_SPEED=5",
    lpm_mult_component.lpm_representation = "SIGNED",
    lpm_mult_component.lpm_type = "LPM_MULT",
    lpm_mult_component.lpm_pipeline = 0,
    lpm_mult_component.lpm_widtha = 32,
    lpm_mult_component.lpm_widthb = 32,
    lpm_mult_component.lpm_widthp = 64;
    */

    // registers retain their value so we just need
    // to connect up the divider
    RTLModule *d = rtl->addModule("lpm_mult",
            "lpm_mult_" + verilogName(instr));

    // add a comment
    std::string tmp;
    raw_string_ostream Out(tmp);
    Out << "/* " << getValueStr(instr) << "*/";
    d->setBody(Out.str());

    Value *vop0 = instr->getOperand(0);
    Value *vop1 = instr->getOperand(1);

    const Type *T = vop0->getType();
    unsigned origSize = T->getPrimitiveSizeInBits();

    // in many cases for a 64-bit multiply, only 32-bit operands are required
    unsigned size = max(MBW->getMinBitwidth(vop0),
                        MBW->getMinBitwidth(vop1));

    std::string sign = "\"UNSIGNED\"";

    if (size < origSize) {
        RTLOp *trunc_op0 = rtl->addOp(RTLOp::Trunc);
        trunc_op0->setCastWidth(size);
        trunc_op0->setOperand(0, op0);
        RTLSignal *a = rtl->addWire("lpm_mult_" +
                verilogName(instr) + "_a", RTLWidth(size));
        a->connect(trunc_op0);

        RTLOp *trunc_op1 = rtl->addOp(RTLOp::Trunc);
        trunc_op1->setCastWidth(size);
        trunc_op1->setOperand(0, op1);

        RTLSignal *b = rtl->addWire("lpm_mult_" +
                verilogName(instr) + "_b", RTLWidth(size));
        b->connect(trunc_op1);

        if (isa<SExtInst>(vop0) && isa<SExtInst>(vop1)) {
            sign = "\"SIGNED\"";
        }

        d->addIn("dataa")->connect(a);
        d->addIn("datab")->connect(b);
    } else {
        d->addIn("dataa")->connect(op0);
        d->addIn("datab")->connect(op1);
    }

    RTLSignal *FU_actual = rtl->addWire("lpm_mult_" + verilogName(instr) +
            "_out_actual", RTLWidth(size*2));

    d->addOut("result")->connect(FU_actual);

    RTLSignal *FU = rtl->addWire("lpm_mult_" + verilogName(instr) +
            "_out", RTLWidth(origSize));

    RTLOp *trunc = rtl->addOp(RTLOp::Trunc);
    trunc->setCastWidth(FU->getWidth());
    trunc->setOperand(0, FU_actual);

    FU->connect(trunc);

    RTLSignal *en = rtl->addWire("lpm_mult_" + verilogName(instr) + "_en");

    unsigned pipelineStages = Scheduler::getNumInstructionCycles(instr);
    if (pipelineStages == 0) {
        RTLSignal *NONE = rtl->addConst("");
        d->addIn("clock")->connect(NONE);
    } else {
        d->addIn("clock")->connect(rtl->find("clk"));
    }
    d->addIn("aclr")->connect(ZERO);
    d->addIn("clken")->connect(en);
    d->addIn("sum")->connect(ZERO);

    d->addParam("lpm_pipeline", utostr(pipelineStages));

    // multiplier input sizes must be the same in LLVM
    d->addParam("lpm_widtha", utostr(size));
    d->addParam("lpm_widthb", utostr(size));

    // product width must be double
    d->addParam("lpm_widthp", utostr(size*2));


    d->addParam("lpm_representation", sign);
    //lpm_mult_component.lpm_hint = "DEDICATED_MULTIPLIER_CIRCUITRY=YES,MAXIMIZE_SPEED=5",
    d->addParam("lpm_hint", "\"\"");

    return FU;
}

// instantiate an Altera lpm_divide module
RTLSignal *GenerateRTL::createDivFU(Instruction *instr, RTLSignal *op0,
        RTLSignal *op1) {


    std::set<Instruction *>::iterator instIter;

    // registers retain their value so we just need
    // to connect up the divider
    RTLModule *d = rtl->addModule("lpm_divide",
            "lpm_divide_" + verilogName(instr));

    // add a comment
    std::string tmp;
    raw_string_ostream Out(tmp);
    Out << "/* " << getValueStr(instr) << "*/";
    d->setBody(Out.str());


    RTLSignal *FU = rtl->addWire("lpm_divide_" + verilogName(instr) +
            "_temp_out", RTLWidth(instr->getType()));

    RTLSignal *unused = rtl->addWire(verilogName(instr) +
            "_unused", RTLWidth(instr->getType()));
    if (isDiv(instr)) {
        d->addOut("quotient")->connect(FU);
        d->addOut("remain")->connect(unused);
    } else {
        assert(isRem(instr));
        d->addOut("quotient")->connect(unused);
        d->addOut("remain")->connect(FU);
    }

    RTLSignal *en = rtl->addWire("lpm_divide_" + verilogName(instr) + "_en");

    d->addIn("clock")->connect(rtl->find("clk"));
    d->addIn("aclr")->connect(ZERO);
    d->addIn("clken")->connect(en);

    unsigned pipelineStages = Scheduler::getNumInstructionCycles(instr);
    d->addParam("lpm_pipeline", utostr(pipelineStages));
    // numerator/denominator sizes must be the same in LLVM
    std::string sign = "\"UNSIGNED\"";
    if (instr->getOpcode() == Instruction::SDiv ||
            instr->getOpcode() == Instruction::SRem) {
        sign = "\"SIGNED\"";
    }

    unsigned size = instr->getOperand(0)->getType()->getPrimitiveSizeInBits();
    unsigned minSize = op0->getWidth().numBits(rtl,alloc); 
    std::string fuId = "";
    
    if(this->binding->existsBindingInstrFU(instr)) 
        fuId = this->binding->getBindingInstrFU(instr);
    if(fuId!="" && instructionsAssignedToFU.find(fuId)!=instructionsAssignedToFU.end()) {
        for(std::set<Instruction *>::iterator i =
                instructionsAssignedToFU[fuId].begin(), ie =
                instructionsAssignedToFU[fuId].end(); i != ie; ++i) {
            Instruction *thisInstr = *i;

            RTLSignal *thisSig = rtl->findExists(verilogName(thisInstr->getOperand(0)));
            if(!thisSig) continue;
            unsigned thisSize = thisInstr->getOperand(0)->getType()->getPrimitiveSizeInBits();
            unsigned thisMinSize = thisSig->getWidth().numBits(rtl,alloc);
            if(thisSize>size) size=thisSize;
            if(thisMinSize>minSize) minSize=thisMinSize;         

        }
    }
    if(USE_MB) {
        op0->setWidth(RTLWidth(minSize));
        if(sign=="\"SIGNED\"" && !op0->getSigned() && !(size==minSize)) {
            minSize++;
        }
        size=minSize;
    }
    d->addParam("lpm_widthn", utostr(size));
    d->addIn("numer",RTLWidth(size))->connect(op0);
    FU->setWidth(RTLWidth(size));
    if (!isDiv(instr)) unused->setWidth(RTLWidth(size));
    else FU->setWidth(RTLWidth(size));



    size = instr->getOperand(1)->getType()->getPrimitiveSizeInBits();
    minSize = op1->getWidth().numBits(rtl,alloc); 
    if(fuId!="" && instructionsAssignedToFU.find(fuId)!=instructionsAssignedToFU.end()) {
        for(std::set<Instruction *>::iterator i =
                instructionsAssignedToFU[fuId].begin(), ie =
                instructionsAssignedToFU[fuId].end(); i != ie; ++i) {
            Instruction *thisInstr = *i;
            RTLSignal *thisSig = rtl->findExists(verilogName(thisInstr->getOperand(1)));
            if(!thisSig) continue;
            unsigned thisSize = thisInstr->getOperand(1)->getType()->getPrimitiveSizeInBits();
            unsigned thisMinSize = thisSig->getWidth().numBits(rtl,alloc);
            if(thisSize>size) size=thisSize;
            if(thisMinSize>minSize) minSize=thisMinSize;         
        }
    }
    if(USE_MB) {
        op1->setWidth(RTLWidth(minSize));
        if(sign=="\"SIGNED\"" && !op1->getSigned() && !(size==minSize)) {
            minSize++;
        }
        size=minSize;
    }
    d->addParam("lpm_widthd", utostr(size));
    d->addIn("denom",RTLWidth(size))->connect(op1);
    if (isDiv(instr)) unused->setWidth(RTLWidth(size));
    else FU->setWidth(RTLWidth(size));

    d->addParam("lpm_drepresentation", sign);
    d->addParam("lpm_nrepresentation", sign);
    d->addParam("lpm_hint", "\"LPM_REMAINDERPOSITIVE=FALSE\"");
    RTLWidth w;
    bool isSigned=false;
    if(USE_MB) {
        size = MBW->getMinBitwidth(instr);
        if(fuId!="" && instructionsAssignedToFU.find(fuId)!=instructionsAssignedToFU.end()) {
            for(std::set<Instruction *>::iterator i =
                    instructionsAssignedToFU[fuId].begin(), ie =
                    instructionsAssignedToFU[fuId].end(); i != ie; ++i) {
                Instruction *thisInstr = *i;
                unsigned thisMinSize = MBW->getMinBitwidth(thisInstr);
                if(thisMinSize>size) size=thisMinSize;
            }
        }

        w = RTLWidth(size);
        isSigned = MBW->isSigned(instr);
    }
    else {
        w = RTLWidth(instr->getType());
    }
    RTLSignal *FUout = rtl->addWire("lpm_divide_" + verilogName(instr) +
            "_out", w,RTLWidth(instr->getType()),isSigned);
    FUout->connect(FU);
    return FUout;
}

RTLSignal *GenerateRTL::createFPFU(Instruction *instr, RTLSignal *op0,
        RTLSignal *op1, unsigned opCode) {
    // registers retain their value so we just need
    // to connect up the FP cores 

    int width = instr->getOperand(0)->getType()->getPrimitiveSizeInBits();

    RTLModule *d;
    RTLSignal *FU;
    if (width == 32){
        if (opCode == Instruction::FDiv){
            d = rtl->addModule("altfp_divider",
                    "altfp_div_" + verilogName(instr));
            FU = rtl->addWire("altfp_div_" + verilogName(instr) +
                "_out", RTLWidth(instr->getType()));
        }
        else if (opCode == Instruction::FAdd){
            d = rtl->addModule("altfp_adder",
                "altfp_add_" + verilogName(instr));
            FU = rtl->addWire("altfp_add_" + verilogName(instr) +
                "_out", RTLWidth(instr->getType()));
        }
        else if (opCode == Instruction::FSub){
            d = rtl->addModule("altfp_subtractor",
                "altfp_add_" + verilogName(instr));
            FU = rtl->addWire("altfp_sub_" + verilogName(instr) +
                "_out", RTLWidth(instr->getType()));
        }
        else {
            d = rtl->addModule("altfp_multiplier",
                "altfp_mul_" + verilogName(instr));
            FU = rtl->addWire("altfp_mul_" + verilogName(instr) +
                "_out", RTLWidth(instr->getType()));
        }
    }
    else {
        if (opCode == Instruction::FDiv){
            d = rtl->addModule("altfp_divider64",
                    "altfp_div_" + verilogName(instr));
            FU = rtl->addWire("altfp_div_" + verilogName(instr) +
                "_out", RTLWidth(instr->getType()));
        }
        else if (opCode == Instruction::FAdd){
            d = rtl->addModule("altfp_adder64",
                "altfp_add_" + verilogName(instr));
            FU = rtl->addWire("altfp_add_" + verilogName(instr) +
                "_out", RTLWidth(instr->getType()));
        }
        else if (opCode == Instruction::FSub){
            d = rtl->addModule("altfp_subtractor64",
                "altfp_add_" + verilogName(instr));
            FU = rtl->addWire("altfp_sub_" + verilogName(instr) +
                "_out", RTLWidth(instr->getType()));
        }
        else {
            d = rtl->addModule("altfp_multiplier64",
                "altfp_mul_" + verilogName(instr));
            FU = rtl->addWire("altfp_mul_" + verilogName(instr) +
                "_out", RTLWidth(instr->getType()));
        }
    }

    // enable signal
    create_fu_enable_signals(instr);
    RTLSignal *en = rtl->addWire("altfp_" + verilogName(instr) + "_en");


    // add a comment
    std::string tmp;
    raw_string_ostream Out(tmp);
    Out << "/* " << getValueStr(instr) << "*/";
    d->setBody(Out.str());

    d->addIn("dataa",RTLWidth(width))->connect(op0);
    d->addIn("datab",RTLWidth(width))->connect(op1);

    d->addOut("result")->connect(FU);

    d->addIn("clock")->connect(rtl->find("clk"));
    d->addIn("clk_en")->connect(en);

    return FU;
}

RTLSignal *GenerateRTL::createFCmpFU(Instruction *instr, RTLSignal *op0,
        RTLSignal *op1) {

    int width = instr->getOperand(0)->getType()->getPrimitiveSizeInBits();

    RTLModule *d;
    RTLSignal *FU;
    // registers retain their value so we just need
    // to connect up the core

    if (width == 32){
        d = rtl->addModule("altfp_compare32",
            "altfp_compare32_" + verilogName(instr));
        FU = rtl->addWire("altfp_compare32_" + verilogName(instr) +
            "_out", RTLWidth(instr->getType()));
    }
    else{
        d = rtl->addModule("altfp_compare64",
            "altfp_compare64_" + verilogName(instr));
        FU = rtl->addWire("altfp_compare64_" + verilogName(instr) +
            "_out", RTLWidth(instr->getType()));
    }


    // add a comment
    std::string tmp;
    raw_string_ostream Out(tmp);
    Out << "/* " << getValueStr(instr) << "*/";
    d->setBody(Out.str());

    d->addIn("dataa")->connect(op0);
    d->addIn("datab")->connect(op1);
	
    RTLSignal *unused = rtl->addWire(verilogName(instr) +
        "_unused", RTLWidth(instr->getType()));

    if (const FCmpInst *cmp = dyn_cast<FCmpInst>(instr)) {
        switch (cmp->getPredicate()) {
            case FCmpInst::FCMP_OEQ:  
            case FCmpInst::FCMP_UEQ:  
                d->addOut("aeb")->connect(FU);
                d->addOut("aneb")->connect(unused);
                d->addOut("alb")->connect(unused);
                d->addOut("aleb")->connect(unused);
                d->addOut("agb")->connect(unused);
                d->addOut("ageb")->connect(unused);
                d->addOut("unordered")->connect(unused);
                break;
            case FCmpInst::FCMP_ONE: 
            case FCmpInst::FCMP_UNE:  
                d->addOut("aeb")->connect(unused);
                d->addOut("aneb")->connect(FU);
                d->addOut("alb")->connect(unused);
                d->addOut("aleb")->connect(unused);
                d->addOut("agb")->connect(unused);
                d->addOut("ageb")->connect(unused);
                d->addOut("unordered")->connect(unused);
                break;
            case FCmpInst::FCMP_OLT: 
            case FCmpInst::FCMP_ULT: 
                d->addOut("aeb")->connect(unused);
                d->addOut("aneb")->connect(unused);
                d->addOut("alb")->connect(FU);
                d->addOut("aleb")->connect(unused);
                d->addOut("agb")->connect(unused);
                d->addOut("ageb")->connect(unused);
                d->addOut("unordered")->connect(unused);
                break;
            case FCmpInst::FCMP_OLE: 
            case FCmpInst::FCMP_ULE: 
                d->addOut("aeb")->connect(unused);
                d->addOut("aneb")->connect(unused);
                d->addOut("alb")->connect(unused);
                d->addOut("aleb")->connect(FU);
                d->addOut("agb")->connect(unused);
                d->addOut("ageb")->connect(unused);
                d->addOut("unordered")->connect(unused);
                break;
            case FCmpInst::FCMP_OGT:
            case FCmpInst::FCMP_UGT:
                d->addOut("aeb")->connect(unused);
                d->addOut("aneb")->connect(unused);
                d->addOut("alb")->connect(unused);
                d->addOut("aleb")->connect(unused);
                d->addOut("agb")->connect(FU);
                d->addOut("ageb")->connect(unused);
                d->addOut("unordered")->connect(unused);
                break;
            case FCmpInst::FCMP_OGE: 
            case FCmpInst::FCMP_UGE: 
                d->addOut("aeb")->connect(unused);
                d->addOut("aneb")->connect(unused);
                d->addOut("alb")->connect(unused);
                d->addOut("aleb")->connect(unused);
                d->addOut("agb")->connect(unused);
                d->addOut("ageb")->connect(FU);
                d->addOut("unordered")->connect(unused);
                break;
            default: llvm_unreachable("Illegal FCmp predicate");
        }
    }

    // enable signal
    create_fu_enable_signals(instr);
    RTLSignal *en = rtl->addWire("altfp_" + verilogName(instr) + "_en");

    d->addIn("clock")->connect(rtl->find("clk"));
    d->addIn("clk_en")->connect(en);
    return FU;
}


RTLSignal *GenerateRTL::createFCastFU(Instruction *instr, RTLSignal *op0) {
    // registers retain their value so we just need
    // to connect up the FP cores 

    RTLModule *d;
    RTLSignal *FU;
    if (dyn_cast<FPTruncInst>(instr)){
        d = rtl->addModule("altfp_truncate",
                "altfp_trunc_" + verilogName(instr));
        FU = rtl->addWire("altfp_trunc_" + verilogName(instr) +
            "_out", RTLWidth(instr->getType()));
    }
    else {
        d = rtl->addModule("altfp_extend",
                "altfp_ext_" + verilogName(instr));
        FU = rtl->addWire("altfp_ext_" + verilogName(instr) +
            "_out", RTLWidth(instr->getType()));
    }
    
    // add a comment
    std::string tmp;
    raw_string_ostream Out(tmp);
    Out << "/* " << getValueStr(instr) << "*/";
    d->setBody(Out.str());

    // enable signal
    create_fu_enable_signals(instr);
    RTLSignal *en = rtl->addWire("altfp_" + verilogName(instr) + "_en");

    d->addIn("dataa")->connect(op0);
    d->addOut("result")->connect(FU);
    d->addIn("clock")->connect(rtl->find("clk"));
    d->addIn("clk_en")->connect(en);

    return FU;
}

RTLSignal *GenerateRTL::createSIToFPFU(Instruction *instr, RTLSignal *op0, int width) {
    // registers retain their value so we just need
    // to connect up the FP cores 

    RTLModule *d;
    RTLSignal *FU;
    if (width == 32){
        d = rtl->addModule("altfp_sitofp32",
                "altfp_sitofp32_" + verilogName(instr));
        FU = rtl->addWire("altfp_sitofp32_" + verilogName(instr) +
            "_out", RTLWidth(instr->getType()));
    }
    else {
        d = rtl->addModule("altfp_sitofp64",
                "altfp_sitofp34_" + verilogName(instr));
        FU = rtl->addWire("altfp_sitofp34_" + verilogName(instr) +
            "_out", RTLWidth(instr->getType()));
    }
    
    // add a comment
    std::string tmp;
    raw_string_ostream Out(tmp);
    Out << "/* " << getValueStr(instr) << "*/";
    d->setBody(Out.str());

    // enable signal
    create_fu_enable_signals(instr);
    RTLSignal *en = rtl->addWire("altfp_" + verilogName(instr) + "_en");

    d->addIn("dataa",op0->getNativeWidth())->connect(op0);
    d->addOut("result")->connect(FU);
    d->addIn("clock")->connect(rtl->find("clk"));
    d->addIn("clk_en")->connect(en);

    return FU;
}

RTLSignal *GenerateRTL::createFPToSIFU(Instruction *instr, RTLSignal *op0, int width) {
    // registers retain their value so we just need
    // to connect up the FP cores 

    RTLModule *d;
    RTLSignal *FU;
    if (width == 32){
        d = rtl->addModule("altfp_fptosi32",
                "altfp_sitofp32_" + verilogName(instr));
        FU = rtl->addWire("altfp_sitofp32_" + verilogName(instr) +
            "_out", RTLWidth(instr->getType()));
    }
    else {
        d = rtl->addModule("altfp_fptosi64",
                "altfp_sitofp34_" + verilogName(instr));
        FU = rtl->addWire("altfp_sitofp34_" + verilogName(instr) +
            "_out", RTLWidth(instr->getType()));
    }
    
    // add a comment
    std::string tmp;
    raw_string_ostream Out(tmp);
    Out << "/* " << getValueStr(instr) << "*/";
    d->setBody(Out.str());

    // enable signal
    create_fu_enable_signals(instr);
    RTLSignal *en = rtl->addWire("altfp_" + verilogName(instr) + "_en");

    d->addIn("dataa",RTLWidth(width))->connect(op0);
    d->addOut("result")->connect(FU);
    d->addIn("clock")->connect(rtl->find("clk"));
    d->addIn("clk_en")->connect(en);

    return FU;
}

// create a functional unit (FU) module instantiation for the given
// instruction and input operand signals
RTLSignal *GenerateRTL::createFU(Instruction *instr, RTLSignal *op0,
        RTLSignal *op1) {

    if (isDiv(instr) || isRem(instr)) {
        return createDivFU(instr, op0, op1);
    }
    else if (EXPLICIT_LPM_MULTS && alloc->useExplicitDSP(instr)) {
        return createMulFU(instr, op0, op1);
    }

    //If the instruction is one of the floating point operation, call FP create module
    //with opCode (unsigned) as additional parameter 
    unsigned opCode = instr->getOpcode();
    switch(instr->getOpcode()) {
        case Instruction::FAdd:
        case Instruction::FSub:
        case Instruction::FMul:
        case Instruction::FDiv:
            //op0->setWidth(op0->getNativeWidth());
            //op1->setWidth(op1->getNativeWidth());
            return createFPFU(instr, op0, op1, opCode);
        case Instruction::FCmp:
            return createFCmpFU(instr, op0, op1);
    }

    // fixes to match gcc: case where shifting by more than the number
    // of bits in the number
    // should probably ignore this case because it's undefined in the C
    // standard.
    if (isLogicalShift(instr)) {
        RTLOp *truncate = rtl->addOp(RTLOp::Rem);

        const Type *T = instr->getOperand(1)->getType();
        unsigned size = T->getPrimitiveSizeInBits();

        truncate->setOperand(0, op1);
        truncate->setOperand(1, rtl->addConst(utostr(size),size));

        op1 = truncate;
    }

    RTLWidth w(op0->getWidth().numBits(rtl,alloc));
    if (op1Signed(instr)) {
        RTLOp *sext = rtl->addOp(RTLOp::SExt);
        sext->setCastWidth(w);
        sext->setNativeWidth(RTLWidth(instr->getType()));
        sext->setOperand(0, op0);
        op0 = sext;
        op0->setSigned(true);
    }

    w = RTLWidth(op1->getWidth().numBits(rtl,alloc));
    if (op2Signed(instr)) {
        RTLOp *sext = rtl->addOp(RTLOp::SExt);
        sext->setCastWidth(w);
        sext->setNativeWidth(RTLWidth(instr->getType()));
        sext->setOperand(0, op1);
        op1 = sext;
        op1->setSigned(true);
    }


    RTLOp *FUop = rtl->addOp(instr);
    FUop->setOperand(0, op0);
    FUop->setOperand(1, op1);
    if(USE_MB && MBW->bitwidthIsKnown(instr)) {
        FUop->setWidth(RTLWidth(MBW->getMinBitwidth(instr)));
        FUop->setNativeWidth(RTLWidth(instr->getType()));
        if(MBW->isSigned(instr)) FUop->setSigned(true);
    }
    return FUop;
}



void GenerateRTL::visitAllocaInst(AllocaInst &I) {
    // allocate RAM
    allocateRAM(&I);
}

void GenerateRTL::visitReturnInst(ReturnInst &I) {
    // don't print anything for void return
    if (I.getNumOperands() != 0) {
        RTLSignal *return_val = rtl->find("return_val");
        connectState(return_val, this->state, getOp(this->state,
                    I.getOperand(0)), &I);
    }

    // finish = 1 when waitrequest == 0
    RTLOp *wait = rtl->addOp(RTLOp::EQ);
    wait->setOperand(0, rtl->find("memory_controller_waitrequest"));
    wait->setOperand(1, ZERO);
    connectState(rtl->find("finish"), this->state, wait, &I);
}

void GenerateRTL::visitUnreachableInst(UnreachableInst &I) {
}

std::string getPipelineLabel(const BasicBlock *BB) {
    const TerminatorInst *TI = BB->getTerminator();
    std::string label = getMetadataStr(TI, "legup.label");
    return label;
}

int getPipelineII(const BasicBlock *BB) {
    const TerminatorInst *TI = BB->getTerminator();
    int II = getMetadataInt(TI, "legup.II");
    return II;
}

const Instruction *getInductionVar(const BasicBlock *BB) {
    const Instruction *inductionVar = NULL;
    for (BasicBlock::const_iterator I = BB->begin(), ie = BB->end(); I !=
            ie; ++I) {
        if (getMetadataInt(I, "legup.canonical_induction")) {
            inductionVar = I;
            break;
        }
    }
    assert(inductionVar);
    return inductionVar;
}

RTLOp * GenerateRTL::getPipelineStateCondition(RTLSignal *signal, const
        Instruction *instr) {
    bool PIPELINED = isPipelined(instr);
    std::string label = "";
    int II = 0;

    if (!PIPELINED) return 0;

    const BasicBlock *BB = instr->getParent();
    const Instruction *inductionVar = getInductionVar(BB);
    label = getPipelineLabel(BB);
    II = getPipelineII(BB);

    // induction variable signals are hard coded for now
    if (signal == rtl->find(verilogName(inductionVar)+"_reg")
            || instr == inductionVar) {
        return 0;
    }

    const TerminatorInst *TI = BB->getTerminator();
    if (instr == TI->getOperand(0)) {
        signal->connect(rtl->find(label + "_pipeline_finish"));
        return 0;
    }

    int time = getMetadataInt(instr, "legup.pipeline.time");
    RTLSignal *ii_state = rtl->find(label + "_ii_state");

    // connect the signal during the correct ii_state and valid_bit time
    RTLOp *cond = rtl->addOp(RTLOp::And)->setOperands(
                rtl->addOp(RTLOp::EQ)->setOperands(
                    ii_state,
                    new RTLConst(utostr(time % II),
                    ii_state->getWidth())),
                rtl->find(label + "_valid_bit_"+utostr(time)));
    return cond;
}

// connect 'signal' to 'driver' during state 'state'. Last argument is optional
// and gives an LLVM instruction to display in the RTL comments
void GenerateRTL::connectState(RTLSignal *signal, State *state, RTLSignal
        *driver, const Instruction *instr) {

    assert(state);
    assert(driver);

    RTLOp *cond;

    if (RTLOp *pipelineCond = getPipelineStateCondition(signal, instr)) {
        cond = pipelineCond;

    } else {

        cond = rtl->addOp(RTLOp::EQ);
        cond->setOperand(0, rtl->find("cur_state"));
        assert(stateSignals.find(state) != stateSignals.end());
        cond->setOperand(1, stateSignals[state]);
    }

    signal->addCondition(cond, driver, instr);

}

void GenerateRTL::visitGetElementPtrInst(GetElementPtrInst &I) {
    // RAM pointer

    RTLSignal *gep = rtl->addWire(verilogName(&I),
            RTLWidth("`MEMORY_CONTROLLER_ADDR_SIZE-1"));

    connectState(gep, this->state, getGEP(this->state, &I), &I);

}

int GenerateRTL::connectedToPortB(Instruction *instr) {
    if (!this->binding->existsBindingInstrFU(instr)) return 0;

    std::string fuId = this->binding->getBindingInstrFU(instr);
    size_t found;
    found = fuId.find("mem_dual_port_0");
    if (found!=string::npos){
        return 0;
    } else {
        found = fuId.find("mem_dual_port_1");
        if (found!=string::npos){
            return 1;
        } else {
            errs() << "Error: mem_port not matched! FuId: " << fuId << "\n";
            return -1;
        }
    }
}

void GenerateRTL::visitLoadInst  (LoadInst   &I) {
    LoadInst *instr = &I;
    Value *addr = I.getPointerOperand();

    State *finish = this->state;
    for (unsigned i = 0; i < Scheduler::getNumInstructionCycles(instr);
            i++) {
        finish = this->state->getDefaultTransition();
        assert(finish);
    }
    RTLWidth w(instr->getType());
/*    if(USE_MB && MBW->bitwidthIsKnown(instr)) {
       w = RTLWidth(MBW->getMinBitwidth(instr)); 
    }*/
    RTLSignal *loadWire = rtl->addWire(verilogName(instr),w);


    std::string regName = verilogName(instr) + "_reg";
    if (!rtl->exists(regName)) {
        RTLSignal *loadReg = rtl->addReg(regName,w);
        connectState(loadReg, finish, loadWire, instr);
    }

    assert(connectedToPortB(instr) != -1 && "FU doesn't match the mem port");
    std::string port = connectedToPortB(instr) ? "b" : "a";

    if (LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
        RAM *ram = getLocalRam(addr);
        std::string name = ram->getName();

        // convert byte address to word address
        RTLOp *wordAddr = rtl->addOp(RTLOp::Shr);
        wordAddr->setOperand(0, getOp(this->state, addr));
        int bytes = ram->getDataWidth() / 8;
        int ignore = (bytes == 0) ? 0 : (int)log2(bytes);
        wordAddr->setOperand(1,
                new RTLConst(utostr(ignore), RTLWidth(3)));

        connectState(rtl->find(name + "_address_" + port), this->state,
                wordAddr, instr);
        connectState(rtl->find(name + "_write_enable_" + port), this->state,
                ZERO, instr);
        connectState(loadWire, finish, rtl->find(name + "_out_" + port), instr);
    } else {

        loadStoreCommon(&I, addr);
        RTLSignal *memOut = rtl->find("memory_controller_out_" + port);
        RTLSignal *memWe = rtl->find("memory_controller_write_enable_" + port);

        connectState(memWe, this->state, ZERO, instr);

        // need to truncate memory_controller_out, which is usually
        // bigger than loadWire
        RTLOp *trunc = rtl->addOp(RTLOp::Trunc);
        trunc->setCastWidth(loadWire->getWidth());
        trunc->setOperand(0, memOut);
        connectState(loadWire, finish, trunc, instr);
    }
}

void GenerateRTL::visitStoreInst (StoreInst  &I) {

    Value *addr = I.getPointerOperand();

    assert(connectedToPortB(&I) != -1 && "FU doesn't match the mem port");

    std::string port = connectedToPortB(&I) ? "b" : "a";

    if (LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
        RAM *ram = getLocalRam(addr);
        std::string name = ram->getName();

        // todo: refactor with visitLoadInst
        // convert byte address to word address
        RTLOp *wordAddr = rtl->addOp(RTLOp::Shr);
        wordAddr->setOperand(0, getOp(this->state, addr));
        int bytes = ram->getDataWidth() / 8;
        int ignore = (bytes == 0) ? 0 : (int)log2(bytes);
        wordAddr->setOperand(1,
                new RTLConst(utostr(ignore), RTLWidth(3)));

        connectState(rtl->find(name + "_address_" + port), this->state,
                wordAddr, &I);
        connectState(rtl->find(name + "_write_enable_" + port), this->state,
                ONE, &I);
        connectState(rtl->find(name + "_in_" + port), this->state,
                getOp(this->state, I.getOperand(0)), &I);

    } else {

        loadStoreCommon(&I, addr);
        RTLSignal *memIn = rtl->find("memory_controller_in_" + port);
        RTLSignal *memWe = rtl->find("memory_controller_write_enable_" + port);

        connectState(memWe, this->state, ONE, &I);

        // zero extend the operand to be the same size as the memory_controller_in
        RTLOp *ext = rtl->addOp(RTLOp::ZExt);
        ext->setCastWidth(memIn->getWidth());
        ext->setOperand(0, getOp(this->state, I.getOperand(0)));
        connectState(memIn, this->state, ext, &I);
    }
}

// size: 0 for bool/byte, 1 for short, 2 for word, 3 for long/other (struct, ptr, etc...)
unsigned GenerateRTL::getInstrMemSize (Instruction *instr) {
    int bitwidth;
    if (isa<StoreInst>(*instr)) {
        bitwidth = instr->getOperand(0)->getType()->getPrimitiveSizeInBits();
    } else {
        bitwidth = instr->getType()->getPrimitiveSizeInBits();
    }
    if (bitwidth == 0) {
        // other ie. struct, pointer
        bitwidth = alloc->getTargetData()->getPointerSize() * 8;
    }

    switch (bitwidth) {
        case 1: return 0; break; // bool
        case 8: return 0; break; // byte
        case 16: return 1; break; // short
        case 32: return 2; break; // word
        case 64: return 3; break; // long/other
        default:
            errs() << "Invalid bitwidth '" << bitwidth << "' for instr: " <<
                *instr << "\n";
            return 0;
    }
}

void GenerateRTL::loadStoreCommon (Instruction *instr, Value *addr) {

    assert (isa<PointerType>(addr->getType()));

    assert(connectedToPortB(instr) != -1 && "FU doesn't match the mem port");
    std::string port = connectedToPortB(instr) ? "b" : "a";

    RTLSignal *memAddr = rtl->find("memory_controller_address_" + port);
    RTLSignal *memSize = rtl->find("memory_controller_size_" + port);
    RTLSignal *memEn = rtl->find("memory_controller_enable_" + port);

    connectState(memAddr, this->state, getOp(this->state, addr), instr);
    connectState(memEn, this->state, ONE, instr);
    if (alloc->usesGenericRAMs()) {
        unsigned size = getInstrMemSize(instr);
        connectState(memSize, this->state,
                rtl->addConst(utostr(size), RTLWidth(2)), instr);
    }


}

// ignore switch/branch instructions
// these are handled already by the FSM generated in scheduling
void GenerateRTL::visitBranchInst(BranchInst &I) {
}
void GenerateRTL::visitSwitchInst(SwitchInst &I) {
}

void GenerateRTL::visitPHINode(PHINode &phi) {
    createPHISignals(&phi, this->state);
}

// printf statements in C are replaced with $display() verilog statements for
// modelsim simulation
void GenerateRTL::visitPrintf (CallInst *CI, Function *called) {
    RTLOp *printf = NULL;
    if (called->getName() == "puts") {
        // puts expects a newline added
        printf = rtl->addOp(RTLOp::Display);
    } else {
        // $write() is $display() but without the newline.
        printf = rtl->addOp(RTLOp::Write);
    }
    Value *str = *CI->op_begin();

    // handle getelementptr
    if (const User *U = dyn_cast<User>(str)) {
        if (U->getNumOperands() > 1) {
            str = U->getOperand(0);
        }
    }

    GlobalVariable *G = dyn_cast<GlobalVariable>(str);
    if (!G) {
        outs() << "Cannot statically resolve char pointer for " <<
            "printf call. Skipping verilog $display statement for:\n" <<
            *CI << "\n";
        return;
    }
    assert(G);
    Constant *C = G->getInitializer();

    int index = 0;
    if (ConstantArray *CA = dyn_cast<ConstantArray>(C)) {
        //errs() << "printf: " << *CA << "\n";
        std::string s = "\"" + arrayToString(CA) + "\"";

        // ensure escaped % does not look like %x, %p, %u, etc...
        replaceAll(s, "%%", "%?");

        replaceAll(s, "%016llx", "%0x");

        // convert printf format specifiers to $display format
        // specifiers
        // %0x prints the minimum hex characters - seems to match C better
        replaceAll(s, "%x", "%0x");
        replaceAll(s, "%p", "%0x");
        replaceAll(s, "%u", "%d");
        // long long
        replaceAll(s, "%lld", "%d");
        replaceAll(s, "%llu", "%d");
        replaceAll(s, "%llx", "%0x");
        // long
        replaceAll(s, "%ld", "%d");
        replaceAll(s, "%lu", "%d");
        replaceAll(s, "%lx", "%0x");
        // short
        replaceAll(s, "%hd", "%d");
        replaceAll(s, "%hu", "%d");
        replaceAll(s, "%hx", "%0x");
        // very short
        replaceAll(s, "%hhd", "%d");
        replaceAll(s, "%hhu", "%d");
        replaceAll(s, "%hhx", "%0x");


        // go back to escaped %
        replaceAll(s, "%?", "%%");

        printf->setOperand(index, rtl->addConst(s));
        index++;
    }

    for (CallSite::arg_iterator AI = CI->op_begin()+1, AE = CI->op_end()-1; AI
            != AE; ++AI) {
        Value *arg = *AI;
        printf->setOperand(index, getOp(this->state, arg));
        index++;
    }

    connectState(rtl->getUnsynthesizableSignal(), this->state, printf, CI);

}

void GenerateRTL::createFunctionMemorySignals(State *state1, CallInst *CI, 
       std::string name, std::string postfix) {

    RTLSignal *en = rtl->addWire(name + "_enable" + postfix);

    RTLSignal *addr = rtl->addWire(name + "_address" + postfix,
        RTLWidth("`MEMORY_CONTROLLER_ADDR_SIZE-1"));
    RTLSignal *we = rtl->addWire(name + "_write_enable" + postfix);
 
    RTLSignal *in = rtl->addWire(name + "_in" + postfix,
        RTLWidth("`MEMORY_CONTROLLER_DATA_SIZE-1"));
    RTLSignal *out = rtl->addWire(name + "_out" + postfix,
        RTLWidth("`MEMORY_CONTROLLER_DATA_SIZE-1"));

    connectState(rtl->find("memory_controller_enable" + postfix), state1, en, CI);

    connectState(rtl->find("memory_controller_address" + postfix), state1, addr, CI);

    connectState(rtl->find("memory_controller_write_enable" + postfix), state1, we, CI);

    connectState(rtl->find("memory_controller_in" + postfix), state1, in, CI);

    if (alloc->usesGenericRAMs()) {
        RTLSignal *size = rtl->addWire(name + "_size" + postfix, RTLWidth(2));
        size->setDefaultDriver(ZERO);
        connectState(rtl->find("memory_controller_size" + postfix), state1, size, CI);
    }
    connectState(out, state1, rtl->find("memory_controller_out" + postfix), CI);
}

// calling semantics: when calling a function there are 2 states
// 1) assign inputs/outputs of the module. set start=1
// 2) wait until finish=1
//    make sure ram signals registers are connected
void GenerateRTL::createFunction (CallInst &I) {
    CallInst *CI = &I;

    Function *called = getCalledFunction(CI);

    BasicBlock *bb = CI->getParent();
    assert(bb == this->state->getBasicBlock());

    FiniteStateMachine* fsm = sched->getFSM(Fp);
    State *state1 = fsm->newState(this->state, "LEGUP_function_call");
    stateSignals[state1] = rtl->addParam("state_placeholder", "placeholder");
    state1->setBasicBlock(bb);

    bool isStateTerminating = this->state->isTerminating();
    State *state2 = NULL;
    if (isStateTerminating) {
        state2 = fsm->newState(state1, "LEGUP_function_call");
        stateSignals[state2] = rtl->addParam("state_placeholder", "placeholder");
        state2->setBasicBlock(bb);
        state2->setTerminating(this->state->isTerminating());

        State::Transition origTransition = this->state->getTransition();
        state2->setTransition(origTransition);
    } else {
        // No need for an extra call state, just set it to the state's default transition
        state2 = this->state->getDefaultTransition();
    }
    this->state->setTerminating(false);

    // update FSM. CI will be removed from state when we return
    state1->push_back(CI);
    fsm->setStartState(CI, state1);
    fsm->setEndState(CI, state1);

    // need to clear all original transitions.
    // 'state' must have only 1 transition - because we must go to state1
    // where we'll wait for the call to complete.
    State::Transition blank;
    this->state->setTransition(blank);
    this->state->setDefaultTransition(state1);
    assert(this->state->getNumTransitions() == 1);

    state1->setDefaultTransition(state1);

    std::string moduleName = verilogName(called);

    connectState(rtl->addReg(moduleName + "_start"), this->state,
            ONE, CI);

    std::string str;

    CallSite::arg_iterator AI = CI->op_begin(), AE = CI->op_end()-1;
    for (Function::arg_iterator FI = called->arg_begin(), Fe =
            called->arg_end(); FI != Fe; ++FI) {
        assert(AI != AE);
        Value *arg = *AI;
        assert(arg);

        std::string name = moduleName + "_" +
            alloc->verilogNameFunction(FI, called);
        RTLWidth w(FI->getType());

        // adjust width of arguments for bitcast cases
        // ie. %2 = call i8* bitcast (void (i32*, i32, i32)* @legup_memset_4 to
        // i8* (i8*, i8, i64)*)(i8* %1, i8 0, i64 40)
        RTLSignal *op = getOp(this->state, arg);
        op->setWidth(w);

        connectState(rtl->addReg(name, w), this->state,
                    op, CI);
        ++AI;
    }

    std::string name = moduleName + "_" + "memory_controller";
    RTLSignal *wait = rtl->addWire(name + "_waitrequest");
    connectState(wait, state1, rtl->find("memory_controller_waitrequest"),
            CI);

    createFunctionMemorySignals(state1, CI, name, "_a");
    createFunctionMemorySignals(state1, CI, name, "_b");

    connectState(rtl->find(moduleName + "_start"), state1,
            ZERO, CI);

    std::string finishName = moduleName + "_finish";
    RTLSignal *finish = rtl->addWire(finishName);
    state1->setTransitionSignal(finish);
    state1->addTransition(state2);

    const Type* rT = called->getReturnType();
    if (rT->getTypeID() != Type::VoidTyID) {
        RTLWidth T(rT);
        RTLSignal *ret = rtl->addWire(moduleName + "_return_val", T);
        connectState(rtl->addWire(verilogName(CI), T), state1, ret, CI);
    }

    // signal for disabling the divider and other multicycle functional units
    // for two states while we call the function
    RTLSignal *fct_call = rtl->addWire("legup_function_call");
    fct_call->setDefaultDriver(ZERO);
    connectState(fct_call, state1, ONE, CI);
    if (isStateTerminating) {
        connectState(fct_call, state2, ONE, CI);
    }
}


void GenerateRTL::visitCallInst (CallInst &CI) {
    Function *called = getCalledFunction(&CI);

    if (called->getName() == "printf" || called->getName() == "puts") {
        visitPrintf(&CI, called);

    } else if (called->getName() == "putchar") {
        unsigned char C = cast<ConstantInt>(CI.getOperand(1))->getZExtValue();
        bool LastWasHex = false;

        RTLOp *write = rtl->addOp(RTLOp::Write);
        write->setOperand(0, rtl->addConst(charToString(C,
                        LastWasHex)));

        connectState(rtl->getUnsynthesizableSignal(), this->state, write, &CI);

    } else if (called->getName() == "exit") {

        RTLSignal *finish = rtl->addOp(RTLOp::Finish);

        connectState(rtl->getUnsynthesizableSignal(), this->state, finish, &CI);

    } else if (isaDummyCall(&CI)) {
        // ignore
    } else {
        // normal function calls are already handled by generateAllCallInsts
    }
}

// get the first state of this basic block
State *GenerateRTL::getFirstState(BasicBlock *BB) {
    for (FiniteStateMachine::iterator state = ++fsm->begin(), se = fsm->end();
            state != se; ++state) {
        if (state->getBasicBlock() == BB) return state;
    }
    assert(0 && "Couldn't find state for BB");
}

void GenerateRTL::generateAllLoopPipelines() {
    std::set<BasicBlock *> visited, pipelined;

    for (FiniteStateMachine::iterator state = ++fsm->begin(), se = fsm->end();
            state != se; ++state) {
        for (State::iterator instr = state->begin(), ie = state->end(); instr
                != ie; ++instr) {
            BasicBlock *BB = (*instr)->getParent();
            if (visited.find(BB) != visited.end()) continue;
            visited.insert(BB);
            if (getMetadataInt(BB->getTerminator(), "legup.pipelined")) {
                pipelined.insert(BB);
                assert(getFirstState(BB) == state);
            }
        }
    }

    pipeRTLFile() << "Found " << pipelined.size() << " loops to pipeline\n";

    for (std::set<BasicBlock *>::iterator BB = pipelined.begin(), be =
            pipelined.end(); BB != be; ++BB) {
        generateLoopPipeline(*BB);
        modifyFSMForLoopPipeline(*BB);
    }

}

// this function generates all the control signals and registers
// required for the loop pipeline for basic block BB
// the main control signals are:
//      ii_state = 0, 1, 2, 3, ..., II-1, 0, 1, 2, ..., II-1, ...
//      valid_bit_0 -> valid_bit_1 -> ... -> valid_bit_maxTime (shift register)
// using these signals you can turn on an operation for a particular stage of
// the pipeline. valid_bit makes sure the inputs are valid for that time slot,
// and the ii_state makes sure you only perform the operation once per pipeline
// stage.
//
void GenerateRTL::generateLoopPipeline(BasicBlock *BB) {

    const Instruction *inductionVar = getInductionVar(BB);

    //rtl->addRegLEGUP_pipeline_start

    TerminatorInst *TI = BB->getTerminator();
    int II = getMetadataInt(TI, "legup.II");
    int totalTime = getMetadataInt(TI, "legup.totalTime");
    int maxStage = getMetadataInt(TI, "legup.maxStage");
    int tripCount = getMetadataInt(TI, "legup.tripCount");
    std::string label = getMetadataStr(TI, "legup.label");


    // generate valid bits

    pipeRTLFile() << "Generating Loop Pipeline for label: \"" << label << "\"\n";
    pipeRTLFile() << "BB: " << getLabel(BB) << "\n";
    pipeRTLFile() << "II: " << II << "\n";
    pipeRTLFile() << "Time: " << totalTime << "\n";
    pipeRTLFile() << "maxStage: " << maxStage << "\n";
    pipeRTLFile() << "tripCount: " << tripCount << "\n";
    pipeRTLFile() << "Induction var: " << *inductionVar << "\n";
    pipeRTLFile() << "Label: " << label << "\n";

    RTLSignal *start = rtl->addWire(label + "_pipeline_start");
    start->addCondition(rtl->find("reset"), ZERO);

    // started bit is high when pipeline is active
    RTLSignal *started = rtl->addReg(label + "_started");
    started->addCondition(rtl->find("reset"), ZERO);

    // begin = (start & ~started)
    RTLOp *not_started = rtl->addOp(RTLOp::Not)->setOperands(started);
    RTLOp *begin = rtl->addOp(RTLOp::And)->setOperands(start, not_started);

    started->addCondition(begin, ONE);

    // ii_state = 0, 1, 2, 3, ..., II-1, 0, 1, 2, ..., II-1, ...
    RTLWidth ii_state_width = RTLWidth(requiredBits(II-1));
    RTLSignal *ii_state = rtl->addReg(label + "_ii_state", ii_state_width);
    ii_state->addCondition(begin, new RTLConst("0", ii_state_width));
    for (int i = 1; i <= II; i++) {
        // ii_state == i-1
        RTLOp *eq = rtl->addOp(RTLOp::EQ)->setOperands( ii_state, new
                RTLConst(utostr(i-1), ii_state_width));
        int next = (i == II) ? 0 : i;
        ii_state->addCondition(eq, new RTLConst(utostr(next), ii_state_width));
    }

    // generate induction variable for stages
    map<int, RTLSignal*> inductionVarStages;
    // can't use this minimum width - if the induction variable gets used
    // by another instruction there will be a bitwidth mismatch
    //RTLWidth inductionWidth = RTLWidth(requiredBits(tripCount-1));
    RTLWidth inductionWidth = RTLWidth(inductionVar->getType());
    RTLConst *ZERO_induction = new RTLConst("0", inductionWidth);
    inductionVarStages[0] = rtl->addReg(label + "_i_stage0", inductionWidth);
    inductionVarStages[0]->addCondition(rtl->find("reset"), ZERO_induction);

    //RTLSignal *exitcond = rtl->find(verilogName(TI->getOperand(0)));
    RTLOp *exitcond = rtl->addOp(RTLOp::EQ)->setOperands(
            inductionVarStages[0],
            new RTLConst(utostr(tripCount-1),
            inductionWidth));
    RTLSignal *not_exitcond = rtl->addOp(RTLOp::Not)->setOperands(exitcond);

    // epilogue bit is high when the epilogue has started
    RTLSignal *epilogue = rtl->addReg(label + "_epilogue");
    epilogue->addCondition(rtl->find("reset"), ZERO);
    epilogue->addCondition(exitcond, ONE);

    // generate the valid shift register
    // high when data is valid on the pipeline step
    /*
        valid_bit_1 <= valid_bit_0;
        valid_bit_2 <= valid_bit_1;
        valid_bit_3 <= valid_bit_2;
        valid_bit_4 <= valid_bit_3;
        valid_bit_5 <= valid_bit_4;
        valid_bit_6 <= valid_bit_5;
    */
    std::vector<RTLSignal *> validBits;
    for (int i = 0; i < totalTime; i++) {
        validBits.push_back(rtl->addReg(label + "_valid_bit_"+utostr(i)));
        if (i > 0) {
            validBits[i]->connect(validBits[i-1]);
        }
    }

    // if ((start & ~started) | (started & ~epilogue & i_stage0 != 3))
    RTLSignal *not_epilogue = rtl->addOp(RTLOp::Not)->setOperands(epilogue);
    RTLSignal *done1 = rtl->addOp(RTLOp::And)->setOperands(started,
        not_epilogue);
    RTLSignal *done2 = rtl->addOp(RTLOp::And)->setOperands(done1, not_exitcond);
    RTLSignal *valid = rtl->addOp(RTLOp::Or)->setOperands(begin, done2);
    validBits[0]->connect(valid);

    // if (start & ~started)
    //    i_stage0 <= 0;
    inductionVarStages[0]->addCondition(begin, ZERO_induction);
    RTLOp *lastII = rtl->addOp(RTLOp::EQ)->setOperands( ii_state, new
            RTLConst(utostr(II-1), ii_state_width));
    RTLOp *incrementCond = rtl->addOp(RTLOp::And)->setOperands( lastII,
            validBits[II-1]);
    RTLOp *incrementInduction = rtl->addOp(RTLOp::Add)->setOperands(
            inductionVarStages[0], ONE);
    // else if (ii_state == 2 & valid_bit_2 == 1)
    //    i_stage0 <= i_stage0 + 1;
    inductionVarStages[0]->addCondition(incrementCond, incrementInduction);

    /* if (ii_state == 2) begin
           i_stage1 <= i_stage0;
           i_stage2 <= i_stage1;
       end */
    for (int i = 1; i <= maxStage; i++) {
        inductionVarStages[i] = rtl->addReg(label + "_i_stage" + utostr(i), inductionWidth);
        inductionVarStages[i]->addCondition(begin, ZERO_induction);
        inductionVarStages[i]->addCondition(lastII, inductionVarStages[i-1]);
    }

    //rtl->find(verilogName(inductionVar)+"_reg")->connect(inductionVarStages[maxStage]);


    // every variable which gets used in another stage must be flopped
    for (BasicBlock::iterator I = BB->begin(), ie = BB->end(); I !=
            ie; ++I) {
        if ((Instruction*)I == inductionVar) continue;

        int time = getMetadataInt(I, "legup.pipeline.time");
        int timeAvail = time + Scheduler::getNumInstructionCycles(I);
        assert(timeAvail < totalTime);
        int iiAvail = timeAvail % II;

        int maxTimeUse = -1;
        for (Value::use_iterator ui = I->use_begin(), ue = I->use_end(); ui !=
                ue; ++ui) {
            Instruction *I2 = dyn_cast<Instruction>(*ui);
            if (!I2) continue;
            if (I2->getParent() != BB) continue;

            int time2 = getMetadataInt(I2, "legup.pipeline.time");
            maxTimeUse = max(maxTimeUse, time2);

        }

        // never used in the pipelined basic block
        if (maxTimeUse == -1) continue;

        if (pipelineSignalAvailableTable[I].empty()) {
            for (int i = 0; i < totalTime; i++) {
                pipelineSignalAvailableTable[I].push_back(NULL);
            }
        }

        // this saves a bunch of registers by only using registers on the
        // pipeline stage boundaries. Instead of using a register for every
        // single time step
        bool saveRegisters = true;

        if (saveRegisters) {
            pipelineSignalAvailableTable[I][timeAvail] =
                rtl->find(verilogName(I));

            std::set<int> stageSeen;

            for (int i = timeAvail+1; i <= maxTimeUse; i++) {
                int stage = i / II;
                if (stageSeen.find(stage) == stageSeen.end()) {
                    // create a new pipeline stage register
                    stageSeen.insert(stage);
                    pipelineSignalAvailableTable[I][i] =
                        rtl->addReg(verilogName(I) + "_reg_stage" +
                                utostr(stage), RTLWidth(I->getType()));

                    RTLSignal *ii_state = rtl->find(label + "_ii_state");

                    int iiCond = II-1;
                    if (i == timeAvail + 1) {
                        // the first stage register, 1 cycle after available
                        // time might be in the middle of a stage
                        iiCond = iiAvail;
                    }

                    RTLOp *cond =
                        rtl->addOp(RTLOp::And)->setOperands(
                                rtl->addOp(RTLOp::EQ)->setOperands(
                                    ii_state,
                                    new RTLConst(
                                        utostr(iiCond),
                                        ii_state->getWidth())
                                    ),
                                rtl->find(label + "_valid_bit_"+utostr(i-1)));
                    pipelineSignalAvailableTable[I][i]->addCondition(cond,
                            pipelineSignalAvailableTable[I][i-1]);
                } else {
                    // still in the same stage
                    pipelineSignalAvailableTable[I][i] =
                        pipelineSignalAvailableTable[I][i-1];
                }
            }
        } else {
            pipelineSignalAvailableTable[I][timeAvail] =
                rtl->find(verilogName(I));
            for (int i = timeAvail+1; i <= maxTimeUse; i++) {
                pipelineSignalAvailableTable[I][i] = rtl->addReg(verilogName(I)
                        + "_reg_time" + utostr(i), RTLWidth(I->getType()));
                pipelineSignalAvailableTable[I][i]->connect(
                        pipelineSignalAvailableTable[I][i-1]);
            }
        }

    }

    RTLSignal *finish = rtl->addWire(label + "_pipeline_finish");
    RTLOp *finishCond = rtl->addOp(RTLOp::And)->setOperands(
            epilogue,
            rtl->addOp(RTLOp::And)->setOperands(
                rtl->addOp(RTLOp::Not)->setOperands(validBits[totalTime-2]),
                validBits[totalTime-1])
            );
    finish->connect(finishCond);

    epilogue->addCondition(finishCond, ZERO);
    started->addCondition(finishCond, ZERO);

}

// this function deletes all the existing states of BB
// except the very first state
//    the first state is renamed to LEGUP_loop_pipeline_start
//        all instructions are deleted from this state - so it is empty
//        pipeline_start is asserted in this state
//    a new state called LEGUP_loop_pipeline_wait is created
//        this state has two transitions:
//            pipeline_finish is false: loop back to itself
//            pipeline_finish is true: transition to the next basic block
//                                     outside the loop
//        this state also has a special flag: isWaitingForPipeline(), for
//        generateDatapath() to create the pipeline
//
void GenerateRTL::modifyFSMForLoopPipeline (BasicBlock *BB) {
    State *state1 = getFirstState(BB);

    const Instruction *inductionVar = getInductionVar(BB);
    int II = getPipelineII(BB);

    // find the terminating state of the basic block
    State *terminatingState = NULL;
    if (state1->isTerminating()) {

        terminatingState = fsm->newState(state1, "loop_pipeline_terminate");
        stateSignals[terminatingState] = rtl->addParam("state_placeholder", "placeholder");
        terminatingState->setBasicBlock(BB);

        State::Transition origTransition = state1->getTransition();
        terminatingState->setTransition(origTransition);

        State::Transition blank;
        state1->setTransition(blank);
        state1->setDefaultTransition(terminatingState);
        assert(state1->getNumTransitions() == 1);

    } else {
        assert(state1->getNumTransitions() == 1);

        // find terminating state
        FiniteStateMachine::iterator i = fsm->begin();
        while ((State*)i != state1) {
             ++i;
        }
        // don't delete first state
        ++i;
        while (i != fsm->end()) {
            if (i->isTerminating()) {
                terminatingState = i;
                break;
            } else {
                i = fsm->erase(i);
            }
        }
    }

    assert(terminatingState);
    assert(terminatingState != state1);

    // what's the next state after the terminating state?
    // one of the transitions should be back to this basic block (a loop)
    assert(terminatingState->getNumTransitions() == 2);
    State *nextStateAfterBB = NULL;
    State *stateTrue = terminatingState->getTransitionState(0);
    State *stateFalse = terminatingState->getDefaultTransition();
    assert(stateTrue == state1 || stateFalse == state1);
    if (stateTrue == state1) {
        nextStateAfterBB = stateFalse;
    } else {
        nextStateAfterBB = stateTrue;
    }
    fsm->erase(terminatingState);

    // delete all instructions from state1 (except phi nodes)
    State::iterator j = state1->begin();
    unsigned size = state1->size();
    for (unsigned i = 0; i < size; i++) {
        // don't delete phi nodes so generatePHICopiesForSuccessor() works form
        // the predecessor basic block of the pipelined loop
        if (isa<PHINode>(*j)) {
            j++;
        } else {
            j = state1->erase(j);
        }
    }

    std::string label = getPipelineLabel(BB);
    FiniteStateMachine* fsm = sched->getFSM(Fp);
    pipeRTLFile() << "Changing state name of '" << state1->getName() << "' to '";
    state1->setName("LEGUP_loop_pipeline_start_" + label);
    pipeRTLFile() << state1->getName() << "'\n";

    State *state2 = fsm->newState(state1, "LEGUP_loop_pipeline_wait_" + label);
    stateSignals[state2] = rtl->addParam("state_placeholder", "placeholder");
    state2->setWaitingForPipeline(true);
    state2->setTerminating(true);
    state2->setBasicBlock(BB);
    state2->setDefaultTransition(state2);
    state2->setTransitionSignal(rtl->find(label + "_pipeline_finish"));
    state2->addTransition(nextStateAfterBB);

    // all instructions should be executed in state2 - while we wait for the
    // pipeline to finish
    for (BasicBlock::iterator I = BB->begin(), ie = BB->end(); I != ie; ++I) {
        // what about terminating state??
        //if (fsm->getStartState(I) == state1) continue;
        //state2->push_back(I);
        State *s = state2;
        if (isa<PHINode>(I)) {
            // except phi nodes that remain in state1
            s = state1;
        }
        fsm->setStartState(I, s);
        fsm->setEndState(I, s);
    }

    // need to clear all original transitions.
    // 'state' must have only 1 transition - because we must go to state1
    // where we'll wait for the pipeline to complete.
    State::Transition blank;
    state1->setTransition(blank);
    state1->setDefaultTransition(state2);
    assert(state1->getNumTransitions() == 1);

    connectState(rtl->find(label + "_pipeline_start"), state1, ONE);
    connectState(rtl->find(label + "_pipeline_start"), state2, ZERO);

    // connect the phi_temp register for cross-iteration dependencies
    for (BasicBlock::iterator I = BB->begin(), ie = BB->end(); I !=
            ie; ++I) {
        if ((Instruction*)I == inductionVar) continue;
        if (PHINode *phi = dyn_cast<PHINode>(I)) {

            // we need to connect the phi_temp register for this phi
            RTLSignal *phi_temp_reg = rtl->addReg(
                    verilogName(phi) + "_phi_temp",
                    RTLWidth(phi->getType()));

            for (unsigned incomingIdx = 0; incomingIdx <
                    phi->getNumIncomingValues(); incomingIdx++) {
                Value *IV = phi->getIncomingValue(incomingIdx);
                Instruction *incoming = dyn_cast<Instruction>(IV);
                if (!incoming) continue;
                BasicBlock *incomingBB = incoming->getParent();
                if (incomingBB != BB) continue;

                //errs() << *incoming << "\n";
                //errs() << getLabel(incomingBB) << "\n";

                int incomingTime = getMetadataInt(incoming, "legup.pipeline.time");
                RTLSignal *ii_state = rtl->find(label + "_ii_state");

                // connect the phi_temp register to the incoming value as soon
                // as it is available
                RTLOp *cond = rtl->addOp(RTLOp::And)->setOperands(
                        rtl->addOp(RTLOp::EQ)->setOperands(
                            ii_state,
                            new RTLConst(utostr(incomingTime % II),
                                ii_state->getWidth())),
                        rtl->find(label + "_valid_bit_"+utostr(incomingTime)));
                this->time = incomingTime;
                phi_temp_reg->addCondition(cond, getOp(state2, IV), phi);
            }
        }
    }

}

raw_fd_ostream &GenerateRTL::pipeRTLFile() { return alloc->getPipeliningRTLFile();}

// Adjust Finite State Machine for function calls
void GenerateRTL::generateAllCallInsts() {
    std::set<CallInst *> visited;
    FiniteStateMachine *fsm = sched->getFSM(Fp);
    for (FiniteStateMachine::iterator state = ++fsm->begin(), se = fsm->end();
            state != se; ++state) {

        State::iterator instr = state->begin();
        while (instr != state->end()) {
            CallInst *CI = dyn_cast<CallInst>(*instr);
            if (CI && !isaDummyCall(CI) & !visited.count(CI)) {
                this->state = state;
                createFunction(*CI);
                instr = state->remove(CI);
                visited.insert(CI);
            } else {
                ++instr;
            }
        }
    }
}

// print out the finite state machine
void GenerateRTL::printFSMDot() {
      std::string FileError;
      std::string fileName = "fsm." + rtl->getName() + ".dot";
      raw_fd_ostream dotFile(fileName.c_str(), FileError);
      assert(FileError.empty() && "Error opening dot files");
      formatted_raw_ostream out(dotFile);
      sched->getFSM(Fp)->printDot(out);
}

// Update state width to account for called functions
void GenerateRTL::updateStatesAfterCallInsts() {
    unsigned stateNum = fsm->getNumStates();
    assert(stateNum > 0);
    // remember that states are from 0 to stateNum-1
    unsigned statewidth = requiredBits(stateNum-1);
    rtl->find("cur_state")->setWidth(RTLWidth(statewidth));

    // this code uses Verilog "parameter" statements
    // to give a numerical value to each state name
    // the state names are, in essence, an enumerated type
    unsigned stateCount = 0;
    FiniteStateMachine::iterator stateIter = fsm->begin();
    for (; stateIter != fsm->end(); stateIter++) {
      State* s = stateIter;

      // append the state number to the end of the state name parameter
      std::string pName = s->getName() + "_" + utostr(stateCount);
      s->setName(pName);

      assert(stateSignals.find(s) != stateSignals.end());
      RTLSignal *stateParam = stateSignals[s];
      stateParam->setName(pName);
      stateParam->setWidth(RTLWidth(statewidth));
      stateParam->setValue(utostr(stateCount));
      stateCount++;
    }
    // some states might have been removed, delete the parameter placeholders
    rtl->remove("state_placeholder");
}

RTLSignal *GenerateRTL::getLeftHandSide(Instruction *instr) {
    RTLWidth w(instr->getType());
    RTLSignal *instSig = rtl->addWire(verilogName(instr),w);
    if(USE_MB) instSig->modifySignalWithMBW(MBW,instr);


    if (!rtl->exists(verilogName(instr) + "_reg") &&
            usedAcrossStates(instr, this->state)) {
        // need a wire for chaining
        //RTLSignal *instWire = rtl->addWire(verilogName(instr) + "_wire", new
        //        RTLWidth(instr->getType()));
        //instWire->connect(instSig);
        RTLSignal *instReg = rtl->addReg(verilogName(instr) + "_reg",w);
        if(USE_MB) instReg->modifySignalWithMBW(MBW,instr);
        connectState(instReg, this->state, instSig, instr);
    }

    return instSig;
}

void GenerateRTL::visitSelectInst(SelectInst &I) {

    RTLSignal *instSig = getLeftHandSide(&I);

    RTLOp *FU = rtl->addOp(RTLOp::Sel);
    FU->setOperand(0, getOp(this->state, I.getOperand(0)));
    FU->setOperand(1, getOp(this->state, I.getOperand(1)));
    FU->setOperand(2, getOp(this->state, I.getOperand(2)));
    connectState(instSig, this->state, FU, &I);
}

RTLSignal *GenerateRTL::createBindingFU(Instruction *instr, RTLSignal *op0,
        RTLSignal *op1) {
    RTLSignal *FU;
    std::string fuId = this->binding->getBindingInstrFU(instr);

    if (isMul(instr) && MULTIPUMPING) {

        //errs() << "I: " << *instr << "\n";
        assert (multipumping_pairs.find(instr) != multipumping_pairs.end());
        // use multipump multiplier
        std::string fuOutput = multipumping_pairs_out[instr];
        //errs() << fuOutput << "\n";

        unsigned size = max(MBW->getMinBitwidth(instr->getOperand(0)),
                MBW->getMinBitwidth(instr->getOperand(1)));

        RTLOp *trunc_op0 = rtl->addOp(RTLOp::Trunc);
        trunc_op0->setCastWidth(size);
        trunc_op0->setOperand(0, op0);

        RTLOp *trunc_op1 = rtl->addOp(RTLOp::Trunc);
        trunc_op1->setCastWidth(size);
        trunc_op1->setOperand(0, op1);

        connectState(rtl->find(multipumping_pairs_op0[instr]), this->state, trunc_op0, instr);
        connectState(rtl->find(multipumping_pairs_op1[instr]), this->state, trunc_op1, instr);

        FU = rtl->find(fuOutput);

    } else {

        connectState(rtl->find(fuId + "_op0"), this->state, op0, instr);
        connectState(rtl->find(fuId + "_op1"), this->state, op1, instr);
        FU = rtl->find(fuId);
    }

    return FU;
}

// we must take into account the waitrequest signal: it could take 100
// cycles just to get to the next state.
// also need to disable the divider while making function calls
// TODO: should only be enabled when being used to save power
void GenerateRTL::create_fu_enable_signals(Instruction *instr) {
    std::string en_name;
    if (isDiv(instr) || isRem(instr)) {
        en_name = "lpm_divide_";
    } else if (isFPArith(instr) || isFPCmp(instr) || isFPCast(instr)) {
        en_name = "altfp_";
    } else {
        en_name = "lpm_mult_";
    }
    en_name += verilogName(instr) + "_en";
    RTLSignal *en = rtl->addWire(en_name);

    // wait_done = 1 when waitrequest == 0
    RTLOp *wait_done = rtl->addOp(RTLOp::EQ);
    wait_done->setOperand(0, rtl->find("memory_controller_waitrequest"));
    wait_done->setOperand(1, ZERO);

    if (rtl->exists("legup_function_call")) {
        RTLOp *fct_done = rtl->addOp(RTLOp::EQ);
        fct_done->setOperand(0, rtl->find("legup_function_call"));
        fct_done->setOperand(1, ZERO);

        RTLOp *div_en = rtl->addOp(RTLOp::And);
        div_en->setOperand(0, wait_done);
        div_en->setOperand(1, fct_done);
        en->connect(div_en);
    } else {
        en->connect(wait_done);
    }
}

// visitBinaryOperator is called on every LLVM binary operation (add, sub, etc)
// in the program. This function creates the necessary functional units for the
// operation and connects the operation's wire and register to the output of
// the function unit during the correct state of the FSM
void GenerateRTL::visitBinaryOperator(Instruction &I) {
    Instruction *instr = &I;

    // Unfortunately, visitBinaryOperator is called for every instruction
    // This includes those already bound in createBindingSignals, so we need
    // to check if this instruction is in a graph and skip it (log lookup
    // time, but needs to be done for every binary operation...)
    if (this->InstructionsInGraphs.find(instr) != this->InstructionsInGraphs.end()) {
        return;
    }

    // instWire is the wire associated with this operation. For instance the
    // LLVM instruction:
    //      %13 = add i32 %6, %4
    // Might have a wire named:
    //      main_1_13
    // Function: main, Basic Block: %1, Instruction: %13
    RTLSignal *instWire = getLeftHandSide(instr);
    RTLSignal *op0 = getOp(this->state, instr->getOperand(0));
    RTLSignal *op1 = getOp(this->state, instr->getOperand(1));

    // FU holds the output of the functional unit associated with this operation
    RTLSignal *FU;
    if (this->binding->existsBindingInstrFU(instr)) {
        FU = createBindingFU(instr, op0, op1);
    } else {
        FU = createFU(instr, op0, op1);
    }

    if (isDiv(instr) || isRem(instr) || (EXPLICIT_LPM_MULTS &&
                alloc->useExplicitDSP(instr))) {

        create_fu_enable_signals(instr);

        // drive the instruction wire signal with the output of the functional
        // unit making sure the bitwidth is correct
        instWire->connect(FU);
        instWire->setWidth(FU->getWidth());

        // store the instruction's value in a register during the ending state
        // of the instruction (when the functional unit output is available).
        // Now we can access the instruction's value in another cycle by
        // reading from this register
        RTLSignal *instReg = rtl->find(verilogName(instr) + "_reg");
        connectState(instReg, fsm->getEndState(instr), instWire, instr);

    } else {
        // connect the instruction wire to the functional unit output
        // during the active state of this operation
        connectState(instWire, this->state, FU, instr);
    }
}

void GenerateRTL::visitFCastInst (CastInst &I) {
    RTLSignal *instSig = getLeftHandSide(&I);
    Instruction *instr = &I;
    RTLSignal *op0 = getOp(this->state, instr->getOperand(0));
    
    RTLSignal *FU;
    FU = createFCastFU(instr, op0);
    connectState(instSig, this->state, FU, instr);
}

void GenerateRTL::visitFPCastInst (CastInst &I) {
    RTLSignal *instSig = getLeftHandSide(&I);
    Instruction *instr = &I;
    int int_width = 0;
    int FP_width = 0;
    RTLSignal *op0 = getOp(this->state, instr->getOperand(0));
    if ( isa<SIToFPInst>(instr)) {
        int_width = instr->getOperand(0)->getType()->getPrimitiveSizeInBits();
        FP_width = I.getDestTy()->getPrimitiveSizeInBits();
    } else if ( isa<FPToSIInst>(instr)) {
        int_width = I.getDestTy()->getPrimitiveSizeInBits();
        FP_width = instr->getOperand(0)->getType()->getPrimitiveSizeInBits();
    }

    if (FP_width != 32 && FP_width != 64) {
        errs() << "Invalid Float type for: " << *instr << "\n";
        llvm_unreachable(0);
    }

    if (int_width != 32){
        errs() << "Invalid Integer type for: " << *instr << "\n";
        llvm_unreachable(0);
    }

    RTLSignal *FU = NULL;
    if ( isa<SIToFPInst>(instr)) {
        //op0->setWidth(op0->getNativeWidth());
        FU = createSIToFPFU(instr, op0, FP_width);
    } else if ( isa<FPToSIInst>(instr)) {
        //op0->setWidth(op0->getNativeWidth());
        FU = createFPToSIFU(instr, op0, FP_width);
    }

    connectState(instSig, this->state, FU, instr);
}

void GenerateRTL::visitCastInst (CastInst &I) {
    RTLSignal *instSig = getLeftHandSide(&I);
    Instruction *instr = &I;
    RTLSignal *op0 = getOp(this->state, instr->getOperand(0));

    if (isa<SExtInst>(instr) || isa<ZExtInst>(instr)) {
        RTLOp *ext = NULL;
        if (isa<SExtInst>(instr)) {
            ext = rtl->addOp(RTLOp::SExt);
        } else {
            ext = rtl->addOp(RTLOp::ZExt);
        }
        ext->setCastWidth(instSig->getWidth());
        ext->setOperand(0, op0);
        connectState(instSig, this->state, ext, instr);
    } else if (isa<TruncInst>(instr)) {
        RTLOp *trunc = rtl->addOp(RTLOp::Trunc);
        trunc->setCastWidth(instSig->getWidth());
        trunc->setOperand(0, op0);
        connectState(instSig, this->state, trunc, instr);
    } else if ( isa<BitCastInst>(instr) || isa<PtrToIntInst>(instr) || isa
        <IntToPtrInst>(instr)) {
        connectState(instSig, this->state, op0, instr);
    } else if ( isa<FPToSIInst>(instr) || isa<SIToFPInst>(instr)) {
        visitFPCastInst(I);
    } else {
        errs() << "Unrecognized Instruction: " << *instr << "\n";
        llvm_unreachable(0);
    }
}

// similar to createBindingSignals but for multi-pump functional units
void GenerateRTL::createMultipumpSignals() {

    std::string multipump_fu_name = "multipump";
    unsigned multipump_fu_num = 0;
    map<bool, map<unsigned, unsigned> > pairCount;
    map<bool, map<unsigned, Instruction*> > prevI;

    std::map<std::string, std::string> fuid_multipumping_pairs;
    std::map<std::string, std::string> fuid_multipumping_pairs_out;
    std::map<std::string, std::string> fuid_multipumping_pairs_op0;
    std::map<std::string, std::string> fuid_multipumping_pairs_op1;


    set<std::string> seen;
    static unsigned pairs = 0;

    // todo: refactor this so binding_list isn't needed
    std::list< Instruction * > binding_list;
    int count1 = 0;
    for(Binding::iterator i = this->binding->begin(), ie = this->binding->end(); i != ie;
            ++i) {
        Instruction *I = i->first;
        if (!isMul(I)) continue;
        binding_list.push_back(I);
        count1++;
    }

    assert(count1 % 2 == 0);
    int count3 = 0;
    int count2 = 0;
    // note: we can push elements onto the back of this list in the loop body
    for(std::list<Instruction*>::iterator i = binding_list.begin(); i !=
            binding_list.end(); ++i) {
        Instruction *I = *i;
        std::string fuId = this->binding->getBindingInstrFU(I);

        //errs() << "I: " << *I << "\n";
        //errs() << "FU: " << fuId << "\n";

        if (seen.find(fuId) != seen.end()) {
            if (fuid_multipumping_pairs.find(fuId) == fuid_multipumping_pairs.end()) {
                // not found yet
                binding_list.push_back(I);
                count3++;
                assert (count3 < count1 * 2);
                continue;
            }
            multipumping_pairs[I] = fuid_multipumping_pairs[fuId];
            assert(multipumping_pairs[I] != "");
            multipumping_pairs_out[I] = fuid_multipumping_pairs_out[fuId];
            multipumping_pairs_op0[I] = fuid_multipumping_pairs_op0[fuId];
            multipumping_pairs_op1[I] = fuid_multipumping_pairs_op1[fuId];
            count2++;
            continue;
        }
        seen.insert(fuId);

        Value *vop0 = I->getOperand(0);
        Value *vop1 = I->getOperand(1);
        bool isSigned = false;

        unsigned size = max(MBW->getMinBitwidth(vop0),
                MBW->getMinBitwidth(vop1));

        unsigned origSize = I->getType()->getPrimitiveSizeInBits();

        if (size < origSize) {
            if (isa<SExtInst>(vop0) && isa<SExtInst>(vop1)) {
                isSigned = true;
            }
        }
#if 0
        errs() << "I: " << *I << "\n";
        errs() << "isSigned: " << isSigned << "\n";
        errs() << "size: " << size << "\n";
        errs() << "min: " << MBW->getMinBitwidth(I) << " - " << *I << "\n";
        errs() << "min op0: " << MBW->getMinBitwidth(I->getOperand(0)) << " - " << *I->getOperand(0) << "\n";
        errs() << "min op1: " << MBW->getMinBitwidth(I->getOperand(1)) << " - " << *I->getOperand(1) << "\n";
#endif


        if (pairCount[isSigned].find(size) == pairCount[isSigned].end()) {
            pairCount[isSigned][size] = 0;
        }
        pairCount[isSigned][size]++;

        //if (0) {
        //if (pairs < 1 && pairCount[isSigned][size] == 2) {
        if (pairCount[isSigned][size] == 2) {
            pairs++;
            Instruction *prevInst = prevI[isSigned][size];
            assert(prevInst);
            // do greedy pairing
            std::string fu = multipump_fu_name + "_" +
                //utostr(multipump_fu_num) + "_" + verilogName(I);
                utostr(multipump_fu_num);

            multipumping_pairs[prevInst] = fu;
            assert(multipumping_pairs[prevInst] != "");
            multipumping_pairs_out[prevInst] = fu + "_AxB";
            multipumping_pairs_op0[prevInst] = fu + "_inA";
            multipumping_pairs_op1[prevInst] = fu + "_inB";

            multipumping_pairs[I] = fu;
            assert(multipumping_pairs[I] != "");
            multipumping_pairs_out[I] = fu + "_CxD";
            multipumping_pairs_op0[I] = fu + "_inC";
            multipumping_pairs_op1[I] = fu + "_inD";

            fuid_multipumping_pairs[fuId] = multipumping_pairs[I];
            fuid_multipumping_pairs_out[fuId] = multipumping_pairs_out[I];
            fuid_multipumping_pairs_op0[fuId] = multipumping_pairs_op0[I];
            fuid_multipumping_pairs_op1[fuId] = multipumping_pairs_op1[I];

            std::string fuId2 = this->binding->getBindingInstrFU(prevInst);

            fuid_multipumping_pairs[fuId2] = multipumping_pairs[prevInst];
            fuid_multipumping_pairs_out[fuId2] = multipumping_pairs_out[prevInst];
            fuid_multipumping_pairs_op0[fuId2] = multipumping_pairs_op0[prevInst];
            fuid_multipumping_pairs_op1[fuId2] = multipumping_pairs_op1[prevInst];


            //errs() << "Multipump: " << fu << ", pairing: " << "\n";
            //errs() << *prevInst << "\n";
            //errs() << *I << "\n";
            multipump_fu_num++;

            createMultiPumpMultiplierFU(prevInst, I);

            count2++;
            count2++;

            pairCount[isSigned][size] = 0;
            prevI[isSigned][size] = NULL;
        } else {
            prevI[isSigned][size] = I;
        }
    }

    assert(count1 == count2);

}

// create necessary signals for binding
// also see: visitBinaryOperator()
void GenerateRTL::createBindingSignals() {

    for(Binding::iterator i = this->binding->begin(), ie =
            this->binding->end(); i != ie; ++i) {
        Instruction *instr = i->first;
        std::string fuId = i->second;

        //errs() << *instr << "\n";
        //errs() << "FU: " << fuId << "\n";

        if (isMul(instr) && MULTIPUMPING) {
            continue;
        }
                
        if (isMem(instr)) continue;

        if (rtl->exists(fuId)) continue;

        RTLWidth width(instr->getType());

        RTLSignal *op0 = rtl->addWire(fuId + "_op0",RTLWidth(instr->getOperand(0)->getType()));
        RTLSignal *op1 = rtl->addWire(fuId + "_op1",RTLWidth(instr->getOperand(1)->getType()));
        RTLSignal *FU = createFU(instr, op0, op1);
        RTLSignal *fu = rtl->addWire(fuId, RTLWidth(instr->getType()));
        if(USE_MB) {
            op0->modifySignalWithMBW(MBW,instr->getOperand(0));
            op1->modifySignalWithMBW(MBW,instr->getOperand(1));
            fu->setWidth(FU->getWidth());
            fu->setSigned(FU->getSigned());
        }
        fu->connect(FU);
    }
}

// share registers for a group of instructions assigned to the same FU
void GenerateRTL::shareRegistersForFU(
    std::set<Instruction *> &Instructions,
    std::map<Instruction*, std::set<Instruction*> > &IndependentInstructions) {

    // the key is the instruction that remains the shared register
    // the set of instructions are all the instructions that share the register
    std::map<Instruction *, std::set<Instruction *> > registers;

    // loop over every instruction assigned to this functional unit
    for(std::set<Instruction *>::iterator j = Instructions.begin(), je =
            Instructions.end(); j != je; ++j) {
        Instruction *instr = *j;
        
        // if it is a store, the verilogName(*inst) couldn't get its reg name
        if(isMem(instr)){                
            continue;
        }

        bool isSharable = false;

        // loop over all the registers
        for(std::map<Instruction *, std::set<Instruction *> >::iterator a =
                registers.begin(), ae =
                registers.end(); a != ae; ++a) {
            Instruction *sharedRegInstr = a->first;
            std::set<Instruction *> &instructionsAssignedToReg = a->second;
            assert(sharedRegInstr != instr);

            // are we independent from every single instruction assigned to
            // this register?
            bool independent = true;
            for(std::set<Instruction *>::iterator k =
                    instructionsAssignedToReg.begin(), je =
                    instructionsAssignedToReg.end(); k != je; ++k) {
                Instruction *instrAssigned = *k;

                if (IndependentInstructions[instrAssigned].find(instr) ==
                        IndependentInstructions[instrAssigned].end() ) {
                    independent = false;
                }
            }

            if (independent) {
                isSharable = true;
                //errs() << "Shared output: " << *sharedRegInstr << "\n";
                RTLSignal *sharedReg = rtl->find(verilogName(sharedRegInstr) +
                        "_reg");
                assert(sharedReg->getType() == "reg");
                RTLSignal *oldReg = rtl->find(verilogName(instr) + "_reg");

                if(sharedReg->getWidth().numBits(rtl,alloc) <
                   oldReg->getWidth().numBits(rtl,alloc))
                    sharedReg->setWidth(oldReg->getWidth());

                // now make sure the shared register is active at the
                // correct times
                State *state = sched->getFSM(Fp)->getEndState(instr);
                connectState(sharedReg, state, rtl->find(verilogName(instr)),
                        instr);

                // convert the old register into a wire and drive it by the
                // shared register
                //errs() << "Converting reg to wire: " << *instr << "\n";
                oldReg->setType("wire");
                oldReg->connect(sharedReg, (const Instruction*)(instr));
                registers[sharedRegInstr].insert(instr);
                break;
            }
        }
        if (!isSharable) {
            // create a new shared register
            registers[instr].insert(instr);
        }
    }
}

// share registers for div/rem and multiply functional units
void GenerateRTL::shareRegistersFromBinding() {
    /*
    std::map<std::string, std::set<Instruction *> > instructionsAssignedToFU;
    for(Binding::iterator i = binding->begin(), ie = binding->end(); i != ie;
            ++i) {
        Instruction *instr = i->first;
        std::string fuId = i->second;
        instructionsAssignedToFU[fuId].insert(instr);
    }*/

    // loop over all functional unit types
    for(std::map<std::string, std::set<Instruction *> >::iterator i =
            instructionsAssignedToFU.begin(), ie =
            instructionsAssignedToFU.end(); i != ie; ++i) {
        std::string fuId = i->first;
        std::set<Instruction *> &Instructions = i->second;

        std::map<Instruction*, std::set<Instruction*> > IndependentInstructions;

        // use live variable analysis to determine independent instructions
        Binding::FindIndependentInstructions(
                Instructions, IndependentInstructions, alloc->getLVA(Fp), fsm);

        shareRegistersForFU(Instructions, IndependentInstructions);
    }
}


// This string contains: function_opcodename_pair#instruction#
// For example, if we are in function f, and this is the third
// pair, we could label the nodes in the graph as:
// f_signed_add_64_p3
// The problem is a graph may have multiple signed_add_64's, so we
// add also a label for the instruction # (i):
// f_signed_add_64_p3i0, f_signed_add_64_p3i1...
std::string GenerateRTL::getPatternFUName(Graph::GraphNodes_iterator &GNi, int
        PairNumber) {
    Instruction * I = GNi->first;

    // GNi->second is the Node with that instruction (a Graph object is made of
    // nodes, and each node has an instruction as well as other information,
    // see Graph.h)
    int label = GNi->second->label;

    return alloc->verilogNameFunction(Fp, Fp) + "_" +
        LEGUP_CONFIG->getOpNameFromInst(I) + "_p" +
        legup::IntToString(PairNumber) + "i" + legup::IntToString(label);
}

void GenerateRTL::connectPatternFU(Graph::GraphNodes_iterator &GNi, int
        PairNumber) {
    // GNi->first is the instruction corresponding to this node
    Instruction * I = GNi->first;
    assert(GNi->second->I == GNi->first);
    // get the state of the instruction
    this->state = sched->getFSM(Fp)->getEndState(I);

    RTLWidth width(I->getType());
    // create the wire that is the output of the FU
    RTLSignal *fu = rtl->addWire(getPatternFUName(GNi, PairNumber), width);
    // and also the output register
    RTLSignal *instSig = getLeftHandSide(I);
    connectState(instSig, this->state, fu, I);
}

void GenerateRTL::create_pattern_fu(
        // the name of this FU
        std::string name1,
        // the node in graph 1 corresponding to this FU
        Node *node1,
        Node *node2
) {

    // and the instruction
    Instruction * I1 = node1->I;
    // get the state of the instruction (in graph 1)
    this->state = sched->getFSM(Fp)->getEndState(I1);
    assert(this->state);

    RTLWidth width(I1->getType());
    // this wire will either connect to an input mux, to an input
    // register from another FU, or an input wire from another FU
    // To see which, check if this node has a predecessor in the Graph
    RTLSignal *op0;

    // if the left predecessor of this node (p1) is an operation (as
    // opposed to an input), then the op0 wire connects to the output
    // of the previous FU (wire or register)
    if (node1->p1->is_op) {
        op0 = getOp(this->state, I1->getOperand(0));
    }
    else { // mux
        // otherwise, the left predecessor of this node is not an
        // operation in the graph, it is an input. So, add a mux
        op0 = rtl->addWire(name1 + "_op0", width);
        connectState(op0, this->state, getOp(this->state, I1->getOperand(0)), I1);
    }
    // repeat above for right predecessor, again connecting it to an
    // input wire, reg, or a mux
    RTLSignal *op1;
    if (node1->p2->is_op) {
        op1 = getOp(this->state, I1->getOperand(1));
    }
    else { // mux
        // otherwise, the left predecessor of this node is not an
        // operation in the graph, it is an input. So, add a mux
        op1 = rtl->addWire(name1 + "_op1", width);
        connectState(op1, this->state, getOp(this->state, I1->getOperand(1)), I1);
    }

    // Create this FU
    RTLSignal *FU = createFU(I1, op0, op1);
    RTLSignal *fu = rtl->find(name1);
    //fu->setWidth(FU->getWidth());
    fu->connect(FU);

    // Now we need to bind the equivalent node in graph 2 to the
    // functional unit we just created

    // This is a little tricky because graphs can be equivalent but
    // topologically different (due to commutative operations), hence
    // we will need to use the Graph2_Labels map now (mapping nodes in
    // g1 to g2 using labels), so that we can check if operands need to
    // be swapped.

    Instruction * I2 = node2->I; // the instruction
    this->state = sched->getFSM(Fp)->getEndState(I2); // its state
    assert(this->state);

    // Now, as stated above, if this node represents a commutative
    // operation, it could be that its operands need to be swapped to
    // "fit" into the functional unit it needs to be bound to.
    // To tell if this is the case, compare this node to its equivalent
    // node in graph1 ("node1")

    // case 1: Neither operand is an operation (both are mux inputs).
    // In this case, no need to swap
    if ( !node1->p1->is_op && !node1->p2->is_op ) {
        // op0 from above, still mux input
        connectState(op0, this->state, getOp(this->state, I2->getOperand(0)), I2);
        // op1 from above, still mux input
        connectState(op1, this->state, getOp(this->state, I2->getOperand(1)), I2);
    }

    // case 2: Both operands are instructions, so to be sure if they
    // are in the right order, we check if the labels match although,
    // order doesn't matter because this is commutative
    else if ( node1->p1->is_op && node1->p2->is_op ) {}

    // case 3: One operand is an instruction, the other isn't. But we
    // need to be sure that instruction is on the right side
    else if (node1->p1->is_op) { // OK, so the left operand is an op,
                                 // so the right operand is a mux
        Value *op = I2->getOperand(1); // right side, so connect normally
        if (!node2->p1->is_op) {
            op = I2->getOperand(0); // switch operands
        }
        connectState(op1, this->state, getOp(this->state, op), I2);
    }
    else { // node1->p2 is an op, so left operand is a mux
        Value *op = I2->getOperand(0);
        if (!node2->p2->is_op) {
            op = I2->getOperand(1);
        }
        connectState(op0, this->state, getOp(this->state, op), I2);
    }
}


// Iterate over every pair of graphs, and create functional units / connect
// wires and reg to functional units for each pair
void GenerateRTL::create_functional_units_for_pairs() {
    int PairNumber = 0; // for naming pairs uniquely
    for(std::map<Graph*, Graph*>::iterator p = this->GraphPairs.begin(), 
            pe = this->GraphPairs.end(); p != pe; ++p) {
        Graph * g1 = p->first;	// first graph in this pair (p is a reference
                                // to a pair)
        Graph * g2 = p->second;	// second in the pair

        // Part 1. Assign a unique name to every node in graph 1. This is the
        // functional unit name.
        // Also here, a wire and reg is created for each node in graph 1
        std::map<Node*, std::string> FUNames; // This map keeps track of the
                                              // name for every node
        // Now iterate through all the nodes in graph1 and assign names to all
        // nodes
        for (Graph::GraphNodes_iterator GNi = g1->GraphNodes.begin(),
                GNe = g1->GraphNodes.end(); GNi != GNe; ++GNi) {
            connectPatternFU(GNi, PairNumber);
            // fill our FUNames map with this node and its name
            FUNames[GNi->second] = getPatternFUName(GNi, PairNumber);
        }

        // For the next part, we will need a map of every node in graph1 to its
        // corresponding node in graph2. We could make a map<Node*, Node*>, but
        // from previous analysis (Binding.cpp) we have already labeleld all
        // nodes in each graph the same way (so equivalent nodes have the same
        // label, each label is an integer)
        std::map<unsigned, Node*> Graph2_Labels;
        for (Graph::GraphNodes_iterator GNi = g2->GraphNodes.begin(),
                GNe = g2->GraphNodes.end(); GNi != GNe; ++GNi) {
            int label = GNi->second->label;
            // now we can map an int (label) to a node in graph2, and since we
            // have also labelled all nodes in graph1 the same way, we can map
            // graph1 nodes to graph2
            Graph2_Labels[label] = GNi->second;

            connectPatternFU(GNi, PairNumber);
        }

        // Now, every FU in graph 1 has a unique name. Next, create each FU and
        // connect them properly to make the hardware chain
        // Once each FU is made from the nodes in graph1, the corresponding
        // node in graph2 will be bound to that same functional unit

        // Iterate over all nodes in the graph again, but for which we now have
        // a unique name
        for (std::map<Node*, std::string>::iterator FUi = FUNames.begin(),
                FUe = FUNames.end(); FUi != FUe; ++FUi) {
            // the name of this FU (from part 1 above)
            std::string name1 = FUi->second;
            // the node in graph 1 corresponding to this FU
            Node * node1 = FUi->first;
            // equivalent node in graph 2
            Node *node2 = Graph2_Labels[node1->label];

            create_pattern_fu(name1, node1, node2);
        }

        PairNumber++;
    }

}

//	This function is responsible for two things which are necessary to perform
//	Binding with graph objects:
//
//	1. Creating a set of properly connected functional units for each pair
//	2. For two graphs which are bound together, mapping the equivalent
// 		 instructions in both graphs to the same functional units
//
// Note that all graphs which need to be paired are already contained in the
// map GraphPairs (mapping graph g1 to graph g2 if g1 and g2 need to be paired)

void GenerateRTL::updateRTLWithPatterns() {

    create_functional_units_for_pairs();

    // all instructions from the first graph are driven by their equivalent
    // instructions from the second graph
    for (std::map<const Value*, const Value*>::iterator i =
            this->AllBindingPairs.begin(), e = this->AllBindingPairs.end(); i
            != e; ++i) {

        std::string firstName = verilogName(i->first);
        std::string secondName = verilogName(i->second);

        if (rtl->exists(secondName + "_reg")) {
            connectState(rtl->find(secondName + "_reg"),
                    fsm->getEndState((const Instruction*)(i->first)),
                    rtl->find(firstName),
                    (const Instruction*)(i->first));
        }

        RTLSignal *first = rtl->findExists(firstName);
        RTLSignal *second = rtl->findExists(secondName);
        if (first && second) {
            first->connect(second, (const Instruction*)(i->first));
            if(second->getWidth().numBits(rtl,alloc) < 
               first->getWidth().numBits(rtl,alloc)) {
                second->setWidth(first->getWidth());
            }
        }

        first = rtl->findExists(firstName + "_reg");
        second = rtl->findExists(secondName + "_reg");
        if (first && second) {
            // this signal shares a register with the second graph
            first->setType("wire");
            first->connect(second, (const Instruction*)(i->first));
            if(second->getWidth().numBits(rtl,alloc) < 
               first->getWidth().numBits(rtl,alloc)) {
                second->setWidth(first->getWidth());
            }
        }

    }
}

void addDefaultPorts(RTLModule *rtl) {
    rtl->addIn("clk");
    rtl->addIn("clk2x");
    rtl->addIn("clk1x_follower");
    rtl->addIn("reset");
    rtl->addIn("start");
    rtl->addOutReg("finish");
}

void GenerateRTL::generateVariableDeclarationsSignals(RTLModule *t, 
    std::string fctName, std::string postfix) {

    RTLSignal *en = rtl->addWire(fctName + "_memory_controller_enable" + postfix);

    RTLSignal *addr = rtl->addWire(fctName + "_memory_controller_address" + postfix,
            RTLWidth("`MEMORY_CONTROLLER_ADDR_SIZE-1"));

    RTLSignal *we = rtl->addWire(fctName + "_memory_controller_write_enable" + postfix);

    RTLSignal *in = rtl->addWire(fctName + "_memory_controller_in" + postfix,
        RTLWidth("`MEMORY_CONTROLLER_DATA_SIZE-1"));

    RTLSignal *out = rtl->addReg(fctName + "_memory_controller_out" + postfix,
        RTLWidth("`MEMORY_CONTROLLER_DATA_SIZE-1"));

    out->setDefaultDriver(ZERO);

    // function instantiation
    t->addOut("memory_controller_enable" + postfix)->connect(en);
    t->addOut("memory_controller_address" + postfix)->connect(addr);
    t->addOut("memory_controller_write_enable" + postfix)->connect(we);
    t->addOut("memory_controller_in" + postfix)->connect(in);
    if (alloc->usesGenericRAMs()) {
        RTLSignal *size = rtl->addWire(fctName + "_memory_controller_size" + postfix,
                RTLWidth(2));
        t->addOut("memory_controller_size" + postfix)->connect(size);
    }
    t->addOut("memory_controller_out" + postfix)->connect(out);
}

void GenerateRTL::generateVariableDeclarations(Function *F) {

    if (calledModules.find(F) != calledModules.end()) {
        return;
    }
    calledModules.insert(F);

    std::string fctName = verilogName(F);

    std::string str;
    raw_string_ostream Instance(str);

    RTLSignal *start = rtl->addReg(fctName + "_start");
    RTLSignal *finish = rtl->addWire(fctName + "_finish");

    RTLModule *t = rtl->addModule(fctName, fctName + "_inst");

    t->addIn("clk")->connect(rtl->find("clk"));
    t->addIn("clk2x")->connect(rtl->find("clk2x"));
    t->addIn("clk1x_follower")->connect(rtl->find("clk1x_follower"));
    t->addIn("reset")->connect(rtl->find("reset"));
    t->addIn("start")->connect(start);
    t->addOut("finish")->connect(finish);

    const Type* rT = F->getReturnType();
    if (rT->getTypeID() != Type::VoidTyID) {
        RTLWidth T(rT);
        RTLSignal *ret = rtl->addWire(fctName + "_return_val", T);
        t->addOut("return_val", T)->connect(ret);
    }

    // declarations
    // TODO: why do i have to do this twice?
    // function might never be called?

    // function instantiation
    generateVariableDeclarationsSignals(t, fctName, "_a");
    generateVariableDeclarationsSignals(t, fctName, "_b");
    
    RTLSignal *wait = rtl->addReg(fctName +
            "_memory_controller_waitrequest");
    wait->setDefaultDriver(ZERO);
    t->addOut("memory_controller_waitrequest")->connect(wait);

    for (Function::arg_iterator i = F->arg_begin(), e = F->arg_end(); i !=
            e; ++i) {
        //// TODO: fix this
        std::string argName = alloc->verilogNameFunction(i, F);
        std::string name = fctName + "_" + argName;
        RTLSignal *arg = rtl->addWire(name, RTLWidth(i->getType()));
        t->addOut(argName, RTLWidth(i->getType()))->connect(arg);
    }
}

RTLSignal *GenerateRTL::getFloatingPointConstantSignal(const ConstantFP *c) {
    SmallString<40> E;
    c->getValueAPF().bitcastToAPInt().toStringUnsigned(E, 16);
    std::string str = utostr(getBitWidth(c->getType())) + "'h";
    str = str.append(E.str());
    RTLSignal *ret = rtl->addConst(str, RTLWidth(c->getType()));
    return ret;
}

RTLSignal *GenerateRTL::getConstantSignal(const ConstantInt *c) {
    std::string str;
    // I can't use the abs() method because it doesn't work
    // when the APInt is the maximum negative value 
    // ie. abs(-2^63) = -2^63 for a 64-bit number
    APInt val = c->getValue();
    std::string numStr = val.toString(10, true);
    if (val.isNegative()) {
        // remove '-' sign
        assert(numStr[0] == '-');
        numStr.erase(0, 1);
        str = "-";
    }

    // needed for integers bigger than 32 bits (otherwise
    // Modelsim gives an error)
    str += utostr(getBitWidth(c->getType())) + "'d" + numStr;

    RTLSignal *ret = rtl->addConst(str, RTLWidth(c->getType()));
    return ret;
}


RTLSignal* GenerateRTL::getOpConstant(State *state, Constant
        *op) {

    std::string str;

    if (const ConstantInt *c = dyn_cast<ConstantInt>(op)) {
        return getConstantSignal(c);
    } else if (const ConstantFP *c = dyn_cast<ConstantFP>(op)) {
        return getFloatingPointConstantSignal(c);   
    } else if (isa<ConstantPointerNull>(op)) {
        RTLSignal *ret = rtl->addConst("0",
                RTLWidth("`MEMORY_CONTROLLER_ADDR_SIZE-1"));

        return ret;

    } else if (ConstantExpr *ce = dyn_cast<ConstantExpr>(op)) {
        // ie. %st.04.i = getelementptr i64* bitcast (%struct.point* @p1 to i64*), i32 %indvar.i ;
        // where bitcast (%struct.point* @p1 to i64*) is the operand
        assert(ce->isCast());
        return getOp(state, ce->getOperand(0));

	} else if (isa<UndefValue>(op)) {
        errs() << "Warning: Used undefined value. Setting to 0.\n";
        RTLSignal *ret = rtl->addConst("0", RTLWidth(op->getType()));
        return ret;

    } else {
        errs() << *op << "\n";
        llvm_unreachable("Unknown constant operand");
    }
}

RTLSignal* GenerateRTL::getOpNonConstant(State *state, Value
        *op) {

    assert(!isa<Constant>(op));

    std::string wire = verilogName(op);
    std::string reg = wire + "_reg";
    if (state->isWaitingForPipeline() && isPipelined(op)) {

        BasicBlock *BB = state->getBasicBlock();
        assert(BB);
        std::string label = getPipelineLabel(BB);
        const Instruction *inductionVar = getInductionVar(BB);
        if (op == inductionVar) {
            wire = label + "_i_stage" + utostr(this->stage);

        //} else if (PHINode *phi = dyn_cast<PHINode>(op)) {
        } else if (isa<PHINode>(op)) {

        } else {
            assert(pipelineSignalAvailableTable.find(op) !=
                    pipelineSignalAvailableTable.end());
            RTLSignal *sig = pipelineSignalAvailableTable[op][this->time];
            assert(sig);
            return sig;
        }
        reg = wire;
    }

    Instruction *I = dyn_cast<Instruction>(op);
    if (!I) return rtl->find(wire);

    //errs() << *I << "\n";
    //errs() << "type: " << verilogName(I) << " " <<
    //    rtl->find(verilogName(I))->getType() << "\n";

    RTLSignal *signal = NULL;
    if (fromOtherState(op, state)) {

        if (PHINode *phi = dyn_cast<PHINode>(I)) {
            createPHISignals(phi, sched->getFSM(Fp)->getEndState(I));
        }

        signal = rtl->find(reg);
    } else {
        signal = rtl->find(wire);
    }
    return signal;
}

RTLSignal *GenerateRTL::getOp(State *state, Value *op) {
    RTLSignal *ret = NULL;

    ConstantExpr *CE = dyn_cast<ConstantExpr>(op);
    if (CE && CE->getOpcode() == Instruction::GetElementPtr) {
        ret = getGEP(state, CE);
    } else {

        if (isa<GlobalVariable>(op) || isa<AllocaInst>(op)) {
            RAM *ram = getRam(op);
            if (LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
                // no TAGs - base address is always 0
                ret = ZERO;
            } else {
                ret = rtl->addConst("`" + ram->getTagAddrName(),
                        RTLWidth("`MEMORY_CONTROLLER_ADDR_SIZE-1"));
            }

        } else if (Constant *c = dyn_cast<Constant>(op)) {
            ret = getOpConstant(state, c);
        } else {
            ret = getOpNonConstant(state, op);

        }
    }
    return ret;

}


// taken from CBackend
// For every branch between basic blocks we call this function.
// 'CurBlock' is the last state (terminating state) of the basic block with the
// branch, while 'Successor' is the first state of the successor basic block.
// 'condition' is the RTL condition for transitioning from states
// CurBlock->Successor
// For every phi node in the successor basic block, we must assign the phi nodes
// phi_temp register in the 'CurBlock' state
// For instance, if the successor basic block has the phi:
//      %23 = phi i32 [ %37, %legup_memset_4.exit ],
//                    [ 0, %legup_memset_4.exit.preheader ]
// And the state 'CurBlock' is from basic block %legup_memset_4.exit
// Then this function will connect the phi_temp register
// verilogName(%23)_phi_temp to %37 during state 'CurBlock', if 'condition'
// is true (so we are actually transitioning from from CurBlock->Successor)
void GenerateRTL::generatePHICopiesForSuccessor (RTLSignal* condition, State
        *CurBlock, State *Successor) {
    assert(CurBlock);
    assert(Successor);
    if (!CurBlock->isTerminating()) return;

    const BasicBlock *incomingBB = CurBlock->getBasicBlock();
    assert(incomingBB);

    // check for phi nodes in successor
    for (State::const_iterator instr = Successor->begin(), ie =
            Successor->end(); instr != ie; ++instr) {
        if (const PHINode *phi = dyn_cast<PHINode>(*instr)) {

            RTLSignal *phi_temp_reg = rtl->addReg(
                    verilogName(phi) + "_phi_temp",
                    RTLWidth(phi->getType()));

            Value *IV = phi->getIncomingValueForBlock(incomingBB);
            phi_temp_reg->addCondition(condition, getOp(CurBlock, IV), phi);
        }
    }
}

RTLSignal *GenerateRTL::getTransitionOp(State *s) {
    RTLSignal *op = s->getTransitionSignal();
    if (op) {
        // ie. finish signal for functions
        return op;
    } else {
        return getOp(s, s->getTransitionVariable());
    }
}

// There are three types of transitions:
// switch, branch, unconditional
void GenerateRTL::generateTransition(RTLSignal *condition, State* s) {
    assert(s->getDefaultTransition());

    RTLSignal *curState = rtl->find("cur_state");

    // uncond
    if (s->getNumTransitions() == 1) {
        generatePHICopiesForSuccessor (condition, s, s->getDefaultTransition());
        curState->addCondition(condition, 
                stateSignals[s->getDefaultTransition()]);
    // cond branch
    } else if (s->getNumTransitions() == 2) {

        RTLOp *trueBranch = rtl->addOp(RTLOp::EQ);
        trueBranch->setOperand(0, getTransitionOp(s));
        trueBranch->setOperand(1, ONE);

        RTLOp *trueCond = rtl->addOp(RTLOp::And);
        trueCond->setOperand(0, condition);
        trueCond->setOperand(1, trueBranch);

        generatePHICopiesForSuccessor (trueCond, s, s->getTransitionState(0));
        curState->addCondition(trueCond,
                stateSignals[s->getTransitionState(0)]);

        RTLOp *falseBranch = rtl->addOp(RTLOp::EQ);
        falseBranch->setOperand(0, getTransitionOp(s));
        falseBranch->setOperand(1, ZERO);

        RTLOp *falseCond = rtl->addOp(RTLOp::And);
        falseCond->setOperand(0, condition);
        falseCond->setOperand(1, falseBranch);

        generatePHICopiesForSuccessor (falseCond, s, s->getDefaultTransition());
        curState->addCondition(falseCond,
                stateSignals[s->getDefaultTransition()]);

    // switch
    } else {
        assert(s->getNumTransitions() > 0);

        RTLOp *defaultCond = NULL;

        for (unsigned i = 0, e = s->getNumTransitions()-1; i != e; ++i) {
            RTLOp *varEq = rtl->addOp(RTLOp::EQ);
            varEq->setOperand(0, getTransitionOp(s));
            varEq->setOperand(1, getOp(s, s->getTransitionValue(i)));

            RTLOp *eqCond = rtl->addOp(RTLOp::And);
            eqCond->setOperand(0, condition);
            eqCond->setOperand(1, varEq);

            generatePHICopiesForSuccessor (eqCond, s, s->getTransitionState(i));
            curState->addCondition(eqCond,
                    stateSignals[s->getTransitionState(i)]);

            RTLOp *varNe = rtl->addOp(RTLOp::NE);
            varNe->setOperand(0, getTransitionOp(s));
            varNe->setOperand(1, getOp(s, s->getTransitionValue(i)));

            if (!defaultCond) {
                defaultCond = rtl->addOp(RTLOp::And);
                defaultCond->setOperand(0, condition);
                defaultCond->setOperand(1, varNe);
            } else {
                RTLOp *newCond = rtl->addOp(RTLOp::And);
                newCond->setOperand(0, defaultCond);
                newCond->setOperand(1, varNe);
                defaultCond = newCond;
            }
        }

        // default case
        generatePHICopiesForSuccessor (defaultCond, s, s->getDefaultTransition());
        curState->addCondition(defaultCond,
                stateSignals[s->getDefaultTransition()]);

    }
}

void GenerateRTL::generateDatapath() {
    std::string indent = std::string(1, '\t');

    FiniteStateMachine *fsm = sched->getFSM(Fp);
    assert(fsm->getNumStates() > 0);

    RTLSignal *curState = rtl->find("cur_state");

    for (FiniteStateMachine::iterator state = fsm->begin(), se = fsm->end();
            state != se; ++state) {

        //const BasicBlock *b = state->getBasicBlock();
        //Out << indent << "/* " << b->getParent()->getName() << ": " <<
        //    b->getName() << "*/\n";

        RTLOp *inState = rtl->addOp(RTLOp::EQ);
        inState->setOperand(0, curState);
        inState->setOperand(1, stateSignals[state]);

        RTLOp *waitReqHigh = rtl->addOp(RTLOp::EQ);
        waitReqHigh->setOperand(0, rtl->find("memory_controller_waitrequest"));
        waitReqHigh->setOperand(1, ONE);

        RTLOp *waitReqLow = rtl->addOp(RTLOp::EQ);
        waitReqLow->setOperand(0, rtl->find("memory_controller_waitrequest"));
        waitReqLow->setOperand(1, ZERO);

        RTLOp *waitReq = rtl->addOp(RTLOp::And);
        waitReq->setOperand(0, inState);
        waitReq->setOperand(1, waitReqHigh);

        RTLOp *transition = rtl->addOp(RTLOp::And);
        transition->setOperand(0, inState);
        transition->setOperand(1, waitReqLow);


        curState->addCondition(waitReq, stateSignals[state]);

        // print finishing multi-cycle instructions
        for (State::iterator instr = state->begin(), ie = state->end(); instr
                != ie; ++instr) {

            Instruction *I = *instr;

            // find the verilog command for this instruction
            this->state = state;


            // call appropriate visitXXXX() function
            visit(*I);

            // declare usage of instruction to Timing/Area estimator
            setOperationUsageFunction(I);
        }

        // generate loop pipeline basic block instructions
        if (state->isWaitingForPipeline()) {
            BasicBlock *BB = state->getBasicBlock();
            assert(BB);
            pipeRTLFile() << "Generating datapath for loop pipeline state: " <<
                state->getName() << "\n";
            this->state = state;
            for (BasicBlock::iterator I = BB->begin(), ie = BB->end(); I !=
                    ie; ++I) {
                this->stage = getMetadataInt(I, "legup.pipeline.stage");
                this->time = getMetadataInt(I, "legup.pipeline.time");
                visit(*I);
                setOperationUsageFunction(I);
            }
            // these member variables shouldn't be used anymore
            this->time = -1;
            this->stage = -1;
        }

        generateTransition(transition, state);

    }
    RTLOp *reset = rtl->addOp(RTLOp::EQ);
    reset->setOperand(0, rtl->find("reset"));
    reset->setOperand(1, ONE);
    curState->addCondition(reset, rtl->addConst("0", curState->getWidth()));
}

void GenerateRTL::generateModuleDeclarationSignals(State *wait, 
    std::string postfix) {

    // print memory controller instantiation
    RTLSignal *mem_enable = rtl->addOut("memory_controller_enable" + postfix);
    mem_enable->setDefaultDriver(ZERO);
    connectState(mem_enable, wait, ZERO);

    RTLWidth wa("`MEMORY_CONTROLLER_ADDR_SIZE-1");
    RTLSignal *addr = rtl->addOut("memory_controller_address" + postfix, wa);
    addr->setDefaultDriver(ZERO);
    connectState(addr, wait, rtl->addConst("0", wa));

    RTLSignal *we = rtl->addOut("memory_controller_write_enable" + postfix);
    we->setDefaultDriver(ZERO);
    connectState(we, wait, ZERO);

    RTLWidth wd("`MEMORY_CONTROLLER_DATA_SIZE-1");
    RTLSignal *in = rtl->addOut("memory_controller_in" + postfix, wd);
    in->setDefaultDriver(ZERO);
    connectState(in, wait, rtl->addConst("0", wd));

    if (alloc->usesGenericRAMs()) {
        RTLWidth ws(2);
        RTLSignal *size = rtl->addOut("memory_controller_size" + postfix, ws);
        size->setDefaultDriver(ZERO);
        connectState(size, wait, rtl->addConst("0", ws));
    }
    rtl->addIn("memory_controller_out" + postfix, wd);
}

void GenerateRTL::generateModuleDeclaration() {
    ZERO = rtl->addConst("0");
    ONE = rtl->addConst("1");

    // initialize state signals
    FiniteStateMachine::iterator stateIter = fsm->begin();
    for (; stateIter != fsm->end(); stateIter++) {
      State* s = stateIter;
      // we will fix the name/value later - after generating function calls
      stateSignals[s] = rtl->addParam("state_placeholder", "placeholder");
    }

    addDefaultPorts(rtl);

    // width will be set later
    rtl->addReg("cur_state");

    FiniteStateMachine *fsm = sched->getFSM(Fp);
    State *waitState = fsm->begin();

    const Type* ret = Fp->getReturnType();
    if (ret->getTypeID() != Type::VoidTyID) {
        rtl->addOutReg("return_val", RTLWidth(ret));

        // initialize the return_val to 0 in the wait state
        RTLSignal *ret = rtl->find("return_val");
        connectState(ret, waitState, rtl->addConst("0", ret->getWidth()));
    }

    // function arguments are inputs
    for (Function::arg_iterator i = Fp->arg_begin(), e = Fp->arg_end(); i != e;
            ++i) {
        rtl->addIn(verilogName(i), RTLWidth(i->getType()));
    }

    // should default memory signals to 0
    generateModuleDeclarationSignals(waitState, "_a");
    generateModuleDeclarationSignals(waitState, "_b");
    rtl->addIn("memory_controller_waitrequest");

    // wait state waits until start signal is asserted
    FiniteStateMachine::iterator firstState = fsm->begin();
    ++firstState;
    waitState->setTransitionSignal(rtl->find("start"));
    waitState->addTransition(firstState);
    waitState->setDefaultTransition(waitState);

    connectState(rtl->find("finish"), waitState, ZERO);

}

bool ignoreInstruction(const Instruction *I) {
    // ignore stores (don't need a wire/reg)
    if (I->getType()->getTypeID() == Type::VoidTyID) return true;
    // ignore allocations
    if (isa<AllocaInst>(I)) return true;
    // ignore printf calls
    if (isaDummyCall(I)) return true;
    return false;
}

// For every instruction create:
//      1) wire named verilogName(I)
//      2) register named verilogName(I) + "_reg"
void GenerateRTL::createRTLSignals() {
    for (inst_iterator i = inst_begin(Fp), e = inst_end(Fp); i != e; ++i) {
        const Instruction *I = &*i;
        if (ignoreInstruction(I)) continue;

        std::string wire = verilogName(*I);
        std::string reg = wire + "_reg";

        RTLWidth w(I->getType());
        if (!rtl->exists(wire)) {
            RTLSignal *temp = rtl->addWire(wire,w);
            if(USE_MB) temp->modifySignalWithMBW(MBW,&*i);
        }

        if (!rtl->exists(reg)) {
            RTLSignal *temp = rtl->addReg(reg, w);
            if(USE_MB) temp->modifySignalWithMBW(MBW,&*i);
        }
    }



    if (LEGUP_CONFIG->getParameterInt("LOCAL_RAMS")) {
        for (Allocation::const_ram_iterator i =
                alloc->ram_begin(), e = alloc->ram_end(); i != e; ++i) {

            const char* portNames[2] = {"a", "b"};
            std::vector<std::string> ports(portNames, portNames + 2);
            for (std::vector<std::string>::iterator p = ports.begin(),
                    pe = ports.end(); p != pe; ++p) {
                std::string port = *p;

                const RAM *R = *i;
                std::string name = R->getName();
                RTLSignal *s;
                s = rtl->addWire(name + "_address_" + port,
                        RTLWidth(R->getAddrWidth()));
                s->setDefaultDriver(ZERO);
                s = rtl->addWire(name + "_write_enable_" + port);
                s->setDefaultDriver(ZERO);
                s = rtl->addWire(name + "_in_" + port,
                        RTLWidth(R->getDataWidth()));
                s->setDefaultDriver(ZERO);
                rtl->addWire(name + "_out_" + port,
                        RTLWidth(R->getDataWidth()));
            }
        }
    }
}

// connect all registers to wires
// the FSM must be finalized before doing this
void GenerateRTL::connectRegistersToWires() {
    for (inst_iterator i = inst_begin(Fp), e = inst_end(Fp); i != e; ++i) {
        const Instruction *I = &*i;
        if (ignoreInstruction(I)) continue;
        std::string wire = verilogName(*I);
        std::string reg = wire + "_reg";

        //errs() << "Adding " << reg << " to state: " <<
        //sched->getFSM(Fp)->getEndState(I)->getName() << "\n";
        connectState(rtl->find(reg),
                sched->getFSM(Fp)->getEndState(I),
                rtl->find(wire), I);
    }
}

// handle multi-pumping of multipliers
void GenerateRTL::setup_multipumping() {
    formatted_raw_ostream out(alloc->getMultipumpingFile());

    std::string multipump_fu_name = "multipump";
    //unsigned multipump_fu_num = 0;
    unsigned multInFct = 0;
    //static unsigned pairs = 0;
    for (FiniteStateMachine::iterator state = ++fsm->begin(), se = fsm->end();
            state != se; ++state) {

        // first key: bool, true when signed
        // second key: bitwidth
        map<bool, map<unsigned, unsigned> > pairCount;
        map<bool, map<unsigned, Instruction*> > prevI;

        unsigned multInState = 0;
        //unsigned multFUInState = 0;
        for (State::iterator instr = state->begin(), ie = state->end(); instr
                != ie; ++instr) {

            Instruction *I = *instr;

            if (!alloc->useExplicitDSP(I)) continue;

            Value *vop0 = I->getOperand(0);
            Value *vop1 = I->getOperand(1);
            bool isSigned = false;

            unsigned size = max(MBW->getMinBitwidth(vop0),
                    MBW->getMinBitwidth(vop1));

            unsigned origSize = I->getType()->getPrimitiveSizeInBits();

            if (size < origSize) {
                if (isa<SExtInst>(vop0) && isa<SExtInst>(vop1)) {
                    isSigned = true;
                }
            }
#if 0
            errs() << "I: " << *I << "\n";
            errs() << "isSigned: " << isSigned << "\n";
            errs() << "size: " << size << "\n";
            errs() << "min: " << MBW->getMinBitwidth(I) << " - " << *I << "\n";
            errs() << "min op0: " << MBW->getMinBitwidth(I->getOperand(0)) << " - " << *I->getOperand(0) << "\n";
            errs() << "min op1: " << MBW->getMinBitwidth(I->getOperand(1)) << " - " << *I->getOperand(1) << "\n";
#endif


            multInState++;
            if (pairCount[isSigned].find(size) == pairCount[isSigned].end()) {
                pairCount[isSigned][size] = 0;
            }
            pairCount[isSigned][size]++;

#if 0
            //if (0) {
            //if (pairs < 1 && pairCount[isSigned][size] == 2) {
            //if (pairCount[isSigned][size] == 2) {
                pairs++;
                assert(prevI[isSigned][size]);
                // do greedy pairing
                std::string fu = multipump_fu_name + "_" +
                    utostr(multipump_fu_num) + "_" + verilogName(I);
                multipumping_pairs[prevI[isSigned][size]] = fu;
                multipumping_pairs_out[prevI[isSigned][size]] = fu + "_AxB";
                multipumping_pairs_op0[prevI[isSigned][size]] = fu + "_inA";
                multipumping_pairs_op1[prevI[isSigned][size]] = fu + "_inB";
                multipumping_pairs[I] = fu;
                multipumping_pairs_out[I] = fu + "_CxD";
                multipumping_pairs_op0[I] = fu + "_inC";
                multipumping_pairs_op1[I] = fu + "_inD";

                //errs() << "Multipump: " << fu << ", pairing: " << "\n";
                //errs() << *prevI[isSigned][size] << "\n";
                //errs() << *I << "\n";
                multipump_fu_num++;
                multFUInState++;

                createMultiPumpMultiplierFU(prevI[isSigned][size], I);

                pairCount[isSigned][size] = 0;
                prevI[isSigned][size] = NULL;
            } else {
                prevI[isSigned][size] = I;
            }
#endif
        }

        // if this check fails then there were pairs with sizes/signs that
        // didn't match exactly (I never observed this but it could happen)
        // in the case where you're left with a 32-bit and 64-bit multiplier
        // you'll want to share them
#if 0
        if (multFUInState != multInState/2) {
            errs() << "Expected to have " << multInState/2 <<
                " multipump but only created " << multFUInState << "\n";
        }
#endif

        if (multInState > 0) {
            out << "Multipliers In State: " << multInState << " (State: " <<
                state->getName() << ")\n";
        }

        multInFct = max(multInFct, multInState);
    }
    out << "Multipliers In Function: " << multInFct << " (Function: " <<
        Fp->getName() << ")\n";





}

RTLModule* GenerateRTL::generateRTL() {

    EXPLICIT_LPM_MULTS = LEGUP_CONFIG->getParameterInt("EXPLICIT_LPM_MULTS") ||
        LEGUP_CONFIG->getParameterInt("MULTIPLIER_PIPELINE_STAGES") > 0;
    MULTIPUMPING = LEGUP_CONFIG->getParameterInt("MULTIPUMPING");
    USE_MB = LEGUP_CONFIG->getParameterInt("MB_MINIMIZE_HW");

    MBW = alloc->getMBW(Fp);

    assert(!rtl);
    rtl = new RTLModule(Fp->getName());

    generateModuleDeclaration();

    createRTLSignals();

    // function calls are a special case because they can modify the
    // finite state machine. Do these first:
    generateAllCallInsts();

    // loop pipelines (which also modifies fsm)
    generateAllLoopPipelines();

    updateStatesAfterCallInsts();

    printFSMDot();

    connectRegistersToWires();

    if (MULTIPUMPING) setup_multipumping();

    binding = new BipartiteWeightedMatchingBinding(alloc, fsm, Fp);
    // Patterns is used for binding graphs
    PatternMap * Patterns = new PatternMap(fsm);
    // InstructionsInGraphs is a set of all instructions in graphs, used in
    // visitInstruction
    this->InstructionsInGraphs.clear();
    this->GraphPairs.clear();
    this->binding->operatorAssignment();
    for(Binding::iterator i = this->binding->begin(), ie = this->binding->end(); i != ie;
            ++i) {
        Instruction *instr = i->first;
        std::string fuId = i->second;
        instructionsAssignedToFU[fuId].insert(instr);
    }


    PatternBinding *patterns = new PatternBinding(alloc, fsm, Fp);
    patterns->PatternAnalysis(*Patterns, this->AllBindingPairs, this->GraphPairs,
            this->InstructionsInGraphs);
    createBindingSignals();
    if (MULTIPUMPING) {
        createMultipumpSignals();
    }
    generateDatapath();
    updateRTLWithPatterns();
    shareRegistersFromBinding();
    delete Patterns; Patterns = NULL;

    printSchedulingInfo();

    printScheduleGanttChart();

    // Module instances
    for (Function::iterator b = Fp->begin(), be = Fp->end(); b != be; ++b) {
        for (BasicBlock::iterator instr = b->begin(), ie = b->end(); instr !=
                ie; ++instr) {
            if (isaDummyCall(instr)) continue;

            if (CallInst *CI = dyn_cast<CallInst>(instr)) {
                Function *called = getCalledFunction(CI);
                generateVariableDeclarations(called);
            }
        }
    }

    // debugging: display cur_state each cycle
    if (LEGUP_CONFIG->getParameterInt("PRINT_STATES")) {
        std::string old_body = rtl->getBody();
        raw_string_ostream body (old_body);
        body << "always @(posedge clk)" << "\n";
        body << "\t$display(\"" << Fp->getName() <<
            " cur_state: %d\", cur_state);\n";
        rtl->setBody(body.str());
    }

    return rtl;
}

// print out the data flow graph for each basic block
void GenerateRTL::printSchedulingDFGDot(SchedulerDAG &dag) {
    for (Function::iterator bb = Fp->begin(), be = Fp->end(); bb != be; ++bb) {
          std::string FileError;
          std::string fileName = "dfg." + getLabel(Fp) + "_" + getLabel(bb) +
              ".dot";
          raw_fd_ostream dfgFile(fileName.c_str(), FileError);
          assert(FileError.empty() && "Error opening dot files");
          formatted_raw_ostream out(dfgFile);
          dag.printDFGDot(out, bb);
    }
}

void GenerateRTL::printSchedulingInfo() {
    formatted_raw_ostream out(alloc->getSchedulingFile());

    std::map<BasicBlock*, unsigned> bbCount;
    out << "Start Function: " << Fp->getName() << "\n";
    //std::ofstream out("scheduling.legup.rpt", std::ios::app);
    for (FiniteStateMachine::iterator state = fsm->begin(), se = fsm->end();
            state != se; ++state) {
        out << "state: " << state->getName() << "\n";
        BasicBlock *bb = state->getBasicBlock();
        bbCount[bb]++;
        for (State::iterator instr = state->begin(), ie = state->end(); instr
                != ie; ++instr) {
            Instruction *I = *instr;
            if (bb && I == bb->getTerminator()) continue;
            assert(fsm->getStartState(I) == state);
            out << " " << getValueStr(I) << " (endState: " <<
                fsm->getEndState(I)->getName() << ")\n";
        }
        // print out branch:
        if (bb && state->isTerminating()) {
            out << " " << getValueStr(bb->getTerminator()) << "\n";
        }
        out << "   ";
        state->printTransition(out);
        out << "\n";
    }
    out << "\n";
    for(std::map<BasicBlock*, unsigned>::iterator i = bbCount.begin(), e =
            bbCount.end(); i != e; ++i) {
        BasicBlock *bb = i->first;
        if (!bb) continue;
        unsigned count = i->second;
        out << "Basic Block: " << getLabel(bb) << " Num States: " << count << "\n";
    }
    out << "End Function: " << Fp->getName() << "\n";
    out << "--------------------------------------------------------------------------------\n\n";
}

void GenerateRTL::printScheduleGanttChart() {
    std::string Filename = "gantt." + Fp->getNameStr() + ".tex";
    //errs() << "Writing '" << Filename << "'...";

    std::string ErrorInfo;
    raw_fd_ostream file(Filename.c_str(), ErrorInfo);
    if (!ErrorInfo.empty()) {
        errs() << "Error opening file: " << Filename << " for writing!\n";
        return;
    }

    file << "\\documentclass[landscape]{article}\n";
    //file << "\\usepackage{fullpage}\n";
    file << "\\usepackage{gantt}\n";
    file << "\\pagestyle{empty}\n";
    file << "\\begin{document}\n";
    //file << "\\setlength{\\pdfpagewidth}{100in}\n";
    //file << "\\setlength{\\pdfpageheight}{200in}\n";
    //file << "Function: " << verilogName(Fp) << "\n";


    std::vector<GanttBar> gantt;
    std::map<Instruction *, GanttBar> instructions;

    FiniteStateMachine *fsm = sched->getFSM(Fp);

    int instNum = 1;
    int stateNum = 1;
    for (FiniteStateMachine::iterator state = ++fsm->begin(), se = fsm->end();
            state != se; ++state) {
        for (State::iterator instr = state->begin(), ie = state->end(); instr
                != ie; ++instr) {
            GanttBar bar;
            bar.inst = *instr;
            bar.x = stateNum;
            bar.y = instNum;
            bar.duration = Scheduler::getNumInstructionCycles(bar.inst);
            if (bar.duration == 0) {
                bar.duration = 1;
            }
            gantt.push_back(bar);
            instructions[*instr] = bar;
            //errs() << *bar.inst << "\n";
            instNum++;
        }
        stateNum++;
        if (state->isTerminating() && !gantt.empty()) {
            printGantt(file, gantt, instructions, stateNum);
            instNum = 1;
            stateNum = 1;
            gantt.clear();
            instructions.clear();
        }
    }

    file << "\\end{document}\n";
}

void GenerateRTL::printGantt(raw_fd_ostream &file, std::vector<GanttBar> &gantt,
        std::map<Instruction *, GanttBar> &instructions, int stateNum) {

    unsigned rows = gantt.size() + 1;
    unsigned cols = stateNum;
    unsigned start = 0;
    unsigned increment = 1;
    unsigned span = 1;
    unsigned end = cols-1;

    file << "\\begin{figure}\n";
    file << "\\begin{gantt}[fontsize=\\scriptsize]{" << rows << "}{" << cols << "}\n";
    file << "\\begin{ganttitle}\n";
    file << "\\numtitle{" << start << "}{" << increment << "}{" << end << "}{"
        << span << "}\n";
    file << "\\end{ganttitle}\n";

    //errs() << "gantt: " << gantt.size() << "\n";
    for (std::vector<GanttBar>::iterator bar = gantt.begin(), bare =
            gantt.end(); bar != bare; ++bar) {
        std::string stripped;
        raw_string_ostream stream(stripped);
        Instruction *I = bar->inst;
        stream << *I;
        replaceAll(stripped, "%", "\\%");
        replaceAll(stripped, "_", "\\_");
        // limit the size of the instruction string
        unsigned limit = 80;
        if (stripped.length() > limit) {
            stripped.erase(limit);
            stripped = stripped + "...";
        }

        file << "\\ganttbar{" << stripped << "}{" << bar->x << "}{" <<
            bar->duration << "}\n";

        for (Value::use_iterator i = I->use_begin(), e = I->use_end(); i
                != e; ++i) {
            Instruction *use = dyn_cast<Instruction>(*i);
            if (!use) continue;
            //assert(instructions.find(use) != instructions.end());
            if (instructions.find(use) == instructions.end()) continue;
            GanttBar useGantt = instructions[use];
            file << "\\ganttcon{" << bar->x + bar->duration << "}{" << bar->y << "}{" <<
                useGantt.x << "}{" << useGantt.y << "}\n";
        }
    }

    /*
    \ganttbar{\%i.04 = phi i32 [ 0, \%bb.nph ], [ \%3, \%bb ]}{1}{0}
    \ganttbarcon{\%scevgep5 = getelementptr \%b, \%i.04}{1}{1}
    \ganttbarcon{\%0 = load \%scevgep5}{2}{2}
    \ganttbar{\%scevgep6 = getelementptr \%c, \%i.04}{1}{1}
    \ganttbarcon{\%1 = load \%scevgep6}{3}{2}
    \ganttbarcon{\%2 = add nsw i32 \%1, \%0}{5}{1}
    \ganttbar{\%scevgep = getelementptr \%a, \%i.04}{1}{1}
    \ganttbarcon{store \%2, \%scevgep}{6}{1}
    \ganttcon{1}{1}{1}{7}
    \ganttcon{1}{1}{1}{4}
    \ganttcon{4}{3}{5}{6}
    % x, y x, y
    \ganttcon{6}{6}{6}{8}
    \ganttbar{\%3 = add \%i.04, 1}{1}{1}
    \ganttcon{1}{1}{1}{9}
    \ganttbarcon{\%exitcond = eq \%3, 100}{2}{1}
    \ganttbarcon{br \%exitcond, \%bb2, \%bb}{7}{0}
    */
    file << "\\end{gantt}\n";
    assert(!gantt.empty());
    //file << "\\caption{" << "Function: " << verilogName(Fp) << " "
        //<< *gantt[0].inst->getParent() << "}\n";

    file << "\\end{figure}\n";

}


void GenerateRTL::scheduleOperations() {
    AliasAnalysis *AA = alloc->getAA();
    SchedulerDAG dag;
    dag.runOnFunction(*Fp, AA, alloc);

    bool doASAP = LEGUP_CONFIG->getParameterInt("NO_SDC");

    if (doASAP) {
      sched = new ASAPScheduler();
    } else {
      sched = new SDCScheduler(alloc);
    }

    sched->schedule(Fp, &dag);
    fsm = sched->getFSM(Fp);

    if (!LEGUP_CONFIG->getParameterInt("NO_DFG_DOT_FILES")) {
        printSchedulingDFGDot(dag);
    }
}

GenerateRTL::~GenerateRTL () {
    assert(sched);
    assert(sched->getFSM(Fp));
    delete sched->getFSM(Fp);
    delete sched;
    assert(rtl);
    delete rtl;
    assert(binding);
    delete binding;
}

} // End legup namespace
