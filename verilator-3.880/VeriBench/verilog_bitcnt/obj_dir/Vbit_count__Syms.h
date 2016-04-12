// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vbit_count__Syms_H_
#define _Vbit_count__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vbit_count.h"

// SYMS CLASS
class Vbit_count__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vbit_count*                    TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vbit_count__Syms(Vbit_count* topp, const char* namep);
    ~Vbit_count__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
