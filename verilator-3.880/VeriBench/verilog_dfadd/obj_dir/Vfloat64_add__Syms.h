// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vfloat64_add__Syms_H_
#define _Vfloat64_add__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vfloat64_add.h"

// SYMS CLASS
class Vfloat64_add__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vfloat64_add*                  TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vfloat64_add__Syms(Vfloat64_add* topp, const char* namep);
    ~Vfloat64_add__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
