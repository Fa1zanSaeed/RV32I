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
  output logic [31:0] PC_o
  
 );
 always @(posedge clk) begin
    if (!reset) begin
     PC_o <= 32'd0;
    end else if (jalr==1) begin
        PC_o <= al ;
    end else if (UJ_en==1) begin
        PC_o <= PC_o + UJimm - 32'd4;
    end else if (b_en==1) begin
        PC_o <= PC_o + SBimm - 32'd8;
    end else if (stall==1) begin
        PC_o <= PC_o - 32'd4;
    end else begin
        PC_o <= PC_o + 32'd4;
    end
 end
  
endmodule
