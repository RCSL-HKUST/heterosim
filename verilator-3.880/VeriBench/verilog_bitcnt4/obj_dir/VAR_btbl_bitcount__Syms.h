// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VAR_btbl_bitcount__Syms_H_
#define _VAR_btbl_bitcount__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VAR_btbl_bitcount.h"

// SYMS CLASS
class VAR_btbl_bitcount__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VAR_btbl_bitcount*             TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VAR_btbl_bitcount__Syms(VAR_btbl_bitcount* topp, const char* namep);
    ~VAR_btbl_bitcount__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
