module datamemory(
  input  logic [3:0] WE,
  input  logic [11:0]  adr,
  input  logic [31:0]  data_in,
  input  logic  clk,ld,str,
  output logic [31:0]  data_out);
 logic [31:0] mem [0:4095];

  always @(posedge clk )
  begin
      if (str) begin
        if (WE[0]) mem[adr][ 7: 0] <= data_in[ 7: 0];
        if (WE[1]) mem[adr][15: 8] <= data_in[15: 8];
        if (WE[2]) mem[adr][23:16] <= data_in[23:16];
        if (WE[3]) mem[adr][31:24] <= data_in[31:24];
      end
  end
  
  always_comb begin
      if (ld==1) begin
          data_out = mem[adr];
      end else begin
          data_out = 32'd0;
      end

  end
    
endmodule
