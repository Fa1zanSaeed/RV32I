// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_topp__Syms.h"


void Vriscv_topp___024root__trace_chg_sub_0(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv_topp___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root__trace_chg_top_0\n"); );
    // Init
    Vriscv_topp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_topp___024root*>(voidSelf);
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv_topp___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vriscv_topp___024root__trace_chg_sub_0(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->riscv_topp__DOT__jalr_en1));
        tracep->chgBit(oldp+1,(vlSelf->riscv_topp__DOT__UJ_en1));
        tracep->chgBit(oldp+2,(vlSelf->riscv_topp__DOT__branch1));
        tracep->chgBit(oldp+3,(vlSelf->riscv_topp__DOT__ld_en1));
        tracep->chgBit(oldp+4,(vlSelf->riscv_topp__DOT__rd_en1));
        tracep->chgBit(oldp+5,(vlSelf->riscv_topp__DOT__str_en1));
        tracep->chgBit(oldp+6,(vlSelf->riscv_topp__DOT__stall));
        tracep->chgBit(oldp+7,(((((((IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type) 
                                    | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type)) 
                                   | (3U == (0x7fU 
                                             & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                 | (IData)(vlSelf->riscv_topp__DOT__U_en)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->riscv_topp__DOT__F_D_inst1)))));
        tracep->chgBit(oldp+8,(((((0x63U == (0x7fU 
                                             & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                 | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type)) 
                                | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type))));
        tracep->chgBit(oldp+9,((((IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type) 
                                 | (0x23U == (0x7fU 
                                              & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                | (0x63U == (0x7fU 
                                             & vlSelf->riscv_topp__DOT__F_D_inst1)))));
        tracep->chgBit(oldp+10,((((((0x1bU == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                    | (0x13U == (0x7fU 
                                                 & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                   | (3U == (0x7fU 
                                             & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                 | (0x23U == (0x7fU 
                                              & vlSelf->riscv_topp__DOT__F_D_inst1)))));
        tracep->chgBit(oldp+11,((0x63U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
        tracep->chgBit(oldp+12,((0x23U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
        tracep->chgBit(oldp+13,((3U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
        tracep->chgBit(oldp+14,((0x6fU == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
        tracep->chgBit(oldp+15,((0x67U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
        tracep->chgBit(oldp+16,(vlSelf->riscv_topp__DOT__U_en));
        tracep->chgBit(oldp+17,((0x17U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
        tracep->chgBit(oldp+18,(vlSelf->riscv_topp__DOT__b_en));
        tracep->chgCData(oldp+19,(vlSelf->riscv_topp__DOT__func3),4);
        tracep->chgCData(oldp+20,((((3U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                    ? 9U : (((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                             | (0x3bU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                             ? (IData)(vlSelf->riscv_topp__DOT__func3)
                                             : (((0x13U 
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
                                                 & (IData)(vlSelf->riscv_topp__DOT__func3)))))),4);
        tracep->chgCData(oldp+21,((0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                            >> 7U))),5);
        tracep->chgCData(oldp+22,((0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+23,((0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+24,((0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)),7);
        tracep->chgIData(oldp+25,(vlSelf->riscv_topp__DOT__F_D_inst1),32);
        tracep->chgIData(oldp+26,(vlSelf->riscv_topp__DOT__rs1_data1),32);
        tracep->chgIData(oldp+27,(vlSelf->riscv_topp__DOT__rs2_data1),32);
        tracep->chgIData(oldp+28,(vlSelf->riscv_topp__DOT__D_E_alu2_in),32);
        tracep->chgIData(oldp+29,(vlSelf->riscv_topp__DOT__rd_data),32);
        tracep->chgIData(oldp+30,((((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                >> 0x14U))),32);
        tracep->chgIData(oldp+31,((((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                      >> 7U))))),32);
        tracep->chgIData(oldp+32,((((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
                                                >> 0x1fU))) 
                                    << 0xdU) | ((0x1000U 
                                                 & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                    >> 0x13U)) 
                                                | ((0x800U 
                                                    & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                            >> 7U))))))),32);
        tracep->chgIData(oldp+33,((0xfffff000U & vlSelf->riscv_topp__DOT__F_D_inst1)),32);
        tracep->chgIData(oldp+34,((((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
                                                >> 0x1fU))) 
                                    << 0x15U) | ((0x100000U 
                                                  & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelf->riscv_topp__DOT__F_D_inst1) 
                                                    | ((0x800U 
                                                        & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                             >> 0x14U))))))),32);
        tracep->chgIData(oldp+35,(vlSelf->riscv_topp__DOT__u),32);
        tracep->chgIData(oldp+36,(vlSelf->riscv_topp__DOT__alu_o),32);
        tracep->chgIData(oldp+37,(vlSelf->riscv_topp__DOT__rs1_sltd_data),32);
        tracep->chgIData(oldp+38,(vlSelf->riscv_topp__DOT__rs2_sltd_data),32);
        tracep->chgWData(oldp+39,(vlSelf->riscv_topp__DOT__D_E),224);
        tracep->chgWData(oldp+46,(vlSelf->riscv_topp__DOT__E_M),145);
        tracep->chgCData(oldp+51,((vlSelf->riscv_topp__DOT__F_D_inst1 
                                   >> 0x19U)),7);
        tracep->chgBit(oldp+52,(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type));
        tracep->chgBit(oldp+53,(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type));
        tracep->chgCData(oldp+54,((7U & (IData)(vlSelf->riscv_topp__DOT__func3))),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+55,(vlSelf->riscv_topp__DOT__E_M_b_en));
        tracep->chgBit(oldp+56,(vlSelf->riscv_topp__DOT__D_E_imm_sel));
        tracep->chgBit(oldp+57,(vlSelf->riscv_topp__DOT__D_E_branch));
        tracep->chgBit(oldp+58,(vlSelf->riscv_topp__DOT__D_E_ld_en));
        tracep->chgBit(oldp+59,(vlSelf->riscv_topp__DOT__E_M_ld_en));
        tracep->chgBit(oldp+60,(vlSelf->riscv_topp__DOT__M_D_ld_en));
        tracep->chgBit(oldp+61,(vlSelf->riscv_topp__DOT__D_E_rd_en));
        tracep->chgBit(oldp+62,(vlSelf->riscv_topp__DOT__E_M_rd_en));
        tracep->chgBit(oldp+63,(vlSelf->riscv_topp__DOT__M_D_rd_en));
        tracep->chgBit(oldp+64,(vlSelf->riscv_topp__DOT__D_E_str_en));
        tracep->chgBit(oldp+65,(vlSelf->riscv_topp__DOT__E_M_str_en));
        tracep->chgBit(oldp+66,(vlSelf->riscv_topp__DOT__D_E_UJ_en));
        tracep->chgBit(oldp+67,(vlSelf->riscv_topp__DOT__E_M_UJ_en));
        tracep->chgBit(oldp+68,(vlSelf->riscv_topp__DOT__M_D_UJ_en));
        tracep->chgBit(oldp+69,(vlSelf->riscv_topp__DOT__D_E_jalr_en));
        tracep->chgBit(oldp+70,(vlSelf->riscv_topp__DOT__E_M_jalr_en));
        tracep->chgBit(oldp+71,(vlSelf->riscv_topp__DOT__M_D_jalr_en));
        tracep->chgBit(oldp+72,(vlSelf->riscv_topp__DOT__D_E_U_en));
        tracep->chgBit(oldp+73,(vlSelf->riscv_topp__DOT__E_M_U_en));
        tracep->chgBit(oldp+74,(vlSelf->riscv_topp__DOT__M_D_U_en));
        tracep->chgBit(oldp+75,(vlSelf->riscv_topp__DOT__D_E_auipc_en));
        tracep->chgBit(oldp+76,(vlSelf->riscv_topp__DOT__E_M_auipc_en));
        tracep->chgBit(oldp+77,(vlSelf->riscv_topp__DOT__M_D_auipc_en));
        tracep->chgCData(oldp+78,(vlSelf->riscv_topp__DOT__forwardA),2);
        tracep->chgCData(oldp+79,(vlSelf->riscv_topp__DOT__forwardB),2);
        tracep->chgCData(oldp+80,(vlSelf->riscv_topp__DOT__con3),3);
        tracep->chgCData(oldp+81,(vlSelf->riscv_topp__DOT__D_E_alu_sel),4);
        tracep->chgCData(oldp+82,(vlSelf->riscv_topp__DOT__D_E_func3),4);
        tracep->chgCData(oldp+83,(vlSelf->riscv_topp__DOT__E_M_func3),4);
        tracep->chgCData(oldp+84,(vlSelf->riscv_topp__DOT__WE),4);
        tracep->chgCData(oldp+85,(vlSelf->riscv_topp__DOT__D_E_rd_adr),5);
        tracep->chgCData(oldp+86,(vlSelf->riscv_topp__DOT__D_E_rs1_adr),5);
        tracep->chgCData(oldp+87,(vlSelf->riscv_topp__DOT__D_E_rs2_adr),5);
        tracep->chgCData(oldp+88,(vlSelf->riscv_topp__DOT__E_M_rd_adr),5);
        tracep->chgCData(oldp+89,(vlSelf->riscv_topp__DOT__M_D_rd_adr),5);
        tracep->chgSData(oldp+90,((0xfffU & (vlSelf->riscv_topp__DOT__E_M_alu_o 
                                             >> 2U))),12);
        tracep->chgIData(oldp+91,(vlSelf->riscv_topp__DOT__D_E_sb_imm),32);
        tracep->chgIData(oldp+92,(vlSelf->riscv_topp__DOT__D_E_u),32);
        tracep->chgIData(oldp+93,(vlSelf->riscv_topp__DOT__D_E_u_imm),32);
        tracep->chgIData(oldp+94,(vlSelf->riscv_topp__DOT__D_E_pc),32);
        tracep->chgIData(oldp+95,(vlSelf->riscv_topp__DOT__E_M_u_imm),32);
        tracep->chgIData(oldp+96,(vlSelf->riscv_topp__DOT__E_M_pc),32);
        tracep->chgIData(oldp+97,(vlSelf->riscv_topp__DOT__M_D_u_imm),32);
        tracep->chgIData(oldp+98,(vlSelf->riscv_topp__DOT__M_D_pc),32);
        tracep->chgIData(oldp+99,(vlSelf->riscv_topp__DOT__F_D_inst),32);
        tracep->chgIData(oldp+100,(vlSelf->riscv_topp__DOT__D_E_alu1_in),32);
        tracep->chgIData(oldp+101,(vlSelf->riscv_topp__DOT__F_D_pc),32);
        tracep->chgIData(oldp+102,(vlSelf->riscv_topp__DOT__E_M_alu_o),32);
        tracep->chgIData(oldp+103,(vlSelf->riscv_topp__DOT__M_D_l_d),32);
        tracep->chgIData(oldp+104,(vlSelf->riscv_topp__DOT__M_D_alu_o),32);
        tracep->chgIData(oldp+105,(vlSelf->riscv_topp__DOT__fetch1__DOT__instmem1__DOT__mem
                                   [(0xffffffU & (vlSelf->riscv_topp__DOT__pc 
                                                  >> 2U))]),32);
        tracep->chgIData(oldp+106,(vlSelf->riscv_topp__DOT__D_E_rs2_data),32);
        tracep->chgIData(oldp+107,(vlSelf->riscv_topp__DOT__E_M_rs2_data),32);
        tracep->chgIData(oldp+108,(vlSelf->riscv_topp__DOT__mem_o),32);
        tracep->chgIData(oldp+109,(vlSelf->riscv_topp__DOT__pc),32);
        tracep->chgIData(oldp+110,(vlSelf->riscv_topp__DOT__l_d),32);
        tracep->chgQData(oldp+111,(vlSelf->riscv_topp__DOT__F_D),64);
        tracep->chgQData(oldp+113,(vlSelf->riscv_topp__DOT__F_D1),64);
        tracep->chgWData(oldp+115,(vlSelf->riscv_topp__DOT__M_D),139);
        tracep->chgIData(oldp+120,((0xffffffU & (vlSelf->riscv_topp__DOT__pc 
                                                 >> 2U))),24);
        tracep->chgIData(oldp+121,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0]),32);
        tracep->chgIData(oldp+122,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[1]),32);
        tracep->chgIData(oldp+123,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[2]),32);
        tracep->chgIData(oldp+124,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[3]),32);
        tracep->chgIData(oldp+125,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[4]),32);
        tracep->chgIData(oldp+126,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[5]),32);
        tracep->chgIData(oldp+127,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[6]),32);
        tracep->chgIData(oldp+128,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[7]),32);
        tracep->chgIData(oldp+129,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[8]),32);
        tracep->chgIData(oldp+130,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[9]),32);
        tracep->chgIData(oldp+131,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[10]),32);
        tracep->chgIData(oldp+132,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[11]),32);
        tracep->chgIData(oldp+133,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[12]),32);
        tracep->chgIData(oldp+134,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[13]),32);
        tracep->chgIData(oldp+135,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[14]),32);
        tracep->chgIData(oldp+136,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[15]),32);
        tracep->chgIData(oldp+137,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[16]),32);
        tracep->chgIData(oldp+138,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[17]),32);
        tracep->chgIData(oldp+139,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[18]),32);
        tracep->chgIData(oldp+140,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[19]),32);
        tracep->chgIData(oldp+141,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[20]),32);
        tracep->chgIData(oldp+142,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[21]),32);
        tracep->chgIData(oldp+143,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[22]),32);
        tracep->chgIData(oldp+144,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[23]),32);
        tracep->chgIData(oldp+145,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[24]),32);
        tracep->chgIData(oldp+146,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[25]),32);
        tracep->chgIData(oldp+147,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[26]),32);
        tracep->chgIData(oldp+148,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[27]),32);
        tracep->chgIData(oldp+149,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[28]),32);
        tracep->chgIData(oldp+150,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[29]),32);
        tracep->chgIData(oldp+151,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[30]),32);
        tracep->chgIData(oldp+152,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[31]),32);
        tracep->chgIData(oldp+153,(vlSelf->riscv_topp__DOT__reg_file1__DOT__i),32);
    }
    tracep->chgBit(oldp+154,(vlSelf->clk));
    tracep->chgBit(oldp+155,(vlSelf->reset));
    tracep->chgBit(oldp+156,((((IData)(vlSelf->riscv_topp__DOT__M_D_rd_en) 
                               & (0U != (IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr))) 
                              & ((IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr) 
                                 == (0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                              >> 0xfU))))));
    tracep->chgBit(oldp+157,((((IData)(vlSelf->riscv_topp__DOT__M_D_rd_en) 
                               & (0U != (IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr))) 
                              & ((IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr) 
                                 == (0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                              >> 0x14U))))));
    tracep->chgIData(oldp+158,((((((0x63U == (0x7fU 
                                              & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                  | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type)) 
                                 | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type))
                                 ? vlSelf->riscv_topp__DOT__reg_file1__DOT__regis
                                [(0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                           >> 0xfU))]
                                 : 0U)),32);
    tracep->chgIData(oldp+159,(((((IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type) 
                                  | (0x23U == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                 | (0x63U == (0x7fU 
                                              & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                 ? vlSelf->riscv_topp__DOT__reg_file1__DOT__regis
                                [(0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                           >> 0x14U))]
                                 : 0U)),32);
}

void Vriscv_topp___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root__trace_cleanup\n"); );
    // Init
    Vriscv_topp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_topp___024root*>(voidSelf);
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
