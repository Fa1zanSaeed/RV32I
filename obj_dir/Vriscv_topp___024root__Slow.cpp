// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_topp.h for the primary calling header

#include "verilated.h"

#include "Vriscv_topp__Syms.h"
#include "Vriscv_topp___024root.h"

void Vriscv_topp___024root___ctor_var_reset(Vriscv_topp___024root* vlSelf);

Vriscv_topp___024root::Vriscv_topp___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscv_topp___024root___ctor_var_reset(this);
}

void Vriscv_topp___024root::__Vconfigure(Vriscv_topp__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vriscv_topp___024root::~Vriscv_topp___024root() {
}
