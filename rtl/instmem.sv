module instmem(
  input  logic         clk,
  input  logic         EN_i,
  input  logic [ 3:0]  WE_i,
  input  logic [31:0]  data_in,
  input  logic [11:0]  adr,
  output logic [31:0]  data_out
 );
  logic [31:0] mem [0:4095];
  
 initial begin
  $readmemh("inst.mem",mem);
 end
  
 always @(posedge clk) begin
   if (EN_i) begin
     data_out <= mem[adr];
     if (WE_i[0]==1) mem[adr][ 7: 0] <= data_in[ 7: 0];
     if (WE_i[1]==1) mem[adr][15: 8] <= data_in[15: 8];
     if (WE_i[2]==1) mem[adr][23:16] <= data_in[23:16];
     if (WE_i[3]==1) mem[adr][31:24] <= data_in[31:24];
   end
 end
endmodule
