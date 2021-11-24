module instmem(
  input  logic [23:0]  adr,
  output logic [31:0]  data_out
 );
  logic [31:0] mem [0:16777215];
  
 initial begin
  $readmemh("inst.mem",mem);
 end
  
 always_comb begin
        data_out= mem[adr];   
 end
endmodule

