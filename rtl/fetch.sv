module fetch(
  input logic clk,reset,b_en,UJ_en,jalr,stall,
  input logic [31:0] al,UJimm,SBimm,
  output logic [31:0] inst,
  output logic [31:0] pc);
  
 logic [23:0] b;
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
  
    

 instmem instmem1(.adr(b),
              .data_out(inst)); 
  
  always_comb begin
     b [23:0] =  pc [25:2];
  end
endmodule

