module forwarding_unit(
  input  logic E_M_rd_en,M_D_rd_en,
  input  logic [4:0] D_E_rs1_adr,D_E_rs2_adr,E_M_rd_adr,M_D_rd_adr,rs1_adr,rs2_adr,
  output logic [1:0] forwardA,forwardB,
  output logic forward1,forward2);

always_comb begin

   if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr) begin
     forwardA = 2'b10;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr) && M_D_rd_adr==D_E_rs1_adr) begin
     forwardA = 2'b01;
   end else begin
     forwardA = 2'b00;
   end
   
   if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr) begin
     forwardB = 2'b10;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr) && M_D_rd_adr==D_E_rs2_adr) begin
     forwardB = 2'b01;
   end else begin
     forwardB = 2'b00;
   end
   
   if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && M_D_rd_adr==rs1_adr) begin
     forward1 = 1'b1;
   end else begin
     forward1 = 1'b0;
   end
   if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && M_D_rd_adr==rs2_adr) begin
     forward2 = 1'b1;
   end else begin
     forward2 = 1'b0;
   end


 end



endmodule
