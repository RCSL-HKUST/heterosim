// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAR_btbl_bitcount__Syms.h"
#include "VAR_btbl_bitcount.h"

// FUNCTIONS
VAR_btbl_bitcount__Syms::VAR_btbl_bitcount__Syms(VAR_btbl_bitcount* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scope names
}
