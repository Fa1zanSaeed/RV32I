module instmem(
  input  logic clk,
  input  logic [11:0]  adr,
  output logic [31:0]  data_out
 );
  logic [31:0] mem [0:4095];
  
 initial begin
  $readmemh("inst.mem",mem);
 end
  
 always @(posedge clk) begin
        data_out <= mem[adr];   
 end
endmodule

