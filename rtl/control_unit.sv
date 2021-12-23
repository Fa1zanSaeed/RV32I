module control_unit(
  input  logic [31:0] inst,
  output logic [ 6:0] opcode,
  output logic [ 6:0] func7,
  output logic [ 3:0] func3,
  output logic [ 4:0] rd_adr,
  output logic [ 4:0] rs1_adr,
  output logic [ 4:0] rs2_adr,
  output logic        mem_write,
  output logic        rd_en,
  output logic        rs1_en,
  output logic        rs2_en,
  output logic        mem_read,
  output logic        branch,
  output logic        UJ_en,
  output logic        jalr,
  output logic        U_en,
  output logic        imm_sel,
  output logic        auipc,
  output logic [ 1:0] csr_op_ctr,
  output logic        csr_imm_en, 
  output logic        csr_read_en

 );

  logic R_type;
  logic I_type;
  logic csr_en;
  logic csr_wr_en;
  logic csr_rs1_en;
  
  typ_dec i_typ_dec(
   .opcode  (opcode   ),
   .R_type  (R_type   ),
   .load    (mem_read ),
   .I_type  (I_type   ),
   .jalr    (jalr     ),
   .S_type  (mem_write),
   .SB_type (branch   ),
   .U_type  (U_en     ),
   .UJ_type (UJ_en    ),
   .auipc   (auipc    ),
   .imm_sel (imm_sel  ),
   .csr     (csr_en   )
  );

  assign opcode     = inst [ 6: 0];
  assign rd_adr     = inst [11: 7];
  assign func3[2:0] = inst [14:12];
  assign func3[3  ] = inst [30   ];
  assign rs1_adr    = inst [19:15];
  assign rs2_adr    = inst [24:20];
  assign func7      = inst [31:25];

  assign rd_en  = R_type | I_type    | mem_read | UJ_en  | csr_read_en | U_en | jalr;
  assign rs1_en = branch | mem_write | I_type   | R_type | csr_rs1_en ;
  assign rs2_en = R_type | mem_write | branch   ;
 
 always_comb begin
  if (csr_en==1 && ((!(rd_adr==5'd0) && (func3[2:0]==3'h1 || func3[2:0]==3'h5)) ||  func3[2:0]==3'h2 ||  func3[2:0]==3'h3 ||  func3[2:0]==3'h6 ||  func3[2:0]==3'h7)) begin
    csr_read_en=1;   
  end else begin
    csr_read_en=0;
  end
  if (csr_en==1 && ((!(rs1_adr==5'd0) && (func3[2:0]==3'h2 || func3[2:0]==3'h3 || func3[2:0]==3'h6 || func3[2:0]==3'h7)) || func3[2:0]==3'h1 || func3[2:0]==3'h5)) begin
    csr_wr_en = 1;   
  end else begin
    csr_wr_en = 0;
  end
  if (csr_en==1 && ((!(rs1_adr==5'd0) && (func3[2:0]==3'h2 || func3[2:0]==3'h3)) || func3[2:0]==3'h1)) begin
    csr_rs1_en = 1;   
  end else begin
    csr_rs1_en = 0;
  end

  if (csr_en==1 && (func3[2:0]==3'h1 || func3[2:0]==3'h5)) begin
    csr_op_ctr = 2'd0;                // for read and write
  end else if (csr_en==1 && (func3[2:0]==3'h2 || func3[2:0]==3'h6)) begin
    csr_op_ctr = 2'd1;                // for read and set
  end else if (csr_en==1 && (func3[2:0]==3'h3 || func3[2:0]==3'h7)) begin
    csr_op_ctr = 2'd2;                // for read and clear
  end else begin
    csr_op_ctr = 2'd3;
  end

  if (csr_en==1 && (func3[2:0]==3'h5 ||func3[2:0]==3'h6 ||func3[2:0]==3'h7)) begin
    csr_imm_en = 1'b1;
  end else begin
    csr_imm_en = 1'b0;
  end

  
 end

endmodule

