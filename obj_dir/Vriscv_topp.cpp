// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_topp.h"
#include "Vriscv_topp__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vriscv_topp::Vriscv_topp(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vriscv_topp__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

Vriscv_topp::Vriscv_topp(const char* _vcname__)
    : Vriscv_topp(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vriscv_topp::~Vriscv_topp() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vriscv_topp___024root___eval_initial(Vriscv_topp___024root* vlSelf);
void Vriscv_topp___024root___eval_settle(Vriscv_topp___024root* vlSelf);
void Vriscv_topp___024root___eval(Vriscv_topp___024root* vlSelf);
QData Vriscv_topp___024root___change_request(Vriscv_topp___024root* vlSelf);
#ifdef VL_DEBUG
void Vriscv_topp___024root___eval_debug_assertions(Vriscv_topp___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_topp___024root___final(Vriscv_topp___024root* vlSelf);

static void _eval_initial_loop(Vriscv_topp__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vriscv_topp___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vriscv_topp___024root___eval_settle(&(vlSymsp->TOP));
        Vriscv_topp___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscv_topp___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("riscv_topp.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscv_topp___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv_topp::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_topp::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_topp___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vriscv_topp___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscv_topp___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("riscv_topp.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscv_topp___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Invoke final blocks

void Vriscv_topp::final() {
    Vriscv_topp___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vriscv_topp::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vriscv_topp::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vriscv_topp___024root__trace_init_top(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep);

static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_topp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_topp___024root*>(voidSelf);
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv_topp___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vriscv_topp___024root__trace_register(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv_topp::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vriscv_topp___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
