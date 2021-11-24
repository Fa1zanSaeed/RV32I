// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vriscv_topp__Syms.h"
#include "Vriscv_topp.h"
#include "Vriscv_topp___024root.h"

// FUNCTIONS
Vriscv_topp__Syms::~Vriscv_topp__Syms()
{
}

Vriscv_topp__Syms::Vriscv_topp__Syms(VerilatedContext* contextp, const char* namep,Vriscv_topp* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
