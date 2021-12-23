module imm_gen(
  input  logic [31:0] inst,
  output logic [31:0] I_imm,
  output logic [31:0] S_imm,
  output logic [31:0] SB_imm,
  output logic [31:0] U_imm,
  output logic [31:0] UJ_imm,
  output logic [31:0] CSR_imm
 );
  
 always_comb begin
      
    I_imm   = {{20{inst[31]}},inst[31:20]};
     
    S_imm   = {{20{inst[31]}},inst[31:25],inst[11:7]};
     
    SB_imm  = {{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};      
     
    U_imm   = {inst[31:12],12'd0};
     
    UJ_imm  = {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
 
    CSR_imm = {{27{1'b0}},inst[19:15]};
         
 end  
endmodule
