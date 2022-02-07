module csr(
  input  logic [31:0] csr_wdata_i, //rs1_data
  input  logic        clk,
  input  logic [11:0] csr_adr,
  input  logic [ 1:0] csr_op_ctr,
  output logic        illegal_csr,
  output logic [31:0] csr_rdata_o  //rd_data
 );
  logic [31:0] csr_rdata_int;
  logic [31:0] csr_wdata_int;


  

  //  misa
  logic [31:0] misa;
  assign misa[ 5: 0] = {6'd0}; 
  assign misa[10: 6] = {2'd0,1'd1,2'd0}; 
  assign misa[15:11] = {5'd0}; 
  assign misa[20:16] = {5'd0}; 
  assign misa[25:21] = {5'd0}; 
  assign misa[29:26] = {4'd0}; 
  assign misa[31:30] = {2'd1};
 
  logic [31:0] mvendorid;
  logic [31:0] marchid;
  logic [31:0] mimpid;
  // mvendorid
  assign mvendorid = 32'd0;

  // marchid
  assign marchid = {1'b0,31'd0};
  // mimpid
  assign mimpid =32'd0;

  logic rd_en;
  logic wr_en;
 
 // For read 
 always_comb begin

   csr_rdata_int = '0;
   illegal_csr   = 1'b0;
   rd_en=1'b0;
   wr_en=1'b0;


 
   case (csr_adr)
   12'h301: begin
             csr_rdata_int = misa;
             wr_en=1'b0;             
            end
   12'hf11: begin
             csr_rdata_int = mvendorid;
             wr_en=1'b0;             
            end
   12'hf12: begin
             csr_rdata_int = marchid;
             wr_en=1'b0;             
            end
   12'hf13: begin
             csr_rdata_int = mimpid;
             wr_en=1'b0;             
            end

   default: begin
              illegal_csr = 1'b1;
            end


   endcase
 end

 // For write 
 always_comb begin
   if (wr_en) begin
     case (csr_adr)

     default:;
     endcase
   end
 end

 always_comb begin

   if (csr_op_ctr == 2'd0) begin
     csr_wdata_int = csr_wdata_i;                  //For read and write 
   end else 
   if (csr_op_ctr == 2'd1) begin
     csr_wdata_int = csr_wdata_i | csr_rdata_o;    //For read and set
   end else
   if (csr_op_ctr == 2'd2) begin
     csr_wdata_int = (~csr_wdata_i) & csr_rdata_o; //For read and clear
   end else begin
     csr_wdata_int = csr_wdata_i;
   end

   end

 logic [31:0] rd_data_o;
 assign csr_rdata_o = csr_rdata_int;
 logic [31:0] rdata_q;
 always_ff @(posedge clk) begin
   if (wr_en) begin
     rdata_q <= csr_wdata_int;
   end
 end
 
 assign rd_data_o = rdata_q;

endmodule
