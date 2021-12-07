module fetch(
  input logic clk,reset,b_en,UJ_en,jalr,stall,
  input logic [31:0] al,UJimm,SBimm,
  output logic [31:0] inst,
  output logic [31:0] pc);
  
 logic [11:0] b;
 pc_counter pc_counter1(.reset(reset),
               .clk(clk),
               .PC(pc),
               .b_en(b_en),
               .UJ_en(UJ_en),
               .jalr(jalr),
               .al(al),
               .UJimm(UJimm),
               .SBimm(SBimm),
               .stall(stall));
  
    

 instmem instmem1(.clk(clk),
              .adr(b),
              .data_in(),
              .WE(),
              .EN(1'b1),
              .data_out(inst)); 
  always_comb begin
     b [11:0] =  pc [13:2];
  end
endmodule

