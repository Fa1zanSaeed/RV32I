module hazard_detection_unit(
  input  logic       D_E_ld_en,
  input  logic       D_E_rd_en,
  input  logic [4:0] D_E_rd_adr,
  input  logic [4:0] rs1_adr,
  input  logic [4:0] rs2_adr,
  output logic       stall
 );

 always_comb begin
   if (D_E_ld_en == 1 && (D_E_rd_adr == rs1_adr || D_E_rd_adr == rs2_adr) && D_E_rd_adr != 5'd0) begin
     stall = 1'b1;
   end else begin
     stall = 1'b0;
   end
 end

endmodule

