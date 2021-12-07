module reg_file(
  input logic [4:0] rs1,rs2,rd,
  input logic rs1_en,rs2_en,rd_en,
  input logic [31:0] rd_data,
  input logic clk,reset,
  output logic [31:0] rs1_data,rs2_data);
  
   reg [31:0] regis [0:31];
   integer i;
  always @ (posedge clk) begin     
    if(reset==1) begin
      for ( i=0;i<32;i++) begin
         regis[i] <= 32'd0;
      end
    end else begin
      if (rd_en==1) begin
         regis[rd] <= rd_data;
      end
    end
  end
  always_comb begin
    if (rs1_en==1) begin
       rs1_data = regis[rs1];
    end else begin
       rs1_data = 32'd0;
    end
    if (rs2_en==1) begin
       rs2_data = regis[rs2];
    end else begin
       rs2_data = 32'd0;
    end
  end  
      
  assign regis[0] = 32'd0;     
   
endmodule

