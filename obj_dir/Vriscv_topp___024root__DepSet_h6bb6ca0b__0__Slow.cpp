// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_topp.h for the primary calling header

#include "verilated.h"

#include "Vriscv_topp___024root.h"

VL_ATTR_COLD void Vriscv_topp___024root___initial__TOP__1(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 32, 16777216, 0, std::string("inst.mem")
                 ,  &(vlSelf->riscv_topp__DOT__fetch1__DOT__instmem1__DOT__mem)
                 , 0, ~0ULL);
    vlSelf->riscv_topp__DOT__pc = 0U;
}

VL_ATTR_COLD void Vriscv_topp___024root___settle__TOP__3(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___settle__TOP__3\n"); );
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
    vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0U] = 0U;
    vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type 
        = ((0x1bU == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
           | (0x13U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)));
    vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type 
        = ((0x3bU == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
           | (0x33U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)));
    vlSelf->riscv_topp__DOT__stall = ((IData)(vlSelf->riscv_topp__DOT__D_E_ld_en) 
                                      & (((IData)(vlSelf->riscv_topp__DOT__D_E_rd_adr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                 >> 0xfU))) 
                                         | ((IData)(vlSelf->riscv_topp__DOT__D_E_rd_adr) 
                                            == (0x1fU 
                                                & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                   >> 0x14U)))));
    vlSelf->riscv_topp__DOT__mem_o = ((IData)(vlSelf->riscv_topp__DOT__E_M_ld_en)
                                       ? vlSelf->riscv_topp__DOT__datamemory1__DOT__mem
                                      [(0xfffU & (vlSelf->riscv_topp__DOT__E_M_alu_o 
                                                  >> 2U))]
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
    vlSelf->riscv_topp__DOT__F_D = (((QData)((IData)(vlSelf->riscv_topp__DOT__pc)) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_topp__DOT__fetch1__DOT__instmem1__DOT__mem
                                                                 [
                                                                 (0xffffffU 
                                                                  & (vlSelf->riscv_topp__DOT__pc 
                                                                     >> 2U))])));
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

VL_ATTR_COLD void Vriscv_topp___024root___settle__TOP__5(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___settle__TOP__5\n"); );
    // Init
    IData/*31:0*/ riscv_topp__DOT__rs1_data;
    IData/*31:0*/ riscv_topp__DOT__rs2_data;
    // Body
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

VL_ATTR_COLD void Vriscv_topp___024root___eval_initial(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___eval_initial\n"); );
    // Body
    Vriscv_topp___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vriscv_topp___024root___eval_settle(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___eval_settle\n"); );
    // Body
    Vriscv_topp___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vriscv_topp___024root___settle__TOP__5(vlSelf);
}

VL_ATTR_COLD void Vriscv_topp___024root___final(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___final\n"); );
}

VL_ATTR_COLD void Vriscv_topp___024root___ctor_var_reset(Vriscv_topp___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__jalr_en1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__UJ_en1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__forward1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__forward2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__E_M_b_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__branch1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__ld_en1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__rd_en1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__str_en1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_imm_sel = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__rd_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__imm_sel = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__U_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__b_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_branch = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_ld_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__E_M_ld_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__M_D_ld_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_rd_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__E_M_rd_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__M_D_rd_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_str_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__E_M_str_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_UJ_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__E_M_UJ_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__M_D_UJ_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_jalr_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__E_M_jalr_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__M_D_jalr_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_U_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__E_M_U_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__M_D_U_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__D_E_auipc_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__E_M_auipc_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__M_D_auipc_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__forwardA = VL_RAND_RESET_I(2);
    vlSelf->riscv_topp__DOT__forwardB = VL_RAND_RESET_I(2);
    vlSelf->riscv_topp__DOT__con3 = VL_RAND_RESET_I(3);
    vlSelf->riscv_topp__DOT__func3 = VL_RAND_RESET_I(4);
    vlSelf->riscv_topp__DOT__alu_sel = VL_RAND_RESET_I(4);
    vlSelf->riscv_topp__DOT__D_E_alu_sel = VL_RAND_RESET_I(4);
    vlSelf->riscv_topp__DOT__D_E_func3 = VL_RAND_RESET_I(4);
    vlSelf->riscv_topp__DOT__E_M_func3 = VL_RAND_RESET_I(4);
    vlSelf->riscv_topp__DOT__WE = VL_RAND_RESET_I(4);
    vlSelf->riscv_topp__DOT__rd_adr = VL_RAND_RESET_I(5);
    vlSelf->riscv_topp__DOT__rs1_adr = VL_RAND_RESET_I(5);
    vlSelf->riscv_topp__DOT__rs2_adr = VL_RAND_RESET_I(5);
    vlSelf->riscv_topp__DOT__D_E_rd_adr = VL_RAND_RESET_I(5);
    vlSelf->riscv_topp__DOT__D_E_rs1_adr = VL_RAND_RESET_I(5);
    vlSelf->riscv_topp__DOT__D_E_rs2_adr = VL_RAND_RESET_I(5);
    vlSelf->riscv_topp__DOT__E_M_rd_adr = VL_RAND_RESET_I(5);
    vlSelf->riscv_topp__DOT__M_D_rd_adr = VL_RAND_RESET_I(5);
    vlSelf->riscv_topp__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->riscv_topp__DOT__F_D_inst1 = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__rs1_data1 = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__rs2_data1 = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__D_E_sb_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__D_E_u = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__D_E_u_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__D_E_pc = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__E_M_u_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__E_M_pc = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__M_D_u_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__M_D_pc = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__F_D_inst = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__D_E_alu1_in = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__D_E_alu2_in = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__F_D_pc = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__E_M_alu_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__M_D_l_d = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__M_D_alu_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__D_E_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__E_M_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__i_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__s_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__sb_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__u_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__u = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__alu_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__mem_o = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__l_d = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__rs1_sltd_data = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__rs2_sltd_data = VL_RAND_RESET_I(32);
    vlSelf->riscv_topp__DOT__F_D = VL_RAND_RESET_Q(64);
    vlSelf->riscv_topp__DOT__F_D1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(224, vlSelf->riscv_topp__DOT__D_E);
    VL_RAND_RESET_W(145, vlSelf->riscv_topp__DOT__E_M);
    VL_RAND_RESET_W(139, vlSelf->riscv_topp__DOT__M_D);
    for (int __Vi0=0; __Vi0<16777216; ++__Vi0) {
        vlSelf->riscv_topp__DOT__fetch1__DOT__instmem1__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type = VL_RAND_RESET_I(1);
    vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->riscv_topp__DOT__reg_file1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->riscv_topp__DOT__datamemory1__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vchglast__TOP__riscv_topp__DOT__b_en = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__riscv_topp__DOT__F_D_inst1 = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__riscv_topp__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->__Vchglast__TOP__riscv_topp__DOT__alu_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
