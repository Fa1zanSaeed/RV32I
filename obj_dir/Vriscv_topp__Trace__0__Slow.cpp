// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_topp__Syms.h"


VL_ATTR_COLD void Vriscv_topp___024root__trace_init_sub_0(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_topp___024root__trace_init_top(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root__trace_init_top\n"); );
    // Body
    Vriscv_topp___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv_topp___024root__trace_init_sub_0(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+155,"clk", false,-1);
    tracep->declBit(c+156,"reset", false,-1);
    tracep->declBit(c+155,"riscv_topp clk", false,-1);
    tracep->declBit(c+156,"riscv_topp reset", false,-1);
    tracep->declBit(c+1,"riscv_topp jalr_en1", false,-1);
    tracep->declBit(c+2,"riscv_topp UJ_en1", false,-1);
    tracep->declBit(c+157,"riscv_topp forward1", false,-1);
    tracep->declBit(c+158,"riscv_topp forward2", false,-1);
    tracep->declBit(c+56,"riscv_topp E_M_b_en", false,-1);
    tracep->declBit(c+3,"riscv_topp branch1", false,-1);
    tracep->declBit(c+4,"riscv_topp ld_en1", false,-1);
    tracep->declBit(c+5,"riscv_topp rd_en1", false,-1);
    tracep->declBit(c+6,"riscv_topp str_en1", false,-1);
    tracep->declBit(c+7,"riscv_topp stall", false,-1);
    tracep->declBit(c+57,"riscv_topp D_E_imm_sel", false,-1);
    tracep->declBit(c+8,"riscv_topp rd_en", false,-1);
    tracep->declBit(c+9,"riscv_topp rs1_en", false,-1);
    tracep->declBit(c+10,"riscv_topp rs2_en", false,-1);
    tracep->declBit(c+11,"riscv_topp imm_sel", false,-1);
    tracep->declBit(c+12,"riscv_topp branch", false,-1);
    tracep->declBit(c+13,"riscv_topp str_en", false,-1);
    tracep->declBit(c+14,"riscv_topp ld_en", false,-1);
    tracep->declBit(c+15,"riscv_topp UJ_en", false,-1);
    tracep->declBit(c+16,"riscv_topp jalr_en", false,-1);
    tracep->declBit(c+17,"riscv_topp U_en", false,-1);
    tracep->declBit(c+18,"riscv_topp auipc_en", false,-1);
    tracep->declBit(c+19,"riscv_topp b_en", false,-1);
    tracep->declBit(c+58,"riscv_topp D_E_branch", false,-1);
    tracep->declBit(c+59,"riscv_topp D_E_ld_en", false,-1);
    tracep->declBit(c+60,"riscv_topp E_M_ld_en", false,-1);
    tracep->declBit(c+61,"riscv_topp M_D_ld_en", false,-1);
    tracep->declBit(c+62,"riscv_topp D_E_rd_en", false,-1);
    tracep->declBit(c+63,"riscv_topp E_M_rd_en", false,-1);
    tracep->declBit(c+64,"riscv_topp M_D_rd_en", false,-1);
    tracep->declBit(c+65,"riscv_topp D_E_str_en", false,-1);
    tracep->declBit(c+66,"riscv_topp E_M_str_en", false,-1);
    tracep->declBit(c+67,"riscv_topp D_E_UJ_en", false,-1);
    tracep->declBit(c+68,"riscv_topp E_M_UJ_en", false,-1);
    tracep->declBit(c+69,"riscv_topp M_D_UJ_en", false,-1);
    tracep->declBit(c+70,"riscv_topp D_E_jalr_en", false,-1);
    tracep->declBit(c+71,"riscv_topp E_M_jalr_en", false,-1);
    tracep->declBit(c+72,"riscv_topp M_D_jalr_en", false,-1);
    tracep->declBit(c+73,"riscv_topp D_E_U_en", false,-1);
    tracep->declBit(c+74,"riscv_topp E_M_U_en", false,-1);
    tracep->declBit(c+75,"riscv_topp M_D_U_en", false,-1);
    tracep->declBit(c+76,"riscv_topp D_E_auipc_en", false,-1);
    tracep->declBit(c+77,"riscv_topp E_M_auipc_en", false,-1);
    tracep->declBit(c+78,"riscv_topp M_D_auipc_en", false,-1);
    tracep->declBus(c+79,"riscv_topp forwardA", false,-1, 1,0);
    tracep->declBus(c+80,"riscv_topp forwardB", false,-1, 1,0);
    tracep->declBus(c+81,"riscv_topp con3", false,-1, 2,0);
    tracep->declBus(c+20,"riscv_topp func3", false,-1, 3,0);
    tracep->declBus(c+21,"riscv_topp alu_sel", false,-1, 3,0);
    tracep->declBus(c+82,"riscv_topp D_E_alu_sel", false,-1, 3,0);
    tracep->declBus(c+83,"riscv_topp D_E_func3", false,-1, 3,0);
    tracep->declBus(c+84,"riscv_topp E_M_func3", false,-1, 3,0);
    tracep->declBus(c+85,"riscv_topp WE", false,-1, 3,0);
    tracep->declBus(c+22,"riscv_topp rd_adr", false,-1, 4,0);
    tracep->declBus(c+23,"riscv_topp rs1_adr", false,-1, 4,0);
    tracep->declBus(c+24,"riscv_topp rs2_adr", false,-1, 4,0);
    tracep->declBus(c+86,"riscv_topp D_E_rd_adr", false,-1, 4,0);
    tracep->declBus(c+87,"riscv_topp D_E_rs1_adr", false,-1, 4,0);
    tracep->declBus(c+88,"riscv_topp D_E_rs2_adr", false,-1, 4,0);
    tracep->declBus(c+89,"riscv_topp E_M_rd_adr", false,-1, 4,0);
    tracep->declBus(c+90,"riscv_topp M_D_rd_adr", false,-1, 4,0);
    tracep->declBus(c+25,"riscv_topp opcode", false,-1, 6,0);
    tracep->declBus(c+91,"riscv_topp mem_adr", false,-1, 11,0);
    tracep->declBus(c+26,"riscv_topp F_D_inst1", false,-1, 31,0);
    tracep->declBus(c+27,"riscv_topp rs1_data1", false,-1, 31,0);
    tracep->declBus(c+28,"riscv_topp rs2_data1", false,-1, 31,0);
    tracep->declBus(c+92,"riscv_topp D_E_sb_imm", false,-1, 31,0);
    tracep->declBus(c+93,"riscv_topp D_E_u", false,-1, 31,0);
    tracep->declBus(c+94,"riscv_topp D_E_u_imm", false,-1, 31,0);
    tracep->declBus(c+95,"riscv_topp D_E_pc", false,-1, 31,0);
    tracep->declBus(c+96,"riscv_topp E_M_u_imm", false,-1, 31,0);
    tracep->declBus(c+97,"riscv_topp E_M_pc", false,-1, 31,0);
    tracep->declBus(c+98,"riscv_topp M_D_u_imm", false,-1, 31,0);
    tracep->declBus(c+99,"riscv_topp M_D_pc", false,-1, 31,0);
    tracep->declBus(c+100,"riscv_topp F_D_inst", false,-1, 31,0);
    tracep->declBus(c+101,"riscv_topp D_E_alu1_in", false,-1, 31,0);
    tracep->declBus(c+29,"riscv_topp D_E_alu2_in", false,-1, 31,0);
    tracep->declBus(c+102,"riscv_topp F_D_pc", false,-1, 31,0);
    tracep->declBus(c+103,"riscv_topp E_M_alu_o", false,-1, 31,0);
    tracep->declBus(c+104,"riscv_topp M_D_l_d", false,-1, 31,0);
    tracep->declBus(c+105,"riscv_topp M_D_alu_o", false,-1, 31,0);
    tracep->declBus(c+106,"riscv_topp inst", false,-1, 31,0);
    tracep->declBus(c+30,"riscv_topp rd_data", false,-1, 31,0);
    tracep->declBus(c+159,"riscv_topp rs1_data", false,-1, 31,0);
    tracep->declBus(c+160,"riscv_topp rs2_data", false,-1, 31,0);
    tracep->declBus(c+107,"riscv_topp D_E_rs2_data", false,-1, 31,0);
    tracep->declBus(c+108,"riscv_topp E_M_rs2_data", false,-1, 31,0);
    tracep->declBus(c+31,"riscv_topp i_imm", false,-1, 31,0);
    tracep->declBus(c+32,"riscv_topp s_imm", false,-1, 31,0);
    tracep->declBus(c+33,"riscv_topp sb_imm", false,-1, 31,0);
    tracep->declBus(c+34,"riscv_topp u_imm", false,-1, 31,0);
    tracep->declBus(c+35,"riscv_topp uj_imm", false,-1, 31,0);
    tracep->declBus(c+36,"riscv_topp u", false,-1, 31,0);
    tracep->declBus(c+37,"riscv_topp alu_o", false,-1, 31,0);
    tracep->declBus(c+109,"riscv_topp mem_o", false,-1, 31,0);
    tracep->declBus(c+110,"riscv_topp pc", false,-1, 31,0);
    tracep->declBus(c+108,"riscv_topp mem_in", false,-1, 31,0);
    tracep->declBus(c+111,"riscv_topp l_d", false,-1, 31,0);
    tracep->declBus(c+38,"riscv_topp rs1_sltd_data", false,-1, 31,0);
    tracep->declBus(c+39,"riscv_topp rs2_sltd_data", false,-1, 31,0);
    tracep->declQuad(c+112,"riscv_topp F_D", false,-1, 63,0);
    tracep->declQuad(c+114,"riscv_topp F_D1", false,-1, 63,0);
    tracep->declArray(c+40,"riscv_topp D_E", false,-1, 223,0);
    tracep->declArray(c+47,"riscv_topp E_M", false,-1, 144,0);
    tracep->declArray(c+116,"riscv_topp M_D", false,-1, 138,0);
    tracep->declBit(c+155,"riscv_topp fetch1 clk", false,-1);
    tracep->declBit(c+156,"riscv_topp fetch1 reset", false,-1);
    tracep->declBit(c+19,"riscv_topp fetch1 b_en", false,-1);
    tracep->declBit(c+2,"riscv_topp fetch1 UJ_en", false,-1);
    tracep->declBit(c+70,"riscv_topp fetch1 jalr", false,-1);
    tracep->declBit(c+7,"riscv_topp fetch1 stall", false,-1);
    tracep->declBus(c+37,"riscv_topp fetch1 al", false,-1, 31,0);
    tracep->declBus(c+35,"riscv_topp fetch1 UJimm", false,-1, 31,0);
    tracep->declBus(c+92,"riscv_topp fetch1 SBimm", false,-1, 31,0);
    tracep->declBus(c+106,"riscv_topp fetch1 inst", false,-1, 31,0);
    tracep->declBus(c+110,"riscv_topp fetch1 pc", false,-1, 31,0);
    tracep->declBus(c+121,"riscv_topp fetch1 b", false,-1, 23,0);
    tracep->declBit(c+155,"riscv_topp fetch1 pc_counter1 clk", false,-1);
    tracep->declBit(c+156,"riscv_topp fetch1 pc_counter1 reset", false,-1);
    tracep->declBit(c+19,"riscv_topp fetch1 pc_counter1 b_en", false,-1);
    tracep->declBit(c+2,"riscv_topp fetch1 pc_counter1 UJ_en", false,-1);
    tracep->declBit(c+70,"riscv_topp fetch1 pc_counter1 jalr", false,-1);
    tracep->declBit(c+7,"riscv_topp fetch1 pc_counter1 stall", false,-1);
    tracep->declBus(c+37,"riscv_topp fetch1 pc_counter1 al", false,-1, 31,0);
    tracep->declBus(c+35,"riscv_topp fetch1 pc_counter1 UJimm", false,-1, 31,0);
    tracep->declBus(c+92,"riscv_topp fetch1 pc_counter1 SBimm", false,-1, 31,0);
    tracep->declBus(c+110,"riscv_topp fetch1 pc_counter1 PC", false,-1, 31,0);
    tracep->declBus(c+121,"riscv_topp fetch1 instmem1 adr", false,-1, 23,0);
    tracep->declBus(c+106,"riscv_topp fetch1 instmem1 data_out", false,-1, 31,0);
    tracep->declBit(c+59,"riscv_topp hazard_detection_unit1 D_E_ld_en", false,-1);
    tracep->declBus(c+86,"riscv_topp hazard_detection_unit1 D_E_rd_adr", false,-1, 4,0);
    tracep->declBus(c+23,"riscv_topp hazard_detection_unit1 rs1_adr", false,-1, 4,0);
    tracep->declBus(c+24,"riscv_topp hazard_detection_unit1 rs2_adr", false,-1, 4,0);
    tracep->declBit(c+7,"riscv_topp hazard_detection_unit1 stall", false,-1);
    tracep->declBus(c+26,"riscv_topp decoder1 inst", false,-1, 31,0);
    tracep->declBus(c+25,"riscv_topp decoder1 opcode", false,-1, 6,0);
    tracep->declBus(c+52,"riscv_topp decoder1 func7", false,-1, 6,0);
    tracep->declBus(c+20,"riscv_topp decoder1 func3", false,-1, 3,0);
    tracep->declBus(c+22,"riscv_topp decoder1 rd", false,-1, 4,0);
    tracep->declBus(c+23,"riscv_topp decoder1 rs1", false,-1, 4,0);
    tracep->declBus(c+24,"riscv_topp decoder1 rs2", false,-1, 4,0);
    tracep->declBus(c+25,"riscv_topp control_unit1 opcode", false,-1, 6,0);
    tracep->declBit(c+13,"riscv_topp control_unit1 mem_write", false,-1);
    tracep->declBit(c+8,"riscv_topp control_unit1 rd_en", false,-1);
    tracep->declBit(c+9,"riscv_topp control_unit1 rs1_en", false,-1);
    tracep->declBit(c+10,"riscv_topp control_unit1 rs2_en", false,-1);
    tracep->declBit(c+14,"riscv_topp control_unit1 mem_read", false,-1);
    tracep->declBit(c+12,"riscv_topp control_unit1 branch", false,-1);
    tracep->declBit(c+15,"riscv_topp control_unit1 UJ", false,-1);
    tracep->declBit(c+16,"riscv_topp control_unit1 jalr", false,-1);
    tracep->declBit(c+17,"riscv_topp control_unit1 U", false,-1);
    tracep->declBit(c+11,"riscv_topp control_unit1 imm_sel", false,-1);
    tracep->declBit(c+18,"riscv_topp control_unit1 auipc", false,-1);
    tracep->declBit(c+53,"riscv_topp control_unit1 R_type", false,-1);
    tracep->declBit(c+54,"riscv_topp control_unit1 I_type", false,-1);
    tracep->declBus(c+25,"riscv_topp control_unit1 typ_dec1 opcode", false,-1, 6,0);
    tracep->declBit(c+53,"riscv_topp control_unit1 typ_dec1 R_type", false,-1);
    tracep->declBit(c+14,"riscv_topp control_unit1 typ_dec1 load", false,-1);
    tracep->declBit(c+54,"riscv_topp control_unit1 typ_dec1 I_type", false,-1);
    tracep->declBit(c+16,"riscv_topp control_unit1 typ_dec1 jalr", false,-1);
    tracep->declBit(c+13,"riscv_topp control_unit1 typ_dec1 S_type", false,-1);
    tracep->declBit(c+12,"riscv_topp control_unit1 typ_dec1 SB_type", false,-1);
    tracep->declBit(c+17,"riscv_topp control_unit1 typ_dec1 U_type", false,-1);
    tracep->declBit(c+15,"riscv_topp control_unit1 typ_dec1 UJ_type", false,-1);
    tracep->declBit(c+18,"riscv_topp control_unit1 typ_dec1 auipc", false,-1);
    tracep->declBit(c+11,"riscv_topp control_unit1 typ_dec1 imm_sel", false,-1);
    tracep->declBus(c+23,"riscv_topp reg_file1 rs1", false,-1, 4,0);
    tracep->declBus(c+24,"riscv_topp reg_file1 rs2", false,-1, 4,0);
    tracep->declBus(c+90,"riscv_topp reg_file1 rd", false,-1, 4,0);
    tracep->declBit(c+9,"riscv_topp reg_file1 rs1_en", false,-1);
    tracep->declBit(c+10,"riscv_topp reg_file1 rs2_en", false,-1);
    tracep->declBit(c+64,"riscv_topp reg_file1 rd_en", false,-1);
    tracep->declBus(c+30,"riscv_topp reg_file1 rd_data", false,-1, 31,0);
    tracep->declBit(c+155,"riscv_topp reg_file1 clk", false,-1);
    tracep->declBit(c+156,"riscv_topp reg_file1 reset", false,-1);
    tracep->declBus(c+159,"riscv_topp reg_file1 rs1_data", false,-1, 31,0);
    tracep->declBus(c+160,"riscv_topp reg_file1 rs2_data", false,-1, 31,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declBus(c+122+i*1,"riscv_topp reg_file1 regis", true,(i+0), 31,0);}}
    tracep->declBus(c+154,"riscv_topp reg_file1 i", false,-1, 31,0);
    tracep->declBus(c+26,"riscv_topp imm_gen1 inst", false,-1, 31,0);
    tracep->declBus(c+31,"riscv_topp imm_gen1 I", false,-1, 31,0);
    tracep->declBus(c+32,"riscv_topp imm_gen1 S", false,-1, 31,0);
    tracep->declBus(c+33,"riscv_topp imm_gen1 SB", false,-1, 31,0);
    tracep->declBus(c+34,"riscv_topp imm_gen1 U", false,-1, 31,0);
    tracep->declBus(c+35,"riscv_topp imm_gen1 UJ", false,-1, 31,0);
    tracep->declBus(c+25,"riscv_topp alu_con1 opcode", false,-1, 6,0);
    tracep->declBus(c+20,"riscv_topp alu_con1 func3", false,-1, 3,0);
    tracep->declBus(c+21,"riscv_topp alu_con1 alu_sel", false,-1, 3,0);
    tracep->declBus(c+55,"riscv_topp alu_con1 temp", false,-1, 2,0);
    tracep->declBit(c+58,"riscv_topp alu1 branch", false,-1);
    tracep->declBus(c+82,"riscv_topp alu1 func3", false,-1, 3,0);
    tracep->declBus(c+38,"riscv_topp alu1 rs1", false,-1, 31,0);
    tracep->declBus(c+29,"riscv_topp alu1 rs2", false,-1, 31,0);
    tracep->declBus(c+37,"riscv_topp alu1 data_out", false,-1, 31,0);
    tracep->declBus(c+82,"riscv_topp alu1 sel", false,-1, 3,0);
    tracep->declBit(c+63,"riscv_topp forwarding_unit1 E_M_rd_en", false,-1);
    tracep->declBit(c+64,"riscv_topp forwarding_unit1 M_D_rd_en", false,-1);
    tracep->declBus(c+87,"riscv_topp forwarding_unit1 D_E_rs1_adr", false,-1, 4,0);
    tracep->declBus(c+88,"riscv_topp forwarding_unit1 D_E_rs2_adr", false,-1, 4,0);
    tracep->declBus(c+89,"riscv_topp forwarding_unit1 E_M_rd_adr", false,-1, 4,0);
    tracep->declBus(c+90,"riscv_topp forwarding_unit1 M_D_rd_adr", false,-1, 4,0);
    tracep->declBus(c+23,"riscv_topp forwarding_unit1 rs1_adr", false,-1, 4,0);
    tracep->declBus(c+24,"riscv_topp forwarding_unit1 rs2_adr", false,-1, 4,0);
    tracep->declBus(c+79,"riscv_topp forwarding_unit1 forwardA", false,-1, 1,0);
    tracep->declBus(c+80,"riscv_topp forwarding_unit1 forwardB", false,-1, 1,0);
    tracep->declBit(c+157,"riscv_topp forwarding_unit1 forward1", false,-1);
    tracep->declBit(c+158,"riscv_topp forwarding_unit1 forward2", false,-1);
    tracep->declBus(c+85,"riscv_topp datamemory1 WE", false,-1, 3,0);
    tracep->declBus(c+91,"riscv_topp datamemory1 adr", false,-1, 11,0);
    tracep->declBus(c+108,"riscv_topp datamemory1 data_in", false,-1, 31,0);
    tracep->declBit(c+155,"riscv_topp datamemory1 clk", false,-1);
    tracep->declBit(c+60,"riscv_topp datamemory1 ld", false,-1);
    tracep->declBit(c+66,"riscv_topp datamemory1 str", false,-1);
    tracep->declBus(c+109,"riscv_topp datamemory1 data_out", false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_topp___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vriscv_topp___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vriscv_topp___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv_topp___024root__trace_register(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vriscv_topp___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vriscv_topp___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vriscv_topp___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv_topp___024root__trace_full_sub_0(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_topp___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root__trace_full_top_0\n"); );
    // Init
    Vriscv_topp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_topp___024root*>(voidSelf);
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_topp___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vriscv_topp___024root__trace_full_sub_0(Vriscv_topp___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_topp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_topp___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->riscv_topp__DOT__jalr_en1));
    tracep->fullBit(oldp+2,(vlSelf->riscv_topp__DOT__UJ_en1));
    tracep->fullBit(oldp+3,(vlSelf->riscv_topp__DOT__branch1));
    tracep->fullBit(oldp+4,(vlSelf->riscv_topp__DOT__ld_en1));
    tracep->fullBit(oldp+5,(vlSelf->riscv_topp__DOT__rd_en1));
    tracep->fullBit(oldp+6,(vlSelf->riscv_topp__DOT__str_en1));
    tracep->fullBit(oldp+7,(vlSelf->riscv_topp__DOT__stall));
    tracep->fullBit(oldp+8,(((((((IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type) 
                                 | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type)) 
                                | (3U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                               | (0x6fU == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                              | (IData)(vlSelf->riscv_topp__DOT__U_en)) 
                             | (0x67U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)))));
    tracep->fullBit(oldp+9,(((((0x63U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                               | (0x23U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                              | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type)) 
                             | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type))));
    tracep->fullBit(oldp+10,((((IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type) 
                               | (0x23U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                              | (0x63U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)))));
    tracep->fullBit(oldp+11,((((((0x1bU == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                 | (0x13U == (0x7fU 
                                              & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                | (3U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                               | (0x67U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                              | (0x23U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)))));
    tracep->fullBit(oldp+12,((0x63U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
    tracep->fullBit(oldp+13,((0x23U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
    tracep->fullBit(oldp+14,((3U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
    tracep->fullBit(oldp+15,((0x6fU == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
    tracep->fullBit(oldp+16,((0x67U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
    tracep->fullBit(oldp+17,(vlSelf->riscv_topp__DOT__U_en));
    tracep->fullBit(oldp+18,((0x17U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1))));
    tracep->fullBit(oldp+19,(vlSelf->riscv_topp__DOT__b_en));
    tracep->fullCData(oldp+20,(vlSelf->riscv_topp__DOT__func3),4);
    tracep->fullCData(oldp+21,((((3U == (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                 | (0x23U == (0x7fU 
                                              & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                 ? 9U : (((0x33U == 
                                           (0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                          | (0x3bU 
                                             == (0x7fU 
                                                 & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                          ? (IData)(vlSelf->riscv_topp__DOT__func3)
                                          : (((0x13U 
                                               == (0x7fU 
                                                   & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                              | (0x1bU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                              ? ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->riscv_topp__DOT__func3)))
                                                  ? (IData)(vlSelf->riscv_topp__DOT__func3)
                                                  : 
                                                 (7U 
                                                  & (IData)(vlSelf->riscv_topp__DOT__func3)))
                                              : (7U 
                                                 & (IData)(vlSelf->riscv_topp__DOT__func3)))))),4);
    tracep->fullCData(oldp+22,((0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                         >> 7U))),5);
    tracep->fullCData(oldp+23,((0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+24,((0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+25,((0x7fU & vlSelf->riscv_topp__DOT__F_D_inst1)),7);
    tracep->fullIData(oldp+26,(vlSelf->riscv_topp__DOT__F_D_inst1),32);
    tracep->fullIData(oldp+27,(vlSelf->riscv_topp__DOT__rs1_data1),32);
    tracep->fullIData(oldp+28,(vlSelf->riscv_topp__DOT__rs2_data1),32);
    tracep->fullIData(oldp+29,(vlSelf->riscv_topp__DOT__D_E_alu2_in),32);
    tracep->fullIData(oldp+30,(vlSelf->riscv_topp__DOT__rd_data),32);
    tracep->fullIData(oldp+31,((((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
                                             >> 0x1fU))) 
                                 << 0xcU) | (vlSelf->riscv_topp__DOT__F_D_inst1 
                                             >> 0x14U))),32);
    tracep->fullIData(oldp+32,((((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
                                             >> 0x1fU))) 
                                 << 0xcU) | ((0xfe0U 
                                              & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                                   >> 7U))))),32);
    tracep->fullIData(oldp+33,((((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
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
    tracep->fullIData(oldp+34,((0xfffff000U & vlSelf->riscv_topp__DOT__F_D_inst1)),32);
    tracep->fullIData(oldp+35,((((- (IData)((vlSelf->riscv_topp__DOT__F_D_inst1 
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
    tracep->fullIData(oldp+36,(vlSelf->riscv_topp__DOT__u),32);
    tracep->fullIData(oldp+37,(vlSelf->riscv_topp__DOT__alu_o),32);
    tracep->fullIData(oldp+38,(vlSelf->riscv_topp__DOT__rs1_sltd_data),32);
    tracep->fullIData(oldp+39,(vlSelf->riscv_topp__DOT__rs2_sltd_data),32);
    tracep->fullWData(oldp+40,(vlSelf->riscv_topp__DOT__D_E),224);
    tracep->fullWData(oldp+47,(vlSelf->riscv_topp__DOT__E_M),145);
    tracep->fullCData(oldp+52,((vlSelf->riscv_topp__DOT__F_D_inst1 
                                >> 0x19U)),7);
    tracep->fullBit(oldp+53,(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type));
    tracep->fullBit(oldp+54,(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type));
    tracep->fullCData(oldp+55,((7U & (IData)(vlSelf->riscv_topp__DOT__func3))),3);
    tracep->fullBit(oldp+56,(vlSelf->riscv_topp__DOT__E_M_b_en));
    tracep->fullBit(oldp+57,(vlSelf->riscv_topp__DOT__D_E_imm_sel));
    tracep->fullBit(oldp+58,(vlSelf->riscv_topp__DOT__D_E_branch));
    tracep->fullBit(oldp+59,(vlSelf->riscv_topp__DOT__D_E_ld_en));
    tracep->fullBit(oldp+60,(vlSelf->riscv_topp__DOT__E_M_ld_en));
    tracep->fullBit(oldp+61,(vlSelf->riscv_topp__DOT__M_D_ld_en));
    tracep->fullBit(oldp+62,(vlSelf->riscv_topp__DOT__D_E_rd_en));
    tracep->fullBit(oldp+63,(vlSelf->riscv_topp__DOT__E_M_rd_en));
    tracep->fullBit(oldp+64,(vlSelf->riscv_topp__DOT__M_D_rd_en));
    tracep->fullBit(oldp+65,(vlSelf->riscv_topp__DOT__D_E_str_en));
    tracep->fullBit(oldp+66,(vlSelf->riscv_topp__DOT__E_M_str_en));
    tracep->fullBit(oldp+67,(vlSelf->riscv_topp__DOT__D_E_UJ_en));
    tracep->fullBit(oldp+68,(vlSelf->riscv_topp__DOT__E_M_UJ_en));
    tracep->fullBit(oldp+69,(vlSelf->riscv_topp__DOT__M_D_UJ_en));
    tracep->fullBit(oldp+70,(vlSelf->riscv_topp__DOT__D_E_jalr_en));
    tracep->fullBit(oldp+71,(vlSelf->riscv_topp__DOT__E_M_jalr_en));
    tracep->fullBit(oldp+72,(vlSelf->riscv_topp__DOT__M_D_jalr_en));
    tracep->fullBit(oldp+73,(vlSelf->riscv_topp__DOT__D_E_U_en));
    tracep->fullBit(oldp+74,(vlSelf->riscv_topp__DOT__E_M_U_en));
    tracep->fullBit(oldp+75,(vlSelf->riscv_topp__DOT__M_D_U_en));
    tracep->fullBit(oldp+76,(vlSelf->riscv_topp__DOT__D_E_auipc_en));
    tracep->fullBit(oldp+77,(vlSelf->riscv_topp__DOT__E_M_auipc_en));
    tracep->fullBit(oldp+78,(vlSelf->riscv_topp__DOT__M_D_auipc_en));
    tracep->fullCData(oldp+79,(vlSelf->riscv_topp__DOT__forwardA),2);
    tracep->fullCData(oldp+80,(vlSelf->riscv_topp__DOT__forwardB),2);
    tracep->fullCData(oldp+81,(vlSelf->riscv_topp__DOT__con3),3);
    tracep->fullCData(oldp+82,(vlSelf->riscv_topp__DOT__D_E_alu_sel),4);
    tracep->fullCData(oldp+83,(vlSelf->riscv_topp__DOT__D_E_func3),4);
    tracep->fullCData(oldp+84,(vlSelf->riscv_topp__DOT__E_M_func3),4);
    tracep->fullCData(oldp+85,(vlSelf->riscv_topp__DOT__WE),4);
    tracep->fullCData(oldp+86,(vlSelf->riscv_topp__DOT__D_E_rd_adr),5);
    tracep->fullCData(oldp+87,(vlSelf->riscv_topp__DOT__D_E_rs1_adr),5);
    tracep->fullCData(oldp+88,(vlSelf->riscv_topp__DOT__D_E_rs2_adr),5);
    tracep->fullCData(oldp+89,(vlSelf->riscv_topp__DOT__E_M_rd_adr),5);
    tracep->fullCData(oldp+90,(vlSelf->riscv_topp__DOT__M_D_rd_adr),5);
    tracep->fullSData(oldp+91,((0xfffU & (vlSelf->riscv_topp__DOT__E_M_alu_o 
                                          >> 2U))),12);
    tracep->fullIData(oldp+92,(vlSelf->riscv_topp__DOT__D_E_sb_imm),32);
    tracep->fullIData(oldp+93,(vlSelf->riscv_topp__DOT__D_E_u),32);
    tracep->fullIData(oldp+94,(vlSelf->riscv_topp__DOT__D_E_u_imm),32);
    tracep->fullIData(oldp+95,(vlSelf->riscv_topp__DOT__D_E_pc),32);
    tracep->fullIData(oldp+96,(vlSelf->riscv_topp__DOT__E_M_u_imm),32);
    tracep->fullIData(oldp+97,(vlSelf->riscv_topp__DOT__E_M_pc),32);
    tracep->fullIData(oldp+98,(vlSelf->riscv_topp__DOT__M_D_u_imm),32);
    tracep->fullIData(oldp+99,(vlSelf->riscv_topp__DOT__M_D_pc),32);
    tracep->fullIData(oldp+100,(vlSelf->riscv_topp__DOT__F_D_inst),32);
    tracep->fullIData(oldp+101,(vlSelf->riscv_topp__DOT__D_E_alu1_in),32);
    tracep->fullIData(oldp+102,(vlSelf->riscv_topp__DOT__F_D_pc),32);
    tracep->fullIData(oldp+103,(vlSelf->riscv_topp__DOT__E_M_alu_o),32);
    tracep->fullIData(oldp+104,(vlSelf->riscv_topp__DOT__M_D_l_d),32);
    tracep->fullIData(oldp+105,(vlSelf->riscv_topp__DOT__M_D_alu_o),32);
    tracep->fullIData(oldp+106,(vlSelf->riscv_topp__DOT__fetch1__DOT__instmem1__DOT__mem
                                [(0xffffffU & (vlSelf->riscv_topp__DOT__pc 
                                               >> 2U))]),32);
    tracep->fullIData(oldp+107,(vlSelf->riscv_topp__DOT__D_E_rs2_data),32);
    tracep->fullIData(oldp+108,(vlSelf->riscv_topp__DOT__E_M_rs2_data),32);
    tracep->fullIData(oldp+109,(vlSelf->riscv_topp__DOT__mem_o),32);
    tracep->fullIData(oldp+110,(vlSelf->riscv_topp__DOT__pc),32);
    tracep->fullIData(oldp+111,(vlSelf->riscv_topp__DOT__l_d),32);
    tracep->fullQData(oldp+112,(vlSelf->riscv_topp__DOT__F_D),64);
    tracep->fullQData(oldp+114,(vlSelf->riscv_topp__DOT__F_D1),64);
    tracep->fullWData(oldp+116,(vlSelf->riscv_topp__DOT__M_D),139);
    tracep->fullIData(oldp+121,((0xffffffU & (vlSelf->riscv_topp__DOT__pc 
                                              >> 2U))),24);
    tracep->fullIData(oldp+122,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[0]),32);
    tracep->fullIData(oldp+123,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[1]),32);
    tracep->fullIData(oldp+124,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[2]),32);
    tracep->fullIData(oldp+125,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[3]),32);
    tracep->fullIData(oldp+126,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[4]),32);
    tracep->fullIData(oldp+127,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[5]),32);
    tracep->fullIData(oldp+128,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[6]),32);
    tracep->fullIData(oldp+129,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[7]),32);
    tracep->fullIData(oldp+130,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[8]),32);
    tracep->fullIData(oldp+131,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[9]),32);
    tracep->fullIData(oldp+132,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[10]),32);
    tracep->fullIData(oldp+133,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[11]),32);
    tracep->fullIData(oldp+134,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[12]),32);
    tracep->fullIData(oldp+135,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[13]),32);
    tracep->fullIData(oldp+136,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[14]),32);
    tracep->fullIData(oldp+137,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[15]),32);
    tracep->fullIData(oldp+138,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[16]),32);
    tracep->fullIData(oldp+139,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[17]),32);
    tracep->fullIData(oldp+140,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[18]),32);
    tracep->fullIData(oldp+141,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[19]),32);
    tracep->fullIData(oldp+142,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[20]),32);
    tracep->fullIData(oldp+143,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[21]),32);
    tracep->fullIData(oldp+144,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[22]),32);
    tracep->fullIData(oldp+145,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[23]),32);
    tracep->fullIData(oldp+146,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[24]),32);
    tracep->fullIData(oldp+147,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[25]),32);
    tracep->fullIData(oldp+148,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[26]),32);
    tracep->fullIData(oldp+149,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[27]),32);
    tracep->fullIData(oldp+150,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[28]),32);
    tracep->fullIData(oldp+151,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[29]),32);
    tracep->fullIData(oldp+152,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[30]),32);
    tracep->fullIData(oldp+153,(vlSelf->riscv_topp__DOT__reg_file1__DOT__regis[31]),32);
    tracep->fullIData(oldp+154,(vlSelf->riscv_topp__DOT__reg_file1__DOT__i),32);
    tracep->fullBit(oldp+155,(vlSelf->clk));
    tracep->fullBit(oldp+156,(vlSelf->reset));
    tracep->fullBit(oldp+157,((((IData)(vlSelf->riscv_topp__DOT__M_D_rd_en) 
                                & (0U != (IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr))) 
                               & ((IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr) 
                                  == (0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                               >> 0xfU))))));
    tracep->fullBit(oldp+158,((((IData)(vlSelf->riscv_topp__DOT__M_D_rd_en) 
                                & (0U != (IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr))) 
                               & ((IData)(vlSelf->riscv_topp__DOT__M_D_rd_adr) 
                                  == (0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                               >> 0x14U))))));
    tracep->fullIData(oldp+159,((((((0x63U == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                   | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__I_type)) 
                                  | (IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type))
                                  ? vlSelf->riscv_topp__DOT__reg_file1__DOT__regis
                                 [(0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                            >> 0xfU))]
                                  : 0U)),32);
    tracep->fullIData(oldp+160,(((((IData)(vlSelf->riscv_topp__DOT__control_unit1__DOT__R_type) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->riscv_topp__DOT__F_D_inst1))) 
                                  | (0x63U == (0x7fU 
                                               & vlSelf->riscv_topp__DOT__F_D_inst1)))
                                  ? vlSelf->riscv_topp__DOT__reg_file1__DOT__regis
                                 [(0x1fU & (vlSelf->riscv_topp__DOT__F_D_inst1 
                                            >> 0x14U))]
                                  : 0U)),32);
}
