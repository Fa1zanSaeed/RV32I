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
  output logic [31:0] inst,
  output logic [31:0] pc
 );
  
  logic [11:0] b;

  pc_counter i_pc_counter(
   .reset(reset),
   .clk(clk),
   .PC(pc),
   .b_en(b_en),
   .UJ_en(UJ_en),
   .jalr(jalr),
   .al(al),
   .UJimm(UJimm),
   .SBimm(SBimm),
   .stall(stall)
  );
  
  instmem i_instmem(
   .clk(clk),
   .adr(b),
   .data_in(),
   .WE(),
   .EN(1'b1),
   .data_out(inst)
  ); 

 always_comb begin
  b [11:0] =  pc [13:2];
 end

endmodule
