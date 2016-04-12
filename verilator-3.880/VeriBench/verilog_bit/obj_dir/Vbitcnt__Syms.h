// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vbitcnt__Syms_H_
#define _Vbitcnt__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vbitcnt.h"

// SYMS CLASS
class Vbitcnt__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vbitcnt*                       TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vbitcnt__Syms(Vbitcnt* topp, const char* namep);
    ~Vbitcnt__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
