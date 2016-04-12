// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vbinary_search__Syms_H_
#define _Vbinary_search__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vbinary_search.h"

// SYMS CLASS
class Vbinary_search__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vbinary_search*                TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vbinary_search__Syms(Vbinary_search* topp, const char* namep);
    ~Vbinary_search__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
