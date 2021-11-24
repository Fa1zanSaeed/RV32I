// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_topp.h for the primary calling header

#include "verilated.h"

#include "Vriscv_topp___024root.h"

VL_INLINE_OPT void Vriscv_topp___024root___combo__TOP__2(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->riscv_topp__DOT__rs2_adr = (0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                 >> 0x14U));
    vlSelf->riscv_topp__DOT__rs1_adr = (0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                 >> 0xfU));
    vlSelf->riscv_topp__DOT__opcode = (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1);
    vlSelf->riscv_topp__DOT__rd_adr = (0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                >> 7U));
    vlSelf->riscv_topp__DOT__imm_sel = (((((0x1bU == 
                                            (0x7fU 
                                             & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                          | (3U == 
                                             (0x7fU 
                                              & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                         | (0x67U == 
                                            (0x7fU 
                                             & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)));
    vlSelf->riscv_topp__DOT__s_imm = (((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                         >> 7U))));
    vlSelf->riscv_topp__DOT__i_imm = (((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                   >> 0x14U));
    vlSelf->riscv_topp__DOT__sb_imm = (((- (IData)(
                                                   (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->riscv_topp__DOT__F_D_inst1 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                    >> 7U))))));
    vlSelf->riscv_topp__DOT__u_imm = (0xfffff000U & vlSelf->riscv_topp__DOT__F_D_inst1);
    vlSelf->riscv_topp__DOT__func3 = ((8U & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                             >> 0x1bU)) 
                                      | (7U & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                               >> 0xcU)));
    vlSelf->riscv_topp__DOT__U_en = ((0x37U == (0x7fU 
                                                & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->riscv_topp__DOT__F_D_inst1)));
    vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type 
        = ((0x1bU == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
           | (0x13U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)));
    vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type 
        = ((0x3bU == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
           | (0x33U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)));
    vlSelf->riscv_topp__DOT__alu_sel = (((3U == (0x7fU 
                                                 & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                         ? 9U : (((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                                  | (0x3bU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                                  ? (IData)(vlSelf->riscv_topp__DOT__func3)
                                                  : 
                                                 (((0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                                   | (0x1bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                                   ? 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->riscv_topp__DOT__func3)))
                                                    ? (IData)(vlSelf->riscv_topp__DOT__func3)
                                                    : 
                                                   (7U 
                                                    & (IData)(vlSelf->riscv_topp__DOT__func3)))
                                                   : 
                                                  (7U 
                                                   & (IData)(vlSelf->riscv_topp__DOT__func3)))));
    vlSelf->riscv_topp__DOT__rd_en = ((((((IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type) 
                                          | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type)) 
                                         | (3U == (0x7fU 
                                                   & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                        | (0x6fU == 
                                           (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                       | (IData)(vlSelf->riscv_topp__DOT__U_en)) 
                                      | (0x67U == (0x7fU 
                                                   & vlSelf->riscv_topp__DOT__F_D_inst1)));
}

VL_INLINE_OPT void Vriscv_topp___024root___sequent__TOP__4(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___sequent__TOP__4\n"); );
    // Init
    IData/*31:0*/ __Vdly__riscv_topp__DOT__pc;
    CData/*0:0*/ __Vdlyvset__riscv_topp__DOT__reg_file1__DOT__regis__v0;
    CData/*4:0*/ __Vdlyvdim0__riscv_topp__DOT__reg_file1__DOT__regis__v32;
    IData/*31:0*/ __Vdlyvval__riscv_topp__DOT__reg_file1__DOT__regis__v32;
    CData/*0:0*/ __Vdlyvset__riscv_topp__DOT__reg_file1__DOT__regis__v32;
    SData/*11:0*/ __Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v0;
    SData/*11:0*/ __Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v1;
    CData/*4:0*/ __Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v1;
    SData/*11:0*/ __Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v2;
    CData/*4:0*/ __Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v2;
    SData/*11:0*/ __Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v3;
    CData/*4:0*/ __Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v3;
    // Body
    __Vdly__riscv_topp__DOT__pc = vlSelf->riscv_topp__DOT__pc;
    __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v0 = 0U;
    __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v1 = 0U;
    __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v2 = 0U;
    __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v3 = 0U;
    __Vdlyvset__riscv_topp__DOT__reg_file1__DOT__regis__v0 = 0U;
    __Vdlyvset__riscv_topp__DOT__reg_file1__DOT__regis__v32 = 0U;
    if (vlSelf->reset) {
        vlSelf->riscv_topp__DOT__reg_file1__DOT__i = 0x20U;
    }
    vlSelf->riscv_topp__DOT__D_E_alu_sel = (0xfU & 
                                            vlSelf->riscv_topp__DOT__D_E[3U]);
    vlSelf->riscv_topp__DOT__E_M_UJ_en = (1U & (vlSelf->riscv_topp__DOT__E_M[2U] 
                                                >> 0xcU));
    vlSelf->riscv_topp__DOT__E_M_auipc_en = (1U & (
                                                   vlSelf->riscv_topp__DOT__E_M[4U] 
                                                   >> 0xfU));
    vlSelf->riscv_topp__DOT__E_M_u_imm = ((vlSelf->riscv_topp__DOT__E_M[4U] 
                                           << 0x11U) 
                                          | (vlSelf->riscv_topp__DOT__E_M[3U] 
                                             >> 0xfU));
    vlSelf->riscv_topp__DOT__E_M_pc = ((vlSelf->riscv_topp__DOT__E_M[3U] 
                                        << 0x11U) | 
                                       (vlSelf->riscv_topp__DOT__E_M[2U] 
                                        >> 0xfU));
    vlSelf->riscv_topp__DOT__E_M_U_en = (1U & (vlSelf->riscv_topp__DOT__E_M[2U] 
                                               >> 0xeU));
    vlSelf->riscv_topp__DOT__E_M_func3 = (0xfU & vlSelf->riscv_topp__DOT__E_M[2U]);
    vlSelf->riscv_topp__DOT__E_M_ld_en = (1U & (vlSelf->riscv_topp__DOT__E_M[2U] 
                                                >> 4U));
    vlSelf->riscv_topp__DOT__M_D_l_d = vlSelf->riscv_topp__DOT__M_D[0U];
    vlSelf->riscv_topp__DOT__M_D_ld_en = (1U & vlSelf->riscv_topp__DOT__M_D[2U]);
    vlSelf->riscv_topp__DOT__M_D_auipc_en = (1U & (
                                                   vlSelf->riscv_topp__DOT__M_D[4U] 
                                                   >> 0xaU));
    vlSelf->riscv_topp__DOT__M_D_u_imm = ((vlSelf->riscv_topp__DOT__M_D[4U] 
                                           << 0x16U) 
                                          | (vlSelf->riscv_topp__DOT__M_D[3U] 
                                             >> 0xaU));
    vlSelf->riscv_topp__DOT__M_D_pc = ((vlSelf->riscv_topp__DOT__M_D[3U] 
                                        << 0x16U) | 
                                       (vlSelf->riscv_topp__DOT__M_D[2U] 
                                        >> 0xaU));
    vlSelf->riscv_topp__DOT__M_D_U_en = (1U & (vlSelf->riscv_topp__DOT__M_D[2U] 
                                               >> 9U));
    vlSelf->riscv_topp__DOT__M_D_jalr_en = (1U & (vlSelf->riscv_topp__DOT__M_D[2U] 
                                                  >> 8U));
    vlSelf->riscv_topp__DOT__M_D_UJ_en = (1U & (vlSelf->riscv_topp__DOT__M_D[2U] 
                                                >> 7U));
    vlSelf->riscv_topp__DOT__M_D_alu_o = vlSelf->riscv_topp__DOT__M_D[1U];
    vlSelf->riscv_topp__DOT__E_M_b_en = (1U & (vlSelf->riscv_topp__DOT__E_M[4U] 
                                               >> 0x10U));
    vlSelf->riscv_topp__DOT__D_E_alu1_in = vlSelf->riscv_topp__DOT__D_E[0U];
    vlSelf->riscv_topp__DOT__D_E_u = vlSelf->riscv_topp__DOT__D_E[2U];
    vlSelf->riscv_topp__DOT__D_E_func3 = (0xfU & (vlSelf->riscv_topp__DOT__D_E[3U] 
                                                  >> 5U));
    vlSelf->riscv_topp__DOT__D_E_rd_en = (1U & (vlSelf->riscv_topp__DOT__D_E[3U] 
                                                >> 0xaU));
    vlSelf->riscv_topp__DOT__D_E_UJ_en = (1U & (vlSelf->riscv_topp__DOT__D_E[3U] 
                                                >> 0x11U));
    vlSelf->riscv_topp__DOT__D_E_str_en = (1U & (vlSelf->riscv_topp__DOT__D_E[3U] 
                                                 >> 0xbU));
    vlSelf->riscv_topp__DOT__D_E_imm_sel = (1U & (vlSelf->riscv_topp__DOT__D_E[5U] 
                                                  >> 0x15U));
    vlSelf->riscv_topp__DOT__D_E_rs2_data = vlSelf->riscv_topp__DOT__D_E[1U];
    vlSelf->riscv_topp__DOT__D_E_pc = ((vlSelf->riscv_topp__DOT__D_E[4U] 
                                        << 0xcU) | 
                                       (vlSelf->riscv_topp__DOT__D_E[3U] 
                                        >> 0x14U));
    vlSelf->riscv_topp__DOT__D_E_U_en = (1U & (vlSelf->riscv_topp__DOT__D_E[3U] 
                                               >> 0x13U));
    vlSelf->riscv_topp__DOT__D_E_auipc_en = (1U & (
                                                   vlSelf->riscv_topp__DOT__D_E[5U] 
                                                   >> 0x14U));
    vlSelf->riscv_topp__DOT__D_E_u_imm = ((vlSelf->riscv_topp__DOT__D_E[5U] 
                                           << 0xcU) 
                                          | (vlSelf->riscv_topp__DOT__D_E[4U] 
                                             >> 0x14U));
    vlSelf->riscv_topp__DOT__D_E_branch = (1U & (vlSelf->riscv_topp__DOT__D_E[3U] 
                                                 >> 4U));
    vlSelf->riscv_topp__DOT__E_M_jalr_en = (1U & (vlSelf->riscv_topp__DOT__E_M[2U] 
                                                  >> 0xdU));
    if (vlSelf->riscv_topp__DOT__stall) {
        vlSelf->riscv_topp__DOT__F_D_pc = (IData)((vlSelf->riscv_topp__DOT__F_D1 
                                                   >> 0x20U));
        vlSelf->riscv_topp__DOT__F_D_inst = (IData)(vlSelf->riscv_topp__DOT__F_D1);
    } else {
        vlSelf->riscv_topp__DOT__F_D_pc = (IData)((vlSelf->riscv_topp__DOT__F_D 
                                                   >> 0x20U));
        vlSelf->riscv_topp__DOT__F_D_inst = (IData)(vlSelf->riscv_topp__DOT__F_D);
    }
    vlSelf->riscv_topp__DOT__D_E_rs1_adr = (0x1fU & 
                                            (vlSelf->riscv_topp__DOT__D_E[5U] 
                                             >> 0x16U));
    vlSelf->riscv_topp__DOT__D_E_rs2_adr = (vlSelf->riscv_topp__DOT__D_E[5U] 
                                            >> 0x1bU);
    vlSelf->riscv_topp__DOT__D_E_ld_en = (1U & (vlSelf->riscv_topp__DOT__D_E[3U] 
                                                >> 9U));
    vlSelf->riscv_topp__DOT__D_E_rd_adr = (0x1fU & 
                                           (vlSelf->riscv_topp__DOT__D_E[3U] 
                                            >> 0xcU));
    if (vlSelf->reset) {
        __Vdly__riscv_topp__DOT__pc = 0U;
    } else if (vlSelf->clk) {
        __Vdly__riscv_topp__DOT__pc = ((IData)(vlSelf->riscv_topp__DOT__D_E_jalr_en)
                                        ? vlSelf->riscv_topp__DOT__alu_o
                                        : ((IData)(vlSelf->riscv_topp__DOT__UJ_en1)
                                            ? ((vlSelf->riscv_topp__DOT__pc 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->riscv_topp__DOT__F_D_inst1) 
                                                         | ((0x800U 
                                                             & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                                  >> 0x14U))))))) 
                                               - (IData)(4U))
                                            : ((IData)(vlSelf->riscv_topp__DOT__b_en)
                                                ? (
                                                   (vlSelf->riscv_topp__DOT__pc 
                                                    + vlSelf->riscv_topp__DOT__D_E_sb_imm) 
                                                   - (IData)(8U))
                                                : ((IData)(vlSelf->riscv_topp__DOT__stall)
                                                    ? vlSelf->riscv_topp__DOT__pc
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->riscv_topp__DOT__pc)))));
    }
    vlSelf->riscv_topp__DOT__E_M_rd_adr = (0x1fU & 
                                           (vlSelf->riscv_topp__DOT__E_M[2U] 
                                            >> 7U));
    vlSelf->riscv_topp__DOT__E_M_rd_en = (1U & (vlSelf->riscv_topp__DOT__E_M[2U] 
                                                >> 5U));
    if (vlSelf->riscv_topp__DOT__E_M_str_en) {
        if ((1U & (IData)(vlSelf->riscv_topp__DOT__WE))) {
            __Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v0 
                = (0xffU & vlSelf->riscv_topp__DOT__E_M_rs2_data);
            __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v0 = 1U;
            __Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v0 = 0U;
            __Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v0 
                = (0xfffU & (vlSelf->riscv_topp__DOT__E_M_alu_o 
                             >> 2U));
        }
        if ((2U & (IData)(vlSelf->riscv_topp__DOT__WE))) {
            __Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v1 
                = (0xffU & (vlSelf->riscv_topp__DOT__E_M_rs2_data 
                            >> 8U));
            __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v1 = 1U;
            __Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v1 = 8U;
            __Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v1 
                = (0xfffU & (vlSelf->riscv_topp__DOT__E_M_alu_o 
                             >> 2U));
        }
        if ((4U & (IData)(vlSelf->riscv_topp__DOT__WE))) {
            __Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v2 
                = (0xffU & (vlSelf->riscv_topp__DOT__E_M_rs2_data 
                            >> 0x10U));
            __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v2 = 1U;
            __Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v2 = 0x10U;
            __Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v2 
                = (0xfffU & (vlSelf->riscv_topp__DOT__E_M_alu_o 
                             >> 2U));
        }
        if ((8U & (IData)(vlSelf->riscv_topp__DOT__WE))) {
            __Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v3 
                = (vlSelf->riscv_topp__DOT__E_M_rs2_data 
                   >> 0x18U);
            __Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v3 = 1U;
            __Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v3 = 0x18U;
            __Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v3 
                = (0xfffU & (vlSelf->riscv_topp__DOT__E_M_alu_o 
                             >> 2U));
        }
    }
    if (vlSelf->reset) {
        __Vdlyvset__riscv_topp__DOT__reg_file1__DOT__regis__v0 = 1U;
    } else if (vlSelf->riscv_topp__DOT__M_D_rd_en) {
        __Vdlyvval__riscv_topp__DOT__reg_file1__DOT__regis__v32 
            = vlSelf->riscv_topp__DOT__rd_data;
        __Vdlyvset__riscv_topp__DOT__reg_file1__DOT__regis__v32 = 1U;
        __Vdlyvdim0__riscv_topp__DOT__reg_file1__DOT__regis__v32 
            = vlSelf->riscv_topp__DOT__M_D_rd_adr;
    }
    vlSelf->riscv_topp__DOT__pc = __Vdly__riscv_topp__DOT__pc;
    if (__Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v0) {
        vlSelf->riscv_topp__DOT__datamemory1__DOT__mem[__Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v0))) 
                & vlSelf->riscv_topp__DOT__datamemory1__DOT__mem
                [__Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v0))));
    }
    if (__Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v1) {
        vlSelf->riscv_topp__DOT__datamemory1__DOT__mem[__Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v1))) 
                & vlSelf->riscv_topp__DOT__datamemory1__DOT__mem
                [__Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v1))));
    }
    if (__Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v2) {
        vlSelf->riscv_topp__DOT__datamemory1__DOT__mem[__Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v2))) 
                & vlSelf->riscv_topp__DOT__datamemory1__DOT__mem
                [__Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v2))));
    }
    if (__Vdlyvset__riscv_topp__DOT__datamemory1__DOT__mem__v3) {
        vlSelf->riscv_topp__DOT__datamemory1__DOT__mem[__Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v3))) 
                & vlSelf->riscv_topp__DOT__datamemory1__DOT__mem
                [__Vdlyvdim0__riscv_topp__DOT__datamemory1__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__riscv_topp__DOT__datamemory1__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__riscv_topp__DOT__datamemory1__DOT__mem__v3))));
    }
    if (__Vdlyvset__riscv_topp__DOT__reg_file1__DOT__regis__v0) {
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[1U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[2U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[3U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[4U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[5U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[6U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[7U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[8U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[9U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0xaU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0xbU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0xcU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0xdU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0xeU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0xfU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x10U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x11U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x12U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x13U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x14U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x15U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x16U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x17U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x18U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x19U] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x1aU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x1bU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x1cU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x1dU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x1eU] = 0U;
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0x1fU] = 0U;
    }
    if (__Vdlyvset__riscv_topp__DOT__reg_file1__DOT__regis__v32) {
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[__Vdlyvdim0__riscv_topp__DOT__reg_file1__DOT__regis__v32] 
            = __Vdlyvval__riscv_topp__DOT__reg_file1__DOT__regis__v32;
    }
    vlSelf->riscv_topp__DOT__F_D1 = vlSelf->riscv_topp__DOT__F_D;
    vlSelf->riscv_topp__DOT__D_E_sb_imm = vlSelf->riscv_topp__DOT__D_E[6U];
    vlSelf->riscv_topp__DOT__D_E_jalr_en = (1U & (vlSelf->riscv_topp__DOT__D_E[3U] 
                                                  >> 0x12U));
    vlSelf->riscv_topp__DOT__E_M_rs2_data = vlSelf->riscv_topp__DOT__E_M[1U];
    vlSelf->riscv_topp__DOT__E_M_str_en = (1U & (vlSelf->riscv_topp__DOT__E_M[2U] 
                                                 >> 6U));
    vlSelf->riscv_topp__DOT__E_M_alu_o = vlSelf->riscv_topp__DOT__E_M[0U];
    vlSelf->riscv_topp__DOT__M_D_rd_en = (1U & (vlSelf->riscv_topp__DOT__M_D[2U] 
                                                >> 1U));
    vlSelf->riscv_topp__DOT__M_D_rd_adr = (0x1fU & 
                                           (vlSelf->riscv_topp__DOT__M_D[2U] 
                                            >> 2U));
    vlSelf->riscv_topp__DOT__F_D = (((QData)((IData)(vlSelf->riscv_topp__DOT__pc)) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_topp__DOT__fetch1__DOT__instmem1__DOT__mem
                                                                 [
                                                                 (0xffffffU 
                                                                  & (vlSelf->riscv_topp__DOT__pc 
                                                                     >> 2U))])));
    vlSelf->riscv_topp__DOT__mem_o = ((IData)(vlSelf->riscv_topp__DOT__E_M_ld_en)
                                       ? vlSelf->riscv_topp__DOT__datamemory1__DOT__mem
                                      [(0xfffU & (vlSelf->riscv_topp__DOT__E_M_alu_o 
                                                  >> 2U))]
                                       : 0U);
    vlSelf->riscv_topp__DOT__forwardB = ((((IData)(vlSelf->riscv_topp__DOT__E_M_rd_en) 
                                           & (0U != (IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr))) 
                                          & ((IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr) 
                                             == (IData)(vlSelf->riscv_topp__DOT__D_E_rs2_adr)))
                                          ? 2U : ((
                                                   (((IData)(vlSelf->riscv_topp__DOT__M_D_rd_en) 
                                                     & (0U 
                                                        != (IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr))) 
                                                    & (~ 
                                                       (((IData)(vlSelf->riscv_topp__DOT__E_M_rd_en) 
                                                         & (0U 
                                                            != (IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr))) 
                                                        & ((IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr) 
                                                           == (IData)(vlSelf->riscv_topp__DOT__D_E_rs2_adr))))) 
                                                   & ((IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr) 
                                                      == (IData)(vlSelf->riscv_topp__DOT__D_E_rs2_adr)))
                                                   ? 1U
                                                   : 0U));
    vlSelf->riscv_topp__DOT__forwardA = ((((IData)(vlSelf->riscv_topp__DOT__E_M_rd_en) 
                                           & (0U != (IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr))) 
                                          & ((IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr) 
                                             == (IData)(vlSelf->riscv_topp__DOT__D_E_rs1_adr)))
                                          ? 2U : ((
                                                   (((IData)(vlSelf->riscv_topp__DOT__M_D_rd_en) 
                                                     & (0U 
                                                        != (IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr))) 
                                                    & (~ 
                                                       (((IData)(vlSelf->riscv_topp__DOT__E_M_rd_en) 
                                                         & (0U 
                                                            != (IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr))) 
                                                        & ((IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr) 
                                                           == (IData)(vlSelf->riscv_topp__DOT__D_E_rs1_adr))))) 
                                                   & ((IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr) 
                                                      == (IData)(vlSelf->riscv_topp__DOT__D_E_rs1_adr)))
                                                   ? 1U
                                                   : 0U));
    vlSelf->riscv_topp__DOT__con3 = (7U & (IData)(vlSelf->riscv_topp__DOT__E_M_func3));
    vlSelf->riscv_topp__DOT__WE = ((IData)(vlSelf->riscv_topp__DOT__E_M_str_en)
                                    ? ((0U == (IData)(vlSelf->riscv_topp__DOT__con3))
                                        ? 1U : ((1U 
                                                 == (IData)(vlSelf->riscv_topp__DOT__con3))
                                                 ? 3U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->riscv_topp__DOT__con3))
                                                  ? 0xfU
                                                  : 0U)))
                                    : 0U);
    vlSelf->riscv_topp__DOT__l_d = ((IData)(vlSelf->riscv_topp__DOT__E_M_ld_en)
                                     ? ((0U == (IData)(vlSelf->riscv_topp__DOT__con3))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->riscv_topp__DOT__mem_o 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (0xffU 
                                               & vlSelf->riscv_topp__DOT__mem_o))
                                         : ((1U == (IData)(vlSelf->riscv_topp__DOT__con3))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->riscv_topp__DOT__mem_o 
                                                                >> 0xfU)))) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSelf->riscv_topp__DOT__mem_o))
                                             : ((4U 
                                                 == (IData)(vlSelf->riscv_topp__DOT__con3))
                                                 ? 
                                                (0xffU 
                                                 & vlSelf->riscv_topp__DOT__mem_o)
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->riscv_topp__DOT__con3))
                                                  ? 
                                                 (0xffffU 
                                                  & vlSelf->riscv_topp__DOT__mem_o)
                                                  : vlSelf->riscv_topp__DOT__mem_o))))
                                     : 0U);
    vlSelf->riscv_topp__DOT__M_D[0U] = (IData)((((QData)((IData)(vlSelf->riscv_topp__DOT__E_M_alu_o)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->riscv_topp__DOT__l_d))));
    vlSelf->riscv_topp__DOT__M_D[1U] = (IData)(((((QData)((IData)(vlSelf->riscv_topp__DOT__E_M_alu_o)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->riscv_topp__DOT__l_d))) 
                                                >> 0x20U));
    vlSelf->riscv_topp__DOT__M_D[2U] = (((IData)((((QData)((IData)(vlSelf->riscv_topp__DOT__E_M_u_imm)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_topp__DOT__E_M_pc)))) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->riscv_topp__DOT__E_M_U_en) 
                                          << 9U) | 
                                         (((IData)(vlSelf->riscv_topp__DOT__E_M_jalr_en) 
                                           << 8U) | 
                                          (((IData)(vlSelf->riscv_topp__DOT__E_M_UJ_en) 
                                            << 7U) 
                                           | (((IData)(vlSelf->riscv_topp__DOT__E_M_rd_adr) 
                                               << 2U) 
                                              | (((IData)(vlSelf->riscv_topp__DOT__E_M_rd_en) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->riscv_topp__DOT__E_M_ld_en)))))));
    vlSelf->riscv_topp__DOT__M_D[3U] = (((IData)((((QData)((IData)(vlSelf->riscv_topp__DOT__E_M_u_imm)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_topp__DOT__E_M_pc)))) 
                                         >> 0x16U) 
                                        | ((IData)(
                                                   ((((QData)((IData)(vlSelf->riscv_topp__DOT__E_M_u_imm)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->riscv_topp__DOT__E_M_pc))) 
                                                    >> 0x20U)) 
                                           << 0xaU));
    vlSelf->riscv_topp__DOT__M_D[4U] = (((IData)(vlSelf->riscv_topp__DOT__E_M_auipc_en) 
                                         << 0xaU) | 
                                        ((IData)(((
                                                   ((QData)((IData)(vlSelf->riscv_topp__DOT__E_M_u_imm)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->riscv_topp__DOT__E_M_pc))) 
                                                  >> 0x20U)) 
                                         >> 0x16U));
}

VL_INLINE_OPT void Vriscv_topp___024root___combo__TOP__6(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___combo__TOP__6\n"); );
    // Init
    IData/*31:0*/ riscv_topp__DOT__rs1_data;
    IData/*31:0*/ riscv_topp__DOT__rs2_data;
    // Body
    vlSelf->riscv_topp__DOT__stall = ((IData)(vlSelf->riscv_topp__DOT__D_E_ld_en) 
                                      & (((IData)(vlSelf->riscv_topp__DOT__D_E_rd_adr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                 >> 0xfU))) 
                                         | ((IData)(vlSelf->riscv_topp__DOT__D_E_rd_adr) 
                                            == (0x1fU 
                                                & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                   >> 0x14U)))));
    riscv_topp__DOT__rs2_data = ((((IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                  | (0x63U == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                  ? vlSelf->riscv_topp__DOT__reg_file1__DOT__regis
                                 [(0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                            >> 0x14U))]
                                  : 0U);
    riscv_topp__DOT__rs1_data = (((((0x63U == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                   | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type)) 
                                  | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type))
                                  ? vlSelf->riscv_topp__DOT__reg_file1__DOT__regis
                                 [(0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                            >> 0xfU))]
                                  : 0U);
    vlSelf->riscv_topp__DOT__forward1 = (((IData)(vlSelf->riscv_topp__DOT__M_D_rd_en) 
                                          & (0U != (IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr))) 
                                         & ((IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr) 
                                            == (0x1fU 
                                                & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                   >> 0xfU))));
    vlSelf->riscv_topp__DOT__forward2 = (((IData)(vlSelf->riscv_topp__DOT__M_D_rd_en) 
                                          & (0U != (IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr))) 
                                         & ((IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr) 
                                            == (0x1fU 
                                                & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                   >> 0x14U))));
    vlSelf->riscv_topp__DOT__u = ((0x23U == (IData)(vlSelf->riscv_topp__DOT__opcode))
                                   ? vlSelf->riscv_topp__DOT__s_imm
                                   : vlSelf->riscv_topp__DOT__i_imm);
    if (((((((IData)(vlSelf->riscv_topp__DOT__stall) 
             | (IData)(vlSelf->riscv_topp__DOT__E_M_b_en)) 
            | (IData)(vlSelf->riscv_topp__DOT__b_en)) 
           | (IData)(vlSelf->riscv_topp__DOT__D_E_UJ_en)) 
          | (IData)(vlSelf->riscv_topp__DOT__D_E_jalr_en)) 
         | (IData)(vlSelf->riscv_topp__DOT__E_M_jalr_en))) {
        vlSelf->riscv_topp__DOT__branch1 = 0U;
        vlSelf->riscv_topp__DOT__ld_en1 = 0U;
        vlSelf->riscv_topp__DOT__rd_en1 = 0U;
        vlSelf->riscv_topp__DOT__str_en1 = 0U;
        vlSelf->riscv_topp__DOT__jalr_en1 = 0U;
        vlSelf->riscv_topp__DOT__F_D_inst1 = 0x13U;
    } else {
        vlSelf->riscv_topp__DOT__branch1 = (0x63U == (IData)(vlSelf->riscv_topp__DOT__opcode));
        vlSelf->riscv_topp__DOT__ld_en1 = (3U == (IData)(vlSelf->riscv_topp__DOT__opcode));
        vlSelf->riscv_topp__DOT__rd_en1 = vlSelf->riscv_topp__DOT__rd_en;
        vlSelf->riscv_topp__DOT__str_en1 = (0x23U == (IData)(vlSelf->riscv_topp__DOT__opcode));
        vlSelf->riscv_topp__DOT__jalr_en1 = (0x67U 
                                             == (IData)(vlSelf->riscv_topp__DOT__opcode));
        vlSelf->riscv_topp__DOT__F_D_inst1 = vlSelf->riscv_topp__DOT__F_D_inst;
    }
    vlSelf->riscv_topp__DOT__rs1_data1 = ((IData)(vlSelf->riscv_topp__DOT__forward1)
                                           ? vlSelf->riscv_topp__DOT__rd_data
                                           : riscv_topp__DOT__rs1_data);
    vlSelf->riscv_topp__DOT__rs2_data1 = ((IData)(vlSelf->riscv_topp__DOT__forward2)
                                           ? vlSelf->riscv_topp__DOT__rd_data
                                           : riscv_topp__DOT__rs2_data);
    vlSelf->riscv_topp__DOT__UJ_en1 = ((~ ((((((IData)(vlSelf->riscv_topp__DOT__stall) 
                                               | (IData)(vlSelf->riscv_topp__DOT__E_M_b_en)) 
                                              | (IData)(vlSelf->riscv_topp__DOT__b_en)) 
                                             | (IData)(vlSelf->riscv_topp__DOT__D_E_UJ_en)) 
                                            | (IData)(vlSelf->riscv_topp__DOT__D_E_jalr_en)) 
                                           | (IData)(vlSelf->riscv_topp__DOT__E_M_jalr_en))) 
                                       & (0x6fU == (IData)(vlSelf->riscv_topp__DOT__opcode)));
    vlSelf->riscv_topp__DOT__D_E[0U] = vlSelf->riscv_topp__DOT__rs1_data1;
    vlSelf->riscv_topp__DOT__D_E[1U] = vlSelf->riscv_topp__DOT__rs2_data1;
    vlSelf->riscv_topp__DOT__D_E[2U] = vlSelf->riscv_topp__DOT__u;
    vlSelf->riscv_topp__DOT__D_E[3U] = (((IData)((((QData)((IData)(vlSelf->riscv_topp__DOT__u_imm)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_topp__DOT__F_D_pc)))) 
                                         << 0x14U) 
                                        | (((IData)(vlSelf->riscv_topp__DOT__U_en) 
                                            << 0x13U) 
                                           | (((IData)(vlSelf->riscv_topp__DOT__jalr_en1) 
                                               << 0x12U) 
                                              | (((0x6fU 
                                                   == (IData)(vlSelf->riscv_topp__DOT__opcode)) 
                                                  << 0x11U) 
                                                 | (((IData)(vlSelf->riscv_topp__DOT__rd_adr) 
                                                     << 0xcU) 
                                                    | (((IData)(vlSelf->riscv_topp__DOT__str_en1) 
                                                        << 0xbU) 
                                                       | (((IData)(vlSelf->riscv_topp__DOT__rd_en1) 
                                                           << 0xaU) 
                                                          | (((IData)(vlSelf->riscv_topp__DOT__ld_en1) 
                                                              << 9U) 
                                                             | (((IData)(vlSelf->riscv_topp__DOT__func3) 
                                                                 << 5U) 
                                                                | (((IData)(vlSelf->riscv_topp__DOT__branch1) 
                                                                    << 4U) 
                                                                   | (IData)(vlSelf->riscv_topp__DOT__alu_sel)))))))))));
    vlSelf->riscv_topp__DOT__D_E[4U] = (((IData)((((QData)((IData)(vlSelf->riscv_topp__DOT__u_imm)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_topp__DOT__F_D_pc)))) 
                                         >> 0xcU) | 
                                        ((IData)(((
                                                   ((QData)((IData)(vlSelf->riscv_topp__DOT__u_imm)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->riscv_topp__DOT__F_D_pc))) 
                                                  >> 0x20U)) 
                                         << 0x14U));
    vlSelf->riscv_topp__DOT__D_E[5U] = (((IData)(vlSelf->riscv_topp__DOT__rs2_adr) 
                                         << 0x1bU) 
                                        | (((IData)(vlSelf->riscv_topp__DOT__rs1_adr) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->riscv_topp__DOT__imm_sel) 
                                               << 0x15U) 
                                              | (((0x17U 
                                                   == (IData)(vlSelf->riscv_topp__DOT__opcode)) 
                                                  << 0x14U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(vlSelf->riscv_topp__DOT__u_imm)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->riscv_topp__DOT__F_D_pc))) 
                                                             >> 0x20U)) 
                                                    >> 0xcU)))));
    vlSelf->riscv_topp__DOT__D_E[6U] = vlSelf->riscv_topp__DOT__sb_imm;
    vlSelf->riscv_topp__DOT__rs1_sltd_data = ((2U == (IData)(vlSelf->riscv_topp__DOT__forwardA))
                                               ? vlSelf->riscv_topp__DOT__E_M_alu_o
                                               : ((1U 
                                                   == (IData)(vlSelf->riscv_topp__DOT__forwardA))
                                                   ? vlSelf->riscv_topp__DOT__rd_data
                                                   : vlSelf->riscv_topp__DOT__D_E_alu1_in));
    vlSelf->riscv_topp__DOT__rs2_sltd_data = ((2U == (IData)(vlSelf->riscv_topp__DOT__forwardB))
                                               ? vlSelf->riscv_topp__DOT__E_M_alu_o
                                               : ((1U 
                                                   == (IData)(vlSelf->riscv_topp__DOT__forwardB))
                                                   ? vlSelf->riscv_topp__DOT__rd_data
                                                   : vlSelf->riscv_topp__DOT__D_E_rs2_data));
    vlSelf->riscv_topp__DOT__D_E_alu2_in = ((IData)(vlSelf->riscv_topp__DOT__D_E_imm_sel)
                                             ? vlSelf->riscv_topp__DOT__D_E_u
                                             : vlSelf->riscv_topp__DOT__rs2_sltd_data);
    vlSelf->riscv_topp__DOT__b_en = ((IData)(vlSelf->riscv_topp__DOT__D_E_branch) 
                                     & vlSelf->riscv_topp__DOT__alu_o);
    vlSelf->riscv_topp__DOT__E_M[0U] = (IData)((((QData)((IData)(vlSelf->riscv_topp__DOT__rs2_sltd_data)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->riscv_topp__DOT__alu_o))));
    vlSelf->riscv_topp__DOT__E_M[1U] = (IData)(((((QData)((IData)(vlSelf->riscv_topp__DOT__rs2_sltd_data)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->riscv_topp__DOT__alu_o))) 
                                                >> 0x20U));
    vlSelf->riscv_topp__DOT__E_M[2U] = (((IData)((((QData)((IData)(vlSelf->riscv_topp__DOT__D_E_u_imm)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_topp__DOT__D_E_pc)))) 
                                         << 0xfU) | 
                                        (((IData)(vlSelf->riscv_topp__DOT__D_E_U_en) 
                                          << 0xeU) 
                                         | (((IData)(vlSelf->riscv_topp__DOT__D_E_jalr_en) 
                                             << 0xdU) 
                                            | (((IData)(vlSelf->riscv_topp__DOT__D_E_UJ_en) 
                                                << 0xcU) 
                                               | (((IData)(vlSelf->riscv_topp__DOT__D_E_rd_adr) 
                                                   << 7U) 
                                                  | (((IData)(vlSelf->riscv_topp__DOT__D_E_str_en) 
                                                      << 6U) 
                                                     | (((IData)(vlSelf->riscv_topp__DOT__D_E_rd_en) 
                                                         << 5U) 
                                                        | (((IData)(vlSelf->riscv_topp__DOT__D_E_ld_en) 
                                                            << 4U) 
                                                           | (IData)(vlSelf->riscv_topp__DOT__D_E_func3)))))))));
    vlSelf->riscv_topp__DOT__E_M[3U] = (((IData)((((QData)((IData)(vlSelf->riscv_topp__DOT__D_E_u_imm)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_topp__DOT__D_E_pc)))) 
                                         >> 0x11U) 
                                        | ((IData)(
                                                   ((((QData)((IData)(vlSelf->riscv_topp__DOT__D_E_u_imm)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->riscv_topp__DOT__D_E_pc))) 
                                                    >> 0x20U)) 
                                           << 0xfU));
    vlSelf->riscv_topp__DOT__E_M[4U] = (((IData)(vlSelf->riscv_topp__DOT__b_en) 
                                         << 0x10U) 
                                        | (((IData)(vlSelf->riscv_topp__DOT__D_E_auipc_en) 
                                            << 0xfU) 
                                           | ((IData)(
                                                      ((((QData)((IData)(vlSelf->riscv_topp__DOT__D_E_u_imm)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->riscv_topp__DOT__D_E_pc))) 
                                                       >> 0x20U)) 
                                              >> 0x11U)));
    vlSelf->riscv_topp__DOT__rd_data = ((IData)(vlSelf->riscv_topp__DOT__M_D_ld_en)
                                         ? vlSelf->riscv_topp__DOT__M_D_l_d
                                         : (((IData)(vlSelf->riscv_topp__DOT__M_D_UJ_en) 
                                             | (IData)(vlSelf->riscv_topp__DOT__M_D_jalr_en))
                                             ? ((IData)(4U) 
                                                + vlSelf->riscv_topp__DOT__M_D_pc)
                                             : ((IData)(vlSelf->riscv_topp__DOT__M_D_U_en)
                                                 ? 
                                                ((IData)(vlSelf->riscv_topp__DOT__M_D_auipc_en)
                                                  ? 
                                                 (vlSelf->riscv_topp__DOT__M_D_u_imm 
                                                  + vlSelf->riscv_topp__DOT__M_D_pc)
                                                  : vlSelf->riscv_topp__DOT__M_D_u_imm)
                                                 : vlSelf->riscv_topp__DOT__M_D_alu_o)));
    vlSelf->riscv_topp__DOT__alu_o = ((8U & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                       ? ((4U & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                           ? ((2U & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                                   ? 
                                                  ((0x1fU 
                                                    >= vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                    ? 
                                                   (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                    >> vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                    : 0U)
                                                   : 0U))
                                           : ((2U & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                                   ? 
                                                  (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                   + vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                   : 
                                                  (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                   - vlSelf->riscv_topp__DOT__D_E_alu2_in))))
                                       : ((4U & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                           ? ((2U & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                                   ? 
                                                  ((IData)(vlSelf->riscv_topp__DOT__D_E_branch)
                                                    ? 
                                                   ((vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                     >= vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                    & vlSelf->riscv_topp__DOT__D_E_alu2_in))
                                                   : 
                                                  ((IData)(vlSelf->riscv_topp__DOT__D_E_branch)
                                                    ? 
                                                   ((vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                     < vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                    | vlSelf->riscv_topp__DOT__D_E_alu2_in)))
                                               : ((1U 
                                                   & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                                   ? 
                                                  ((IData)(vlSelf->riscv_topp__DOT__D_E_branch)
                                                    ? 
                                                   (VL_GTES_III(1,32,32, vlSelf->riscv_topp__DOT__rs1_sltd_data, vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     ? 
                                                    (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                     >> vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     : 0U))
                                                   : 
                                                  ((IData)(vlSelf->riscv_topp__DOT__D_E_branch)
                                                    ? 
                                                   (VL_LTS_III(1,32,32, vlSelf->riscv_topp__DOT__rs1_sltd_data, vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                    ^ vlSelf->riscv_topp__DOT__D_E_alu2_in))))
                                           : ((2U & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                                   ? 
                                                  ((vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                    < vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  (VL_LTS_III(1,32,32, vlSelf->riscv_topp__DOT__rs1_sltd_data, vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                    ? 1U
                                                    : 0U))
                                               : ((1U 
                                                   & (IData)(vlSelf->riscv_topp__DOT__D_E_alu_sel))
                                                   ? 
                                                  ((IData)(vlSelf->riscv_topp__DOT__D_E_branch)
                                                    ? 
                                                   ((vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                     != vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     ? 
                                                    (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                     << vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     : 0U))
                                                   : 
                                                  ((IData)(vlSelf->riscv_topp__DOT__D_E_branch)
                                                    ? 
                                                   ((vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                     == vlSelf->riscv_topp__DOT__D_E_alu2_in)
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (vlSelf->riscv_topp__DOT__rs1_sltd_data 
                                                    + vlSelf->riscv_topp__DOT__D_E_alu2_in))))));
}

void Vriscv_topp___024root___eval(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___eval\n"); );
    // Body
    Vriscv_topp___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vriscv_topp___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vriscv_topp___024root___combo__TOP__6(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vriscv_topp___024root___change_request_1(Vriscv_topp___024root* vlSelf);

VL_INLINE_OPT QData Vriscv_topp___024root___change_request(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___change_request\n"); );
    // Body
    return (Vriscv_topp___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vriscv_topp___024root___change_request_1(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->riscv_topp__DOT__b_en ^ vlSelf->__Vchglast__TOP__riscv_topp__DOT__b_en)
         | (vlSelf->riscv_topp__DOT__F_D_inst1 ^ vlSelf->__Vchglast__TOP__riscv_topp__DOT__F_D_inst1)
         | (vlSelf->riscv_topp__DOT__rd_data ^ vlSelf->__Vchglast__TOP__riscv_topp__DOT__rd_data)
         | (vlSelf->riscv_topp__DOT__alu_o ^ vlSelf->__Vchglast__TOP__riscv_topp__DOT__alu_o));
    VL_DEBUG_IF( if(__req && ((vlSelf->riscv_topp__DOT__b_en ^ vlSelf->__Vchglast__TOP__riscv_topp__DOT__b_en))) VL_DBG_MSGF("        CHANGE: riscv_topp.sv:4: riscv_topp.b_en\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->riscv_topp__DOT__F_D_inst1 ^ vlSelf->__Vchglast__TOP__riscv_topp__DOT__F_D_inst1))) VL_DBG_MSGF("        CHANGE: riscv_topp.sv:11: riscv_topp.F_D_inst1\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->riscv_topp__DOT__rd_data ^ vlSelf->__Vchglast__TOP__riscv_topp__DOT__rd_data))) VL_DBG_MSGF("        CHANGE: riscv_topp.sv:11: riscv_topp.rd_data\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->riscv_topp__DOT__alu_o ^ vlSelf->__Vchglast__TOP__riscv_topp__DOT__alu_o))) VL_DBG_MSGF("        CHANGE: riscv_topp.sv:11: riscv_topp.alu_o\n"); );
    // Final
    vlSelf->__Vchglast__TOP__riscv_topp__DOT__b_en 
        = vlSelf->riscv_topp__DOT__b_en;
    vlSelf->__Vchglast__TOP__riscv_topp__DOT__F_D_inst1 
        = vlSelf->riscv_topp__DOT__F_D_inst1;
    vlSelf->__Vchglast__TOP__riscv_topp__DOT__rd_data 
        = vlSelf->riscv_topp__DOT__rd_data;
    vlSelf->__Vchglast__TOP__riscv_topp__DOT__alu_o 
        = vlSelf->riscv_topp__DOT__alu_o;
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_topp___024root___eval_debug_assertions(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
