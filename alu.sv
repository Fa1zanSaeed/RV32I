module alu(
  input  logic   branch,
  input  logic [3:0]  func3,
  input  logic [31:0] rs1,rs2,
  output logic [31:0]  data_out);
  logic [3:0] sel;
  assign sel =func3;
  always_comb
  begin
      
      case (sel)
         4'd0: if (branch==1) begin
           data_out= ($signed(rs1)==$signed(rs2))? 32'd1 : 32'd0;
                end else begin
                data_out= rs1+rs2;
                end
         4'd1:  if (branch==1) begin
           data_out= ($signed(rs1)!=$signed(rs2))? 32'd1 : 32'd0;
                end else begin
                data_out= rs1<<rs2;
                end
         4'd2:  data_out= ($signed(rs1)<$signed(rs2))? 32'd1:32'd0;
         4'd3:  data_out= ($unsigned(rs1)<$unsigned(rs2))? 32'd1:32'd0;
         4'd4:  if (branch==1) begin
           data_out= ($signed(rs1)<$signed(rs2))? 32'd1 : 32'd0;
                end else begin
                data_out= rs1^rs2;
                end
         4'd5:  if (branch==1) begin
           data_out= ($signed(rs1)>=$signed(rs2))? 32'd1 : 32'd0;
                end else begin
                data_out= rs1>>rs2;
                end
         4'd6:  if (branch==1) begin
           data_out= ($unsigned(rs1)<$unsigned(rs2))? 32'd1 : 32'd0;
                end else begin
                data_out= rs1|rs2;
                end
         4'd7:  if (branch==1) begin
           data_out= ($unsigned(rs1)>=$unsigned(rs2))? 32'd1 : 32'd0;
                end else begin
                data_out= rs1 & rs2;
                end
         4'd8:  data_out= rs1-rs2;
         4'd9:  data_out= rs1+rs2;
         4'd13:  data_out= rs1>>>rs2;
         default: data_out=32'd0;
         
      endcase
  end
endmodule
