//===-- RTL.h - Circuit Data Structures ---------------------*- C++ -*-===//
//
// This file is distributed under the LegUp license. See LICENSE for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains circuit data structures:
//
// RTLModule: a circuit composed of RTLSignals
// RTLSignal: wire/reg with multiple RTLSignal drivers each predicated by a
//            conditional RTLSignal to form a mux
//   RTLOp: result of a two operand hardware function i.e. +
//   RTLConst: a constant signal i.e. 3'b101
// RTLWidth: Represents the bitwidth of a RTLSignal i.e. [5:2]
//
//===----------------------------------------------------------------------===//

#ifndef LEGUP_RTL_H
#define LEGUP_RTL_H

#include "llvm/ADT/StringExtras.h"
#include "llvm/DerivedTypes.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/FormattedStream.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/BasicBlock.h"
#include "llvm/Function.h"
#include <map>
#include <set>

#include "utils.h"

using namespace llvm;

namespace legup {

class MinimizeBitwidth;
class Allocation;
class RTLOp;
class RTLModule;

/// RTLWidth - Represents the bitwidth of a RTLSignal i.e. [5:2]
/// @brief RTLWidth
class RTLWidth {
public:
    RTLWidth() { }

    // shortcut for LLVM instructions
    RTLWidth(const Type* T, std::string lo="0") : hi(getMSBIndex(T)), lo(lo) {}

    // Standard width. ie. size=32 will give 31:0
    RTLWidth(unsigned size) : lo("0") {
        assert(size != 0);
        if (size == 1) {
            hi = "";
        } else {
            hi = utostr(size-1);
        }
    }
    // This can be used to create non-standard widths. ie. 6:3
    // Or it can also be used for parameterized widths
    //   ie. `MEMORY_CONTROLLER_DATA_SIZE-1:0
    RTLWidth(std::string hi, std::string lo="0") : hi(hi), lo(lo) {}

    RTLWidth(unsigned hiIn, unsigned loIn) : lo(utostr(loIn)) {
        if(hiIn==0) hi="";
        else hi=utostr(hiIn);
    }

    std::string str() const;
    std::string getHi(){ return hi; };
    std::string getLo(){ return lo; };

    // an integer for the number of bits
    // we need the RTLModule and Allocation to handle global `define and
    // parameterized widths
    unsigned numBits(const RTLModule *rtl, const Allocation *alloc) const;

    bool operator==(const RTLWidth &other) const;

private:
    std::string hi, lo;
};

/// RTLSignal - Represents an RTL always block for a
/// wire/reg that can be assigned to other RTLSignals each predicated on an
/// RTLSignal to form a mux.
/// @brief RTL wire/reg always block
class RTLSignal {
public:
    RTLSignal();
    RTLSignal(std::string name, std::string value, RTLWidth bitwidthIn=RTLWidth(),
              RTLWidth nativeBitwidthIn=RTLWidth(), bool isSigned=false);
    virtual ~RTLSignal();

    std::string getValue() const { return value; }
    std::string getName() const { return name; }
    void setName(std::string n) { name = n; }
    void setValue(std::string v) { value = v; }
    void modifySignalWithMBW(MinimizeBitwidth *MBW, Value *instr);

    /// Is the RTLSignal an RTLOp?
    virtual bool isOp() const {
        return false;
    }

    /// Is the RTLSignal an RTLConst?
    virtual bool isConst() const {
        return false;
    }

    /// Drive this RTLSignal by exactly one other RTLSignal.
    /// This clears all existing drivers.
    void connect(RTLSignal *s, const Instruction *I=0);

    /// Is the RTLSignal a register? 
    bool isReg() const; // Note: This means register, not Verilog "reg"
		/// (every signal is a Verilog "reg", but may not be a register) 

    /// Get the type: reg/wire
    std::string getType() const { return type; }
    void setType(std::string t) { type = t; }

    /// Get the conditional RTLSignal for the ith driving RTLSignal
    const RTLSignal* getCondition(unsigned i) const { return conditions.at(i); }
    RTLSignal* getCondition(unsigned i) { return conditions.at(i); }

    /// Get the ith driving RTLSignal
    const RTLSignal* getDriver(unsigned i) const { return drivers.at(i); }
    RTLSignal* getDriver(unsigned i) { return drivers.at(i); }

    /// Get the Instruction of the ith driving RTLSignal
    const Instruction* getInst(unsigned i) const { return instrs.at(i); }

    const Instruction* getInstPtr(unsigned i) const {
        if (instrs.size() == 0 || i > instrs.size()-1) {
            return NULL;
        }
        return instrs.at(i);
    }

    /// Add a new RTLSignal driver conditional on RTLSignal cond
    /// being true, with an optional associated Instruction
    void addCondition(RTLSignal *cond, RTLSignal *driver,
            const Instruction *instr=NULL);

    // The default value of the signal
    // for instance: memory_controller_enable sets the default value to 0
    void setDefaultDriver(RTLSignal *driver) { defaultDriver = driver; }
    const RTLSignal *getDefaultDriver() const { return defaultDriver; }

    /// Get the number of driving RTLSignals
    unsigned getNumDrivers() const { return drivers.size(); }
    unsigned getNumConditions() const { return conditions.size(); }
    bool getSigned() const { return isSigned; }
    void setSigned(bool sign) { isSigned=sign; }

    /// Get the RTLWidth of this signal
    RTLWidth getWidth() const;
    void setWidth(RTLWidth w);
    //nativeBitwidth is the original width of the llvm instruction
    RTLWidth getNativeWidth() const;
    void setNativeWidth(RTLWidth w);

private:
    std::string name;
    std::string type;
    std::string value;
    RTLWidth bitwidth;
    //nativeBitwidth is the original width of the llvm instruction
    RTLWidth nativeBitwidth;
    RTLSignal *driver;
    RTLSignal *defaultDriver;
    bool isSigned;
    std::vector<RTLSignal *> conditions, drivers;
    std::vector<const Instruction*> instrs;

    void init();
};

/// RTLOp - An operation with one, two, or three operands.
/// Each operand is a RTLSignal
/// @brief RTLOp
class RTLOp : public RTLSignal {
public:
    enum Opcode {
        // Binary Operators
        Add,
        Sub,
        Mul,
        Rem,
        Div,
        And,
        Or,
        Xor,
        Shl,
        Shr,
        //Floating point Operators
        FAdd,
        FMul,
        FSub,
        FDiv,
        // Comparison Operators
        EQ,
        NE,
        LT,
        LE,
        GT,
        GE,
        // Floating pointo Comparison Operators
        OEQ,
        UNE,
        OLT,
        OLE,
        OGT,
        OGE,
        // Cast
        SExt,
        ZExt,
        Trunc,
        // Select
        Sel,
        // other
        Not,
        // Non-synthesizable
        Write,
        Display,
        Finish
    };


    virtual bool isOp() const {
        return true;
    }

    RTLOp(Instruction *instr);
    RTLOp(Opcode op) : op(op), castWidth(false) {}

    typedef std::map<int, RTLSignal*>::iterator op_iterator;

    Opcode getOpcode() const { return op; }

    const RTLSignal* getOperand(int i) const { return operands.at(i); }

    unsigned getNumOperands() const { return operands.size(); }

    void setOperand(int i, RTLSignal *s);
    RTLOp *setOperands(RTLSignal *s0);
    RTLOp *setOperands(RTLSignal *s0, RTLSignal *s1);
    RTLOp *setOperands(RTLSignal *s0, RTLSignal *s1, RTLSignal *s2);

    // set the cast width - for sext/zext/trunc
    void setCastWidth(RTLWidth w) {
        castWidth = true;
        setWidth(w);
    }
    RTLWidth getCastWidth() {
        assert(castWidth);
        return getWidth();
    }

    Instruction *I;

private:
    Opcode op;
    bool castWidth;
    std::map<int, RTLSignal *> operands;
};

class RTLConst : public RTLSignal {
public:
    RTLConst(std::string value, RTLWidth w=RTLWidth()) : RTLSignal("",
            value, w,w,false) { }

    virtual bool isConst() const {
        return true;
    }
};

/// RTLModule - Represents an RTL module.
/// Contains lists of:
///  RTLSignal signals
///  RTLSignal ports
///  RTLSignal parameters
///  Instantiated RTLModules
/// @brief RTL module
class RTLModule {
public:
    RTLModule(std::string name, std::string instName="") : name(name),
        instName(instName) {};

    ~RTLModule();

    /// Find the RTLSignal object given the name of a signal
    RTLSignal *find(std::string signal);

    /// Is there an RTLSignal with the given name
    bool exists(std::string signal) { return findExists(signal) != 0; }

    /// Like find() but returns 0 if not found
    RTLSignal *findExists(std::string signal);

    /// The module has one "unsynthesizable" signal
    /// which is not really a signal but just a set
    /// of unsynthesizable print statements in an always block
    const RTLSignal* getUnsynthesizableSignal() const { return
        &unsynthesizable; }
    RTLSignal* getUnsynthesizableSignal() { return &unsynthesizable; }

    std::string getName() const { return name; }
    void setName(std::string name) { name = name; }

    std::string getInstName() const { return instName; }
    void setInstName(std::string name) { instName = name; }

    typedef std::vector<RTLSignal*>::iterator signal_iterator;
    typedef std::vector<RTLSignal*>::const_iterator const_signal_iterator;
    typedef std::vector<RTLModule*>::iterator module_iterator;
    typedef std::vector<RTLModule*>::const_iterator const_module_iterator;

    signal_iterator       port_begin()       { return ports.begin(); }
    const_signal_iterator port_begin() const { return ports.begin(); }
    signal_iterator       port_end()         { return ports.end(); }
    const_signal_iterator port_end()   const { return ports.end(); }

    signal_iterator       param_begin()       { return params.begin(); }
    const_signal_iterator param_begin() const { return params.begin(); }
    signal_iterator       param_end()         { return params.end(); }
    const_signal_iterator param_end()   const { return params.end(); }

    signal_iterator       signals_begin()       { return signals.begin(); }
    const_signal_iterator signals_begin() const { return signals.begin(); }
    signal_iterator       signals_end()         { return signals.end(); }
    const_signal_iterator signals_end()   const { return signals.end(); }

    module_iterator       instances_begin()       { return instances.begin(); }
    const_module_iterator instances_begin() const { return instances.begin(); }
    module_iterator       instances_end()         { return instances.end(); }
    const_module_iterator instances_end()   const { return instances.end(); }

    /// add a Verilog module parameter
    RTLSignal *addParam(std::string name, std::string value);

    //There are two copies of all the addSomething functions
    //One of the functions allows for the specification of name, width, nativeWidth, and isSigned
    // where nativeWidth is the original width of the llvm Instruction and isSigned says whether
    // the signal is signed or not, which is important later to figure out whether this signals
    // should be sign extended or zero extended when connected to other signals of different widths.
    //The other functions allows for a simpler API with only name and width specified.  In this
    //case, nativeWidth is equal to width, and isSigned is false    
    /// add an input port
    RTLSignal *addIn(std::string name, RTLWidth width, 
                     RTLWidth nativeBitwidth, bool isSigned=false);
    RTLSignal *addIn(std::string name, RTLWidth width=RTLWidth());
    /// add an output port
    RTLSignal *addOut(std::string name, RTLWidth width, 
                     RTLWidth nativeBitwidth, bool isSigned);
    RTLSignal *addOut(std::string name, RTLWidth width=RTLWidth());

    /// add a registered output port
    RTLSignal *addOutReg(std::string name, RTLWidth width, 
                     RTLWidth nativeBitwidth, bool isSigned);
    RTLSignal *addOutReg(std::string name, RTLWidth width=RTLWidth());

    /// add a register signal
    RTLSignal *addReg(std::string name, RTLWidth width, 
                     RTLWidth nativeBitwidth, bool isSigned);
    RTLSignal *addReg(std::string name, RTLWidth width=RTLWidth());

    /// add a wire signal
    RTLSignal *addWire(std::string name, RTLWidth width, 
                     RTLWidth nativeBitwidth, bool isSigned);
    RTLSignal *addWire(std::string name, RTLWidth width=RTLWidth());

    /// add constant
    RTLConst *addConst(std::string value, RTLWidth width=RTLWidth());

    /// add an operation (add, sub, etc)
    RTLOp *addOp(RTLOp::Opcode op);
    RTLOp *addOp(Instruction *instr);

    /// add an instantiated module
    RTLModule *addModule(std::string name, std::string instName);

    /// remove a signal
    void remove(std::string name);

    /// remove signals with no fanout
    void removeSignalsWithoutFanout();

    /// preamble gets printed at the top of the module
    void setPreamble(std::string &v) { preamble = v; }
    const std::string &getPreamble() const { return preamble; }

    /// body gets printed at the end of the module
    const std::string &getBody() const { return body; }
    void setBody(std::string &b) { body = b; }

    /// evaluates `MEMORY_CONTROLLER_ADDR_SIZE-1 into an integer
    unsigned replaceParametersAndEval(std::string);

    /// checks that signals connected together have the right width
    void verifyConnections(const Allocation *alloc) const;
    void verifyConnection(const RTLSignal *signal, const Allocation *alloc) const;

    // checks that width is big enough for the signal's value
    void verifyBitwidth(const RTLSignal *signal, const Allocation *alloc) const;

    struct Pin;
    struct Net {
        // assume single drivers
        Pin* driver;
        std::set<Pin*> fanout;
        std::string name;
        Net(std::string name="") : driver(0), name(name) {}
    };
    // each pin is connected to a single net
    struct Cell;
    struct Pin {
        Pin(Cell *cell, std::string name="") : cell(cell), net(0), name(name) {}
        Cell *cell;
        Net *net;
        std::string name;
    };
    struct Cell {
        std::vector<Pin*> inPins, outPins;
        Cell(std::string name="", const RTLSignal *signal=NULL) : name(name), signal(signal) {}
        std::string name;
        const RTLSignal *signal;
    };

    void buildCircuitStructure();
    Cell *addCell(const RTLSignal *signal);
    Cell *newCell(std::string name);
    void recurseBackwards(const RTLSignal *signal);
    void connect(const RTLSignal *signal, const RTLSignal *driver, Pin *p=NULL);

    void printPipelineDot(formatted_raw_ostream &out);
private:
    std::map<const RTLSignal*, Cell*> mapSignalCell;
    std::vector<Cell*> inputs, outputs;
    std::set<Net*> nets;
    std::set<Cell*> cells;
    std::string name, instName;
    std::vector<RTLSignal*> params;
    std::vector<RTLSignal*> ports;
    std::vector<RTLSignal*> signals;
    std::vector<RTLModule*> instances;
    std::set<RTLOp*> operations;
    std::set<RTLConst*> constants;
    std::map<RTLSignal*, RTLSignal*> fanin;
    std::string body, preamble;
    RTLSignal unsynthesizable;
    void connectDot(formatted_raw_ostream &out, Cell *cdriver, Cell *csignal);
    void printLabel(formatted_raw_ostream &out, Cell *csignal);
    void printNode(formatted_raw_ostream &out, Cell *signal);
};





}

#endif
