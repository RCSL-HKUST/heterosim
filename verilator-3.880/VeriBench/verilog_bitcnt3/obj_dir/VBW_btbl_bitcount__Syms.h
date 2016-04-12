// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VBW_btbl_bitcount__Syms_H_
#define _VBW_btbl_bitcount__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VBW_btbl_bitcount.h"

// SYMS CLASS
class VBW_btbl_bitcount__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VBW_btbl_bitcount*             TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VBW_btbl_bitcount__Syms(VBW_btbl_bitcount* topp, const char* namep);
    ~VBW_btbl_bitcount__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
