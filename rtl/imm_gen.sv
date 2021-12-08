module imm_gen(
  input  logic [31:0] inst,
  output logic [31:0] I,
  output logic [31:0] S,
  output logic [31:0] SB,
  output logic [31:0] U,
  output logic [31:0] UJ
  );
  
 always_comb begin
      
    I  = {{20{inst[31]}},inst[31:20]};
    
    S  = {{20{inst[31]}},inst[31:25],inst[11:7]};
    
    SB = {{19{inst[31]}},inst[31],inst[7],inst[30:25],inst[11:8],1'b0};      
    
    U  = {inst[31:12],12'd0};
    
    UJ = {{11{inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};
      
 end  
endmodule
