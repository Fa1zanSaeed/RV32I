module control_unit(
  input  logic [6:0]  opcode,
  output  logic  mem_write,rd_en,rs1_en,rs2_en,mem_read,branch,UJ,jalr,U,imm_sel,auipc 
);

  logic R_type,I_type;
  
  typ_dec typ_dec1(.opcode(opcode),
             .R_type(R_type),
             .load(mem_read),
             .I_type(I_type),
             .jalr(jalr),
             .S_type(mem_write),
             .SB_type(branch),
             .U_type(U),
             .UJ_type(UJ),
             .auipc(auipc),
             .imm_sel(imm_sel));
  always_comb begin  
     
     rd_en = R_type || I_type || mem_read || UJ || U || jalr;
     rs1_en = branch || mem_write || I_type || R_type;
     rs2_en = R_type || mem_write || branch;
     
  end
endmodule

