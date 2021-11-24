module pc_counter(
  input  logic clk,reset,b_en,UJ_en,jalr,stall,
  input  logic [31:0] al,UJimm,SBimm,
  output logic [31:0] PC
  );
  
  initial begin
   PC= 0;
  end
 always @(posedge clk) begin
    if (reset) begin
     PC <= 0;
    end else if (clk) begin
      if (jalr==1) begin
       PC <= al ;
      end else if (UJ_en==1) begin
         PC <= PC + UJimm -4;
      end else if (b_en==1) begin
         PC <= PC + SBimm -8;
      end else if (stall==1) begin
         PC <= PC;
      end else begin
         PC<=PC + 4;
      end
    end
  end
endmodule

