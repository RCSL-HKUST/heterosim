//===-- Ram.cpp -------------------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the Ram class
//
//===----------------------------------------------------------------------===//

#include "Ram.h"
#include "Allocation.h"
#include "utils.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"


using namespace llvm;
using namespace legup;

namespace legup {

std::string RAM::getName() const { return alloc->verilogName(value); }

std::string RAM::getTagAddr() const {
    std::string ret = "{`";
    ret += getTag() + ", ";
    ret += utostr( (int)alloc->getTargetData()->getPointerSizeInBits() -
            alloc->getTagSize() );
    ret += "'b0}";
    return ret;
}


void RAM::visitConstantStruct(
        const ConstantStruct *cs,
        std::stack<const Constant*> &lifo,
        std::stack<unsigned> &elemLifo,
        std::stack<unsigned> &structOffset,
        unsigned &elemCount,
        unsigned &offset
        ) {
    const StructLayout *SL = alloc->getTargetData()->getStructLayout(cs->getType());
    if (elemCount == cs->getNumOperands()) {
        lifo.pop();
        elemLifo.pop();
        structOffset.pop();
    } else {
        if (elemCount == 0) {
            structOffset.push(offset);
        } else {
            offset = structOffset.top() + SL->getElementOffset(elemCount);
        }
        lifo.push(cs->getOperand(elemCount));
        elemCount++;
        elemLifo.pop();
        elemLifo.push(elemCount);
        elemLifo.push(0);
    }
}

void RAM::visitConstantArray(
        const ConstantArray *ca,
        std::stack<const Constant*> &lifo,
        std::stack<unsigned> &elemLifo,
        std::stack<unsigned> &structOffset,
        unsigned &elemCount,
        unsigned &offset
        ) {
    if (elemCount == 0) {
        if (isa<ConstantStruct>(ca->getOperand(0)))
            structOffset.push(offset);
    } else {
        if (const ConstantInt *ci = dyn_cast<ConstantInt>(ca->getOperand(0)))
            offset += ci->getBitWidth() / 8;
        else if (const ConstantStruct *cs = dyn_cast<ConstantStruct>(ca->getOperand(0))) {
            const StructLayout *SL = alloc->getTargetData()->getStructLayout(cs->getType());
            offset = structOffset.top() + SL->getSizeInBytes();
        }
    }
    if (elemCount == ca->getNumOperands()) {
        lifo.pop();
        elemLifo.pop();
        if (isa<ConstantStruct>(ca->getOperand(0)))
            structOffset.pop();
    } else {
        lifo.push(ca->getOperand(elemCount));
        elemCount++;
        elemLifo.pop();
        elemLifo.push(elemCount);
        elemLifo.push(0);
    }

}

// assign appropriate bits of 64-bit value
// for example ci is a 2-byte short:
//      ci = 0xAABB
//      ci->getZExtValue = 0x000000000000AABB (64-bits)
//      wordAlignedByteOffset = 2
//      offset       7  6  5  4  3  2  1  0
//      val =       00 0F FF FF 00 00 00 00  (previous value)
//      bitwise or val with:
//      val |=      00 00 00 00 AA BB 00 00  (ci << (2 * 8))
//      val =       00 0F FF FF AA BB 00 00
uint64_t RAM::getConstantVal(const Constant *c, unsigned offset, uint64_t val) {
    const ConstantInt *ci = dyn_cast<ConstantInt>(c);

    unsigned wordByteSize = 8;
    unsigned wordAlignedByteOffset = offset % wordByteSize;

    unsigned intSize;
    if (ci) {
        intSize = ci->getBitWidth() / 8;
    } else {
        intSize = alloc->getTargetData()->getPointerSize();
    }

    // assert alignment
    assert(wordAlignedByteOffset % intSize == 0);
    // assert that we are not overwriting any values
    assert(val >> (wordAlignedByteOffset * 8) == 0);

    if (ci) {
        val |= ci->getZExtValue() << (wordAlignedByteOffset * 8);
    } else {
        val = alloc->getRamTagNum(dyn_cast<Value>(c));
        val <<= (32 - alloc->getTagSize());
    }
    return val;
}

void RAM::visitConstant(
        const Constant *c,
        uint64_t *val,
        std::stack<const Constant*> &lifo,
        std::stack<unsigned> &elemLifo,
        std::stack<unsigned> &structOffset,
        unsigned &elemCount,
        unsigned &offset
        ) {
    if (offset > 0 && offset % 8 == 0) {
        initial.push_back(APInt(getDataWidth(), *val));
        *val = 0;
    }

    if (isa<ConstantInt>(c) || (isa<PointerType>(c->getType()) &&
                !isa<ConstantPointerNull>(c))) {

        *val = getConstantVal(c, offset, *val);

    } else {
        assert(isa<ConstantAggregateZero>(c) ||
                isa<ConstantPointerNull>(c) ||
                isa<UndefValue>(c));
    }

    lifo.pop();
    elemLifo.pop();
}

// we have a struct somewhere, may be nested in array or another struct
void RAM::initializeStruct() {

    assert (isStruct());

    unsigned offset = 0, elemCount = 0;
    uint64_t val = 0;

    // parent elements when iterating
    std::stack<const Constant*> lifo;
    // element number, used for iterating through arrays and structs
    std::stack<unsigned> elemLifo;
    // base offset when iterating through structs
    std::stack<unsigned> structOffset;

    // push parent element with element count of 0
    lifo.push(getInitializer());
    elemLifo.push(0);

    while (!lifo.empty()) {
        const Constant *c = lifo.top();
        elemCount = elemLifo.top();
        if (const ConstantStruct *cs = dyn_cast<ConstantStruct>(c)) {
            visitConstantStruct(cs, lifo, elemLifo, structOffset, elemCount, offset);

        } else if (const ConstantArray *ca = dyn_cast<ConstantArray>(c)) {

            visitConstantArray(ca, lifo, elemLifo, structOffset, elemCount, offset);
        } else {

            visitConstant(c, &val, lifo, elemLifo, structOffset, elemCount, offset);

        }
    }
    initial.push_back(APInt(getDataWidth(), val));

    // the following shouldn't be necessary
    /*assert(initial.size() <= elements);
      while (initial.size() < elements)
      initial.push_back(APInt(getDataWidth(), 0));*/

    // make sure the RAM is not uninitialized
    // otherwise, struct padding will never be initialized
    APInt Zero = APInt(getDataWidth(), 0);
    for (unsigned i = 0; i < elements; i++) {
        initial.push_back(Zero);
    }
}

void RAM::initializeToZero() {
    APInt Zero = APInt(getDataWidth(), 0);

    for (unsigned i = 0; i < elements; i++) {
        initial.push_back(Zero);
    }
}

// store in row-major order:
// array[2][2][2] = {{{0, 1}, {2, 3}}, {{4, 5}, {7, 8}}}
// Dimensions: array[A][B][C] A=2, B=2, C=2
// When accessing array[a][b][c]:
//      offset = c + C*b + C*B*a = c + C*(b + B*a)
//
// change to a stack for column-major order
void RAM::initializeArray(const ConstantArray *C) {
    std::queue<const ConstantArray*> fifo;
    fifo.push(C);
    while (!fifo.empty()) {
        const ConstantArray *c = fifo.front();
        fifo.pop();

        for (unsigned i = 0, e = c->getNumOperands(); i != e; ++i) {
            Value *op = c->getOperand(i);
            if (const ConstantInt *I = dyn_cast<ConstantInt>(op)) {
                //errs() << I->getValue() << "\n";
                initial.push_back(I->getValue());
            } else if (const ConstantArray *CA = dyn_cast<ConstantArray>(op)) {
                fifo.push(CA);
            } else if (const ConstantExpr *ce = dyn_cast<ConstantExpr>(op)) {
                // ie. [2 x i32*] [i32* getelementptr inbounds ([28 x i32]* @head1_0, i32 0, i32 0), i32* null]
                //fifo.push(ce->getOperand(0));
                initial.push_back(getPointerFromGEP(ce));
            } else if (isa<ConstantPointerNull>(op)) {
                APInt Zero = APInt(getDataWidth(), 0);
                initial.push_back(Zero);
            } else if (const ConstantFP *F = dyn_cast<ConstantFP>(op)) {
                FPinitial.push_back(F->getValueAPF()); //Floating point
            } else {
                errs() << "Array: " << *C << "\n";
                errs() << "Operand: " << *op << "\n";
                llvm_unreachable(0);
            }
        }
    }
}

void RAM::initializeConstantExpr(const ConstantExpr *expr) {
    initial.push_back(getPointerFromGEP(expr));
}

APInt RAM::getPointerFromGEP(const ConstantExpr *expr) {
    if (!expr->isGEPWithNoNotionalOverIndexing()) {
        llvm_unreachable(0);
    }
    uint64_t val = alloc->getRamTagNum(dyn_cast<Value>(expr->getOperand(0)));
    val <<= (32 - alloc->getTagSize());
    // Compute the offset that this GEP adds to the pointer.
    SmallVector<Value*, 8> Indices(expr->op_begin()+1, expr->op_end());
    uint64_t GEPOffset = alloc->getTargetData()->getIndexedOffset(
            expr->getOperand(0)->getType(), Indices);
    return APInt(getDataWidth(), val + GEPOffset);
}

void RAM::initialize() {
    if (const ConstantArray *C = dyn_cast<ConstantArray>(initializer)) {
        initializeArray(C);
    } else if (const ConstantInt *c = dyn_cast<ConstantInt>(initializer)) {
        initial.push_back(c->getValue());
    } else if (const ConstantFP *fp = dyn_cast<ConstantFP>(initializer)) {
        FPinitial.push_back(fp->getValueAPF());
    } else if (const ConstantExpr *expr = dyn_cast<ConstantExpr>(initializer)) {
        initializeConstantExpr(expr);
    } else {
        llvm_unreachable(0);
    }
}


void RAM::buildInitializer() {
    if (!initializer) {
        return;
    }
    if (isa<ConstantAggregateZero>(initializer) ||
            isa<ConstantPointerNull>(initializer)) {
        initializeToZero();
    } else if (isStruct()) {
        initializeStruct();
    } else {

        initialize();
        //check if array is floating point or integer
        if (FPinitial.size()>initial.size())
            assert(FPinitial.size() == elements);
        else
            assert(initial.size() == elements);
    }
}

// write out a .mif file for ram initialization
void RAM::generateMIF() const {
    if (!initializer) {
        return;
    }

    std::string ErrorInfo;
    raw_fd_ostream File(mifname.c_str(), ErrorInfo);

    if (!ErrorInfo.empty()) {
        DEBUG(errs() << "Error: " << ErrorInfo << '\n');
        return;
    }

    File << "Depth = " << elements << ";\n";
    File << "Width = " << getDataWidth() << ";\n";
    File << "Address_radix = dec;\n";
    File << "Data_radix = hex;\n";
    File << "Content\n";
    File << "Begin\n";

//Check if the array is floating point or integer
    if (FPinitial.size()>initial.size()){
        for (unsigned i = 0; i < elements; i++) {
            File << i << ": ";
            //check if floating point array is float or double.
            if (getDataWidth()==32){
                float temp = FPinitial[i].convertToFloat(); //APFloat -> Float
                char buffer[9];
                hex_string(buffer, (char*)&temp, 4);
                File << buffer << ";\t-- " << temp << "\n";
            }
            else{
                double temp = FPinitial[i].convertToDouble(); //APFloat -> Double
                char buffer[17];
                hex_string(buffer, (char*)&temp, 8);
                File << buffer << ";\t-- " << temp << "\n";
            }
        }
    }
    else
        for (unsigned i = 0; i < elements; i++) {
            File << i << ": ";
            SmallString<40> E;
            // todo: signed values!
            initial[i].toStringUnsigned(E, 16);
            // todo: add this for comments
            //File.PadToColumn(20);
            unsigned leadingZeros = initial[i].countLeadingZeros() / 4;
            if (initial[i] == 0 && leadingZeros > 1) leadingZeros--;
            std::string zeroPad = std::string(leadingZeros, '0');
            File << zeroPad << E.str() << ";";
            // put decimal value in comment
            File << "\t-- " << initial[i] << "\n";
        }
    File << "End;\n";
}


void RAM::getRAMTypeForArray(ArrayType *ATy) {
    elements = ATy->getNumElements();

    // arrays can hold other arrays
    while (ArrayType *ATy2 = dyn_cast<ArrayType>(ATy->getElementType())) {
        elements = elements * ATy2->getNumElements();
        ATy = ATy2;
    }

    // calculate data width
    Type *dataTy = ATy->getElementType();
    DEBUG(errs() << "elements: " << elements << ", type: " << *dataTy << "\n");
    if (const IntegerType *ITy = dyn_cast<IntegerType>(dataTy)) {
        datawidth = ITy->getBitWidth();
    } else if (dataTy->isFloatTy()){
        datawidth = 4 * 8; //float type is 4 byte
    } else if (dataTy->isDoubleTy()){
        datawidth = 8 * 8; //double type is 8 byte
    } else if (StructType *STy = dyn_cast<StructType>(dataTy)) {
        IsStruct = true;
        datawidth = 64;

        int structSize = getStructElements(STy);
        elements *= structSize;
    } else if (isa<PointerType>(dataTy)) {
        datawidth = alloc->getTargetData()->getPointerSizeInBits();
    } else {
        llvm_unreachable("Unsupported Array Type");
    }

    // remember that we can ignore the 0th element
    // ie. 16 elements will require 4 bits (not 5 bits required to store the
    // _number_ 16)
    addresswidth = requiredBits(elements-1);
}

void RAM::getRAMTypeForStruct(StructType *STy) {
    IsStruct = true;
    datawidth = 64;

    elements = getStructElements(STy);
    addresswidth = requiredBits(elements-1);
}

int RAM::getStructElements(StructType *STy) {
    const StructLayout *SL = alloc->getTargetData()->getStructLayout(STy);
    int elements = SL->getSizeInBytes();
    // round up to nearest 8, then divide by 8
    if (elements % 8 == 0) {
        elements /= 8;
    } else {
        elements = elements / 8 + 1;
    }
    return elements;
}

void RAM::getRAMType() {
    // RAM value should always be a pointer
    Type *T = value->getType();
    PointerType *PTy = dyn_cast<PointerType>(T);
    assert(PTy);

    // RAM value points to either an array or an integer
    Type *ETy = PTy->getElementType();

    IsStruct = false;

    if (ArrayType *ATy = dyn_cast<ArrayType>(ETy)) {
        getRAMTypeForArray(ATy);
    } else if (const IntegerType *ITy = dyn_cast<IntegerType>(ETy)) {
        DEBUG(errs() << *ETy << "\n");
        DEBUG(errs() << *PTy << "\n");
        elements = 1;
        addresswidth = 1;
        datawidth = ITy->getBitWidth();
    } else if (isa<PointerType>(ETy)) {
        elements = 1;
        addresswidth = 1;
        datawidth = alloc->getTargetData()->getPointerSizeInBits();
    } else if (StructType *STy = dyn_cast<StructType>(ETy)) {
        getRAMTypeForStruct(STy);
    } else if (ETy->isFloatTy()){
        elements = 1;
        addresswidth = 1;
        datawidth = 4 * 8; //float type is 4 byte
    } else if (ETy->isDoubleTy()){
        elements = 1;
        addresswidth = 1;
        datawidth = 8 * 8; //double type is 8 byte
    } else {
        errs() << "LegUp does not support the type: " << *ETy << "\n";
        report_fatal_error("Unsupported type");
    }
}

RAM::RAM(const Value *R, Allocation *alloc) :
    alloc(alloc), initializer(NULL)
{
    value = R;

    getRAMType();

    // deal with initialization
    if (const GlobalVariable *G = dyn_cast<GlobalVariable>(R)) {
        initializer = G->getInitializer();
    }

    buildInitializer();

    mifname = getName() + ".mif";

    DEBUG(errs() << "RAM: " << *R << "\n");
    DEBUG(errs() << "Allocated RAM. Elements " << elements << ", data width: " <<
        getDataWidth() << ", Address width: " << addresswidth << "\n");
}

} // End legup namespace
