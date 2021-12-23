module pc_counter(
  input  logic        clk,
  input  logic        reset,
  input  logic        b_en,
  input  logic        UJ_en,
  input  logic        jalr,
  input  logic        stall,
  input  logic [31:0] al,
  input  logic [31:0] UJimm,
  input  logic [31:0] SBimm,
  output logic [31:0] PC_o
 );
  
  initial begin
   PC_o= 0;
  end

 always @(posedge clk) begin
    if (!reset) begin
     PC_o <= 0;
    end else if (clk) begin
      if (jalr==1) begin
        PC_o <= al ;
      end else if (UJ_en==1) begin
        PC_o <= PC_o + UJimm - 4;
      end else if (b_en==1) begin
        PC_o <= PC_o + SBimm - 8;
      end else if (stall==1) begin
        PC_o <= PC_o - 4;
      end else begin
        PC_o <= PC_o + 4;
      end
    end
 end
endmodule
