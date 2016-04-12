// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VBF_cfb64_encrypt__Syms_H_
#define _VBF_cfb64_encrypt__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VBF_cfb64_encrypt.h"

// SYMS CLASS
class VBF_cfb64_encrypt__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VBF_cfb64_encrypt*             TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    VBF_cfb64_encrypt__Syms(VBF_cfb64_encrypt* topp, const char* namep);
    ~VBF_cfb64_encrypt__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
