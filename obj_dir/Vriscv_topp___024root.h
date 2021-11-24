// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_topp.h for the primary calling header

#ifndef VERILATED_VRISCV_TOPP___024ROOT_H_
#define VERILATED_VRISCV_TOPP___024ROOT_H_  // guard

#include "verilated.h"

class Vriscv_topp__Syms;
VL_MODULE(Vriscv_topp___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ riscv_topp__DOT__jalr_en1;
        CData/*0:0*/ riscv_topp__DOT__UJ_en1;
        CData/*0:0*/ riscv_topp__DOT__forward1;
        CData/*0:0*/ riscv_topp__DOT__forward2;
        CData/*0:0*/ riscv_topp__DOT__E_M_b_en;
        CData/*0:0*/ riscv_topp__DOT__branch1;
        CData/*0:0*/ riscv_topp__DOT__ld_en1;
        CData/*0:0*/ riscv_topp__DOT__rd_en1;
        CData/*0:0*/ riscv_topp__DOT__str_en1;
        CData/*0:0*/ riscv_topp__DOT__stall;
        CData/*0:0*/ riscv_topp__DOT__D_E_imm_sel;
        CData/*0:0*/ riscv_topp__DOT__rd_en;
        CData/*0:0*/ riscv_topp__DOT__imm_sel;
        CData/*0:0*/ riscv_topp__DOT__U_en;
        CData/*0:0*/ riscv_topp__DOT__b_en;
        CData/*0:0*/ riscv_topp__DOT__D_E_branch;
        CData/*0:0*/ riscv_topp__DOT__D_E_ld_en;
        CData/*0:0*/ riscv_topp__DOT__E_M_ld_en;
        CData/*0:0*/ riscv_topp__DOT__M_D_ld_en;
        CData/*0:0*/ riscv_topp__DOT__D_E_rd_en;
        CData/*0:0*/ riscv_topp__DOT__E_M_rd_en;
        CData/*0:0*/ riscv_topp__DOT__M_D_rd_en;
        CData/*0:0*/ riscv_topp__DOT__D_E_str_en;
        CData/*0:0*/ riscv_topp__DOT__E_M_str_en;
        CData/*0:0*/ riscv_topp__DOT__D_E_UJ_en;
        CData/*0:0*/ riscv_topp__DOT__E_M_UJ_en;
        CData/*0:0*/ riscv_topp__DOT__M_D_UJ_en;
        CData/*0:0*/ riscv_topp__DOT__D_E_jalr_en;
        CData/*0:0*/ riscv_topp__DOT__E_M_jalr_en;
        CData/*0:0*/ riscv_topp__DOT__M_D_jalr_en;
        CData/*0:0*/ riscv_topp__DOT__D_E_U_en;
        CData/*0:0*/ riscv_topp__DOT__E_M_U_en;
        CData/*0:0*/ riscv_topp__DOT__M_D_U_en;
        CData/*0:0*/ riscv_topp__DOT__D_E_auipc_en;
        CData/*0:0*/ riscv_topp__DOT__E_M_auipc_en;
        CData/*0:0*/ riscv_topp__DOT__M_D_auipc_en;
        CData/*1:0*/ riscv_topp__DOT__forwardA;
        CData/*1:0*/ riscv_topp__DOT__forwardB;
        CData/*2:0*/ riscv_topp__DOT__con3;
        CData/*3:0*/ riscv_topp__DOT__func3;
        CData/*3:0*/ riscv_topp__DOT__alu_sel;
        CData/*3:0*/ riscv_topp__DOT__D_E_alu_sel;
        CData/*3:0*/ riscv_topp__DOT__D_E_func3;
        CData/*3:0*/ riscv_topp__DOT__E_M_func3;
        CData/*3:0*/ riscv_topp__DOT__WE;
        CData/*4:0*/ riscv_topp__DOT__rd_adr;
        CData/*4:0*/ riscv_topp__DOT__rs1_adr;
        CData/*4:0*/ riscv_topp__DOT__rs2_adr;
        CData/*4:0*/ riscv_topp__DOT__D_E_rd_adr;
        CData/*4:0*/ riscv_topp__DOT__D_E_rs1_adr;
        CData/*4:0*/ riscv_topp__DOT__D_E_rs2_adr;
        CData/*4:0*/ riscv_topp__DOT__E_M_rd_adr;
        CData/*4:0*/ riscv_topp__DOT__M_D_rd_adr;
        CData/*6:0*/ riscv_topp__DOT__opcode;
        CData/*0:0*/ riscv_topp__DOT__control_unit1__DOT__R_type;
        CData/*0:0*/ riscv_topp__DOT__control_unit1__DOT__I_type;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vchglast__TOP__riscv_topp__DOT__b_en;
        IData/*31:0*/ riscv_topp__DOT__F_D_inst1;
        IData/*31:0*/ riscv_topp__DOT__rs1_data1;
        IData/*31:0*/ riscv_topp__DOT__rs2_data1;
        IData/*31:0*/ riscv_topp__DOT__D_E_sb_imm;
    };
    struct {
        IData/*31:0*/ riscv_topp__DOT__D_E_u;
        IData/*31:0*/ riscv_topp__DOT__D_E_u_imm;
        IData/*31:0*/ riscv_topp__DOT__D_E_pc;
        IData/*31:0*/ riscv_topp__DOT__E_M_u_imm;
        IData/*31:0*/ riscv_topp__DOT__E_M_pc;
        IData/*31:0*/ riscv_topp__DOT__M_D_u_imm;
        IData/*31:0*/ riscv_topp__DOT__M_D_pc;
        IData/*31:0*/ riscv_topp__DOT__F_D_inst;
        IData/*31:0*/ riscv_topp__DOT__D_E_alu1_in;
        IData/*31:0*/ riscv_topp__DOT__D_E_alu2_in;
        IData/*31:0*/ riscv_topp__DOT__F_D_pc;
        IData/*31:0*/ riscv_topp__DOT__E_M_alu_o;
        IData/*31:0*/ riscv_topp__DOT__M_D_l_d;
        IData/*31:0*/ riscv_topp__DOT__M_D_alu_o;
        IData/*31:0*/ riscv_topp__DOT__rd_data;
        IData/*31:0*/ riscv_topp__DOT__D_E_rs2_data;
        IData/*31:0*/ riscv_topp__DOT__E_M_rs2_data;
        IData/*31:0*/ riscv_topp__DOT__i_imm;
        IData/*31:0*/ riscv_topp__DOT__s_imm;
        IData/*31:0*/ riscv_topp__DOT__sb_imm;
        IData/*31:0*/ riscv_topp__DOT__u_imm;
        IData/*31:0*/ riscv_topp__DOT__u;
        IData/*31:0*/ riscv_topp__DOT__alu_o;
        IData/*31:0*/ riscv_topp__DOT__mem_o;
        IData/*31:0*/ riscv_topp__DOT__pc;
        IData/*31:0*/ riscv_topp__DOT__l_d;
        IData/*31:0*/ riscv_topp__DOT__rs1_sltd_data;
        IData/*31:0*/ riscv_topp__DOT__rs2_sltd_data;
        VlWide<7>/*223:0*/ riscv_topp__DOT__D_E;
        VlWide<5>/*144:0*/ riscv_topp__DOT__E_M;
        VlWide<5>/*138:0*/ riscv_topp__DOT__M_D;
        IData/*31:0*/ riscv_topp__DOT__reg_file1__DOT__i;
        IData/*31:0*/ __Vchglast__TOP__riscv_topp__DOT__F_D_inst1;
        IData/*31:0*/ __Vchglast__TOP__riscv_topp__DOT__rd_data;
        IData/*31:0*/ __Vchglast__TOP__riscv_topp__DOT__alu_o;
        QData/*63:0*/ riscv_topp__DOT__F_D;
        QData/*63:0*/ riscv_topp__DOT__F_D1;
        VlUnpacked<IData/*31:0*/, 16777216> riscv_topp__DOT__fetch1__DOT__instmem1__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> riscv_topp__DOT__reg_file1__DOT__regis;
        VlUnpacked<IData/*31:0*/, 4096> riscv_topp__DOT__datamemory1__DOT__mem;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vriscv_topp__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vriscv_topp___024root(const char* name);
    ~Vriscv_topp___024root();
    VL_UNCOPYABLE(Vriscv_topp___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vriscv_topp__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
