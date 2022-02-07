module forwarding_unit(
  input  logic       E_M_rd_en,
  input  logic       M_D_rd_en,
  input  logic       E_M_UJ_en,
  input  logic       M_D_UJ_en,
  input  logic       E_M_jalr_en,
  input  logic       M_D_jalr_en,
  input  logic       E_M_U_en,
  input  logic       M_D_U_en,
  input  logic       E_M_auipc_en,
  input  logic       M_D_auipc_en,
  input  logic [4:0] D_E_rs1_adr,
  input  logic [4:0] D_E_rs2_adr,
  input  logic [4:0] E_M_rd_adr,
  input  logic [4:0] M_D_rd_adr,
  input  logic [4:0] rs1_adr,
  input  logic [4:0] rs2_adr,
  output logic [3:0] forwardA,
  output logic [3:0] forwardB,
  output logic       forward1,
  output logic       forward2
 );

 always_comb begin

   if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr && E_M_UJ_en!=1 && E_M_jalr_en!=1 && E_M_U_en!=1 && E_M_auipc_en!=1) begin
     forwardA = 4'b0001;
   end else if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr && (E_M_UJ_en==1 || E_M_jalr_en==1) && E_M_U_en!=1 && E_M_auipc_en!=1) begin
     forwardA = 4'b0010;
   end else if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr && E_M_UJ_en!=1 && E_M_jalr_en!=1 && E_M_U_en==1 && E_M_auipc_en==1) begin
     forwardA = 4'b0011;
   end else if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr && E_M_UJ_en!=1 && E_M_jalr_en!=1 && E_M_U_en==1 && E_M_auipc_en!=1) begin
     forwardA = 4'b0100;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr) && M_D_rd_adr==D_E_rs1_adr && M_D_UJ_en!=1 && M_D_jalr_en!=1 && M_D_U_en!=1 && M_D_auipc_en!=1) begin
     forwardA = 4'b0101;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr) && M_D_rd_adr==D_E_rs1_adr && (M_D_UJ_en==1 || M_D_jalr_en==1) && M_D_U_en!=1 && M_D_auipc_en!=1) begin
     forwardA = 4'b0110;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr) && M_D_rd_adr==D_E_rs1_adr && M_D_UJ_en!=1 && M_D_jalr_en!=1 && M_D_U_en==1 && M_D_auipc_en==1) begin
     forwardA = 4'b0111;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs1_adr) && M_D_rd_adr==D_E_rs1_adr && M_D_UJ_en!=1 && M_D_jalr_en!=1 && M_D_U_en==1 && M_D_auipc_en!=1) begin
     forwardA = 4'b1000;
   end else begin
     forwardA = 4'b0000;
   end
   
   if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr && E_M_UJ_en!=1 && E_M_jalr_en!=1 && E_M_U_en!=1 && E_M_auipc_en!=1) begin
     forwardB = 4'b0001;
   end else if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr && (E_M_UJ_en==1 || E_M_jalr_en==1) && E_M_U_en!=1 && E_M_auipc_en!=1) begin
     forwardB = 4'b0010;
   end else if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr && E_M_UJ_en!=1 && E_M_jalr_en!=1 && E_M_U_en==1 && E_M_auipc_en==1) begin
     forwardB = 4'b0011;
   end else if (E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr && E_M_UJ_en!=1 && E_M_jalr_en!=1 && E_M_U_en==1 && E_M_auipc_en!=1) begin
     forwardB = 4'b0100;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr) && M_D_rd_adr==D_E_rs2_adr && M_D_UJ_en!=1 && M_D_jalr_en!=1 && M_D_U_en!=1 && M_D_auipc_en!=1) begin
     forwardB = 4'b0101;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr) && M_D_rd_adr==D_E_rs2_adr && (M_D_UJ_en==1 || M_D_jalr_en==1) && M_D_U_en!=1 && M_D_auipc_en!=1) begin
     forwardB = 4'b0110;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr) && M_D_rd_adr==D_E_rs2_adr && M_D_UJ_en!=1 && M_D_jalr_en!=1 && M_D_U_en==1 && M_D_auipc_en==1) begin
     forwardB = 4'b0111;
   end else if (M_D_rd_en==1 && M_D_rd_adr!=5'd0 && !(E_M_rd_en==1 && E_M_rd_adr!=5'd0 && E_M_rd_adr==D_E_rs2_adr) && M_D_rd_adr==D_E_rs2_adr && M_D_UJ_en!=1 && M_D_jalr_en!=1 && M_D_U_en==1 && M_D_auipc_en!=1) begin
     forwardB = 4'b1000;
   end else begin
     forwardB = 4'b0000;
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

