//===-- Ram.h -------------------------------------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// RAM represents a single-port ram holding an LLVM Value object
//
//===----------------------------------------------------------------------===//

#ifndef LEGUP_RAM_H
#define LEGUP_RAM_H

#include "llvm/Instructions.h"
#include "llvm/Constants.h"
#include <stack>

using namespace llvm;


namespace legup {
class Allocation;

/// RAM represents a single-port ram holding an LLVM Value object
/// @brief Legup RAM Representation
class RAM {
public:
    RAM(const Value *I, Allocation *alloc);

    /// getName - get the verilog name of the ram
    std::string getName() const;

    /// getTag - get the name of the tag `define variable
    std::string getTag() const {
        std::string ret = "TAG_";
        // add prefix for global variables
        if (isa<GlobalVariable>(value)) {
            ret += "g_";
        }
        ret += getName();
        return  ret;
    }

    std::string getTagAddrName() const {
        return getTag() + "_a";
    }

    std::string getTagAddr() const;

    /// getValue - get the underlying LLVM Value stored in this ram
    const Value* getValue() const { return value; }

    /// getAddrWidth - get the ram address width in bits
    unsigned getAddrWidth() const { return addresswidth; }

    /// getDataWidth - get the ram data width in bits
    unsigned getDataWidth() const { return datawidth; }

    /// getElements - number of words in the ram
    unsigned getElements() const { return elements; }

    /// getMifFileName - name of the mif file initialization
    std::string getMifFileName() const { return mifname; }

    /// getInitializer - get the initializer if the ram stores a global
    /// variable
    const Constant* getInitializer() const { return initializer; }

    /// isStruct() - return if the RAM uses byte enables (ie for structs)
    bool isStruct() const { return IsStruct; }

    /// generateMIF() - generate MIF file for RAM
    void generateMIF() const;
private:
    void initializeStruct();
    void initialize();
    void buildInitializer();
    void initializeToZero();
    void initializeArray(const ConstantArray *C);
    void initializeConstantExpr(const ConstantExpr *expr);

    APInt getPointerFromGEP(const ConstantExpr *expr);
void visitConstantStruct(
        const ConstantStruct *cs,
        std::stack<const Constant*> &lifo,
        std::stack<unsigned> &elemLifo,
        std::stack<unsigned> &structOffset,
        unsigned &elemCount,
        unsigned &offset
        );

void visitConstantArray(
        const ConstantArray *ca,
        std::stack<const Constant*> &lifo,
        std::stack<unsigned> &elemLifo,
        std::stack<unsigned> &structOffset,
        unsigned &elemCount,
        unsigned &offset
        );

    uint64_t getConstantVal(const Constant *c, unsigned offset, uint64_t val);
    void getRAMType();
    int getStructElements(StructType *STy);
    void getRAMTypeForArray(ArrayType *ATy);
    void getRAMTypeForStruct(StructType *STy);
void visitConstant(
        const Constant *c,
        uint64_t *val,
        std::stack<const Constant*> &lifo,
        std::stack<unsigned> &elemLifo,
        std::stack<unsigned> &structOffset,
        unsigned &elemCount,
        unsigned &offset
        );


    const Value* value;
    bool IsStruct;
    unsigned elements, addresswidth, datawidth;
    std::vector<APInt> initial;
    std::vector<APFloat> FPinitial;
    std::string mifname;
    Allocation *alloc;
    const Constant *initializer;
};

} // End legup namespace

#endif
