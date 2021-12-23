module fetch(
  input  logic        clk,
  input  logic        reset,
  input  logic        b_en,
  input  logic        UJ_en,
  input  logic        jalr,
  input  logic        stall,
  input  logic [31:0] al,
  input  logic [31:0] UJimm,
  input  logic [31:0] SBimm,
  output logic [31:0] pc,
  output logic [11:0] instmem_adr
  
 );
  
  assign instmem_adr = pc [13:2];

  pc_counter i_pc_counter(
   .reset (reset),
   .clk   (clk  ),
   .PC_o  (pc   ),
   .b_en  (b_en ),
   .UJ_en (UJ_en),
   .jalr  (jalr ),
   .al    (al   ),
   .UJimm (UJimm),
   .SBimm (SBimm),
   .stall (stall)
  );
  
endmodule
