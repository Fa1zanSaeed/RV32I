module riscv_core(
  input  logic clk,
  input  logic reset,

  // AXI-lite interface signals for instruction memory \\

  // Write address channel signals
  output logic        awvalid_im,
  input  logic        awready_im,
  output logic [11:0] awaddr_im, 
  output logic [ 2:0] awprot_im,

  // Write data channel signals                                                 
  output logic        wvalid_im,
  input  logic        wready_im,
  output logic [31:0] wdata_im, 
  output logic [ 3:0] wstrb_im, 

  // Write response channel signals                                                     
  input  logic        bvalid_im,
  output logic        bready_im,
  input  logic        bresp_im, 

  // Read address channel signals                                                      
  output logic        arvalid_im,
  input  logic        arready_im,
  output logic [11:0] araddr_im,
  output logic [ 2:0] arprot_im, 
                              
  // Read data channel signals                                                    
  input  logic        rvalid_im,
  output logic        rready_im,
  input  logic [31:0] rdata_im, 
  input  logic        rresp_im,  

  // AXI-lite interface signals for data memory \\

  // Write address channel signals
  output logic        awvalid_dm,
  input  logic        awready_dm,
  output logic [11:0] awaddr_dm, 
  output logic [ 2:0] awprot_dm, 
                                 
  // Write data channel signals                                                 
  output logic        wvalid_dm,
  input  logic        wready_dm,
  output logic [31:0] wdata_dm, 
  output logic [ 3:0] wstrb_dm, 
                                
  // Write response channel signals                                                     
  input  logic        bvalid_dm,
  output logic        bready_dm,
  input  logic        bresp_dm, 
                                   
  // Read address channel signals                                                      
  output logic        arvalid_dm,
  input  logic        arready_dm,
  output logic [11:0] araddr_dm, 
  output logic [ 2:0] arprot_dm, 
                                    
  // Read data channel signals                                                    
  input  logic        rvalid_dm,
  output logic        rready_dm,
  input  logic [31:0] rdata_dm, 
  input  logic        rresp_dm  
 );

  logic        D_E_stall,jalr_en1,UJ_en1,forward1,forward2,E_M_b_en,branch1,ld_en1,rd_en1,str_en1,stall;
  logic        D_E_imm_sel,rd_en,rs1_en,rs2_en,imm_sel,branch,str_en,ld_en,UJ_en,jalr_en,U_en,auipc_en,b_en;
  logic        D_E_branch,D_E_ld_en,E_M_ld_en,M_D_ld_en,D_E_rd_en,E_M_rd_en,M_D_rd_en,D_E_str_en,E_M_str_en;
  logic        D_E_UJ_en,E_M_UJ_en,M_D_UJ_en,D_E_jalr_en,E_M_jalr_en,M_D_jalr_en,D_E_U_en,E_M_U_en,M_D_U_en;
  logic        D_E_auipc_en,E_M_auipc_en,M_D_auipc_en;
  logic        csr_imm_en,D_E_csr_imm_en,csr_read_en,D_E_csr_read_en;

  logic [ 1:0] forwardA,forwardB,csr_op_ctr,D_E_csr_op_ctr;
 
  logic [ 3:0] func3,alu_sel,D_E_alu_sel,D_E_func3,E_M_func3,WE_i,M_D_func3;
 
  logic [ 4:0] rd_adr,rs1_adr,rs2_adr,D_E_rd_adr,D_E_rs1_adr,D_E_rs2_adr,E_M_rd_adr,M_D_rd_adr;
 
  logic [ 6:0] opcode,func7;
 
  logic [11:0] mem_adr,csr_adr,D_E_csr_adr;
  logic [11:0] instmem_adr;

  logic [31:0] F_D_inst1,rs1_data1,rs2_data1,D_E_sb_imm,D_E_u,D_E_u_imm,D_E_pc,E_M_u_imm,E_M_pc;
  logic [31:0] M_D_u_imm,M_D_pc,D_E_alu1_in,D_E_alu2_in,F_D_pc,E_M_alu_o,M_D_alu_o,inst,rd_data;
  logic [31:0] rs1_data,rs2_data,D_E_rs2_data,E_M_rs2_data,i_imm,s_imm,sb_imm,u_imm,uj_imm,u,alu_o;
  logic [31:0] mem_o,pc,mem_in,l_d,rs1_sltd_data,rs2_sltd_data,alu_o1;
  logic [31:0] csr_rdata_o,csr_imm,D_E_csr_imm,csr_wdata_i;

 assign arvalid_im = 1'b1;
 assign araddr_im  = (arvalid_im==1 && arready_im)? instmem_adr:12'b? ;

 assign rready_im  = 1'b1;
 assign inst       = (rvalid_im==1 && rready_im)? rdata_im:32'b? ;

 assign awvalid_dm = E_M_str_en;
 assign arvalid_dm = E_M_ld_en;
 assign awaddr_dm  = ((awvalid_dm==1 && awready_dm) || (arvalid_dm==1 && arready_dm))? mem_adr:12'b? ;

 assign wvalid_dm  = E_M_str_en;
 assign wdata_dm   = (wvalid_dm==1 && wready_dm==1)? mem_in:32'b? ;
 assign wstrb_dm   = (wvalid_dm==1 && wready_dm==1)? WE_i:4'b? ;

 assign rready_dm  = M_D_ld_en;
 assign mem_o      = (rvalid_dm==1 && rready_dm)? rdata_dm:32'b?;
 



  fetch i_fetch(
    .clk         (clk        ),
    .reset       (reset      ),
    .b_en        (b_en       ),
    .UJ_en       (UJ_en1     ),
    .jalr        (D_E_jalr_en),
    .al          (alu_o      ),
    .UJimm       (uj_imm     ),
    .SBimm       (D_E_sb_imm ),
    .pc          (pc         ),
    .stall       (stall      ),
    .instmem_adr (instmem_adr)
  );

  hazard_detection_unit i_hazard_detection_unit(
    .D_E_ld_en  (D_E_ld_en ),
    .D_E_rd_adr (D_E_rd_adr),
    .rs1_adr    (rs1_adr   ),
    .rs2_adr    (rs2_adr   ),
    .stall      (stall     )
  );
      
      
  control_unit i_control_unit(
    .inst        (F_D_inst1  ),
    .opcode      (opcode     ),
    .func7       (func7      ),
    .func3       (func3      ),
    .rd_adr      (rd_adr     ),
    .rs1_adr     (rs1_adr    ),
    .rs2_adr     (rs2_adr    ),
    .mem_write   (str_en     ),
    .rd_en       (rd_en      ),
    .rs1_en      (rs1_en     ),
    .rs2_en      (rs2_en     ),
    .mem_read    (ld_en      ),
    .branch      (branch     ),
    .UJ_en       (UJ_en      ),
    .jalr        (jalr_en    ),
    .U_en        (U_en       ),
    .imm_sel     (imm_sel    ),
    .auipc       (auipc_en   ),
    .csr_op_ctr  (csr_op_ctr ),
    .csr_imm_en  (csr_imm_en ),
    .csr_read_en (csr_read_en)
  );

  csr i_csr(
    .csr_wdata_i (csr_wdata_i   ),
    .clk         (clk           ),
    .csr_adr     (D_E_csr_adr   ),
    .illegal_csr (              ),
    .csr_rdata_o (csr_rdata_o   ),
    .csr_op_ctr  (D_E_csr_op_ctr)
  );
      
  reg_file i_reg_file(
    .rs1      (rs1_adr   ),
    .rs2      (rs2_adr   ),
    .rd       (M_D_rd_adr),
    .rs1_en   (rs1_en    ),
    .rs2_en   (rs2_en    ),
    .rd_en    (M_D_rd_en ),
    .rd_data  (rd_data   ),
    .clk      (clk       ),
    .reset    (reset     ),
    .rs1_data (rs1_data  ),
    .rs2_data (rs2_data  )
  );
      
  imm_gen i_imm_gen(
    .inst    (F_D_inst1),
    .I_imm   (i_imm    ),
    .S_imm   (s_imm    ),
    .SB_imm  (sb_imm   ),
    .U_imm   (u_imm    ),
    .UJ_imm  (uj_imm   ),
    .CSR_imm (csr_imm  )
  );
             
  alu_con i_alu_con(
    .opcode  (opcode ),
    .func3   (func3  ),
    .alu_sel (alu_sel)
  );
      
  alu i_alu(
    .branch   (D_E_branch   ),
    .func3    (D_E_alu_sel  ),
    .rs1      (rs1_sltd_data),
    .rs2      (D_E_alu2_in  ),
    .data_out (alu_o        )
  );

  forwarding_unit i_forwarding_unit(
    .E_M_rd_en   (E_M_rd_en  ),
    .M_D_rd_en   (M_D_rd_en  ),
    .D_E_rs1_adr (D_E_rs1_adr),
    .D_E_rs2_adr (D_E_rs2_adr),
    .E_M_rd_adr  (E_M_rd_adr ),
    .M_D_rd_adr  (M_D_rd_adr ),
    .forwardA    (forwardA   ),
    .forwardB    (forwardB   ),
    .rs1_adr     (rs1_adr    ),
    .rs2_adr     (rs2_adr    ),
    .forward1    (forward1   ),
    .forward2    (forward2   )
  );
      
  logic [ 31:0] F_D;
  logic [272:0] D_E;
  logic [144:0] E_M;
  logic [110:0] M_D;

 always_comb begin

      // Fetch Stage \\

      F_D = {pc};

      // Decode Stage \\

      if (str_en==1) begin
         u = s_imm;                  // u is selected immediate from immediate generator that either the immediate is S_type or I_type
      end else begin
         u = i_imm;
      end

      if (E_M_b_en==1 || b_en==1 || D_E_UJ_en==1 || D_E_jalr_en==1 || E_M_jalr_en==1) begin
         F_D_inst1=32'h00000013;                                   // instruction will be nop instead of actual instruction
      end else begin
         F_D_inst1=inst;         
      end

     // Disabeling the control signals
      if (D_E_stall==1 || stall==1 || E_M_b_en==1 || b_en==1 || D_E_UJ_en==1 || D_E_jalr_en==1 || E_M_jalr_en==1) begin
         branch1  = '0;
         ld_en1   = '0;
         rd_en1   = '0;
         str_en1  = '0;
         jalr_en1 = '0;
         UJ_en1   = '0;
      end else begin
         branch1 = branch;
         ld_en1  = ld_en;
         rd_en1  = rd_en;
         str_en1 = str_en;
         jalr_en1= jalr_en;
         UJ_en1  = UJ_en;
      end

     // forwading data from write back stage to decode stage
      if(forward1==1) begin
         rs1_data1=rd_data;
      end else begin
         rs1_data1=rs1_data;
      end
      if(forward2==1) begin
         rs2_data1=rd_data;
      end else begin
         rs2_data1=rs2_data;
      end

      csr_adr={func7,rs2_adr};

      D_E = {csr_op_ctr,csr_adr,csr_read_en,csr_imm,csr_imm_en,stall,sb_imm,rs2_adr,rs1_adr,imm_sel,auipc_en,u_imm,F_D_pc,U_en,jalr_en1,UJ_en,rd_adr,str_en1,rd_en1,ld_en1,func3,branch1,alu_sel,u,rs2_data1,rs1_data1};

      // Execute Stage \\ 

      // forwarding from memory or write-back stage to execute stage
      if (forwardA==2'b10) begin
       rs1_sltd_data = E_M_alu_o;
      end else if (forwardA==2'b01) begin
       rs1_sltd_data = rd_data;        
      end else begin
       rs1_sltd_data = D_E_alu1_in;
      end

      if (forwardB==2'b10) begin
       rs2_sltd_data = E_M_alu_o;
      end else if (forwardB==2'b01) begin
       rs2_sltd_data = rd_data;        
      end else begin
       rs2_sltd_data = D_E_rs2_data;
      end

      // select the immediate for alu input
      if (D_E_imm_sel==1) begin
       D_E_alu2_in = D_E_u;  
      end else begin
       D_E_alu2_in = rs2_sltd_data;
      end

      if (D_E_csr_imm_en==1) begin
         csr_wdata_i = D_E_csr_imm;
      end else begin
         csr_wdata_i = rs1_sltd_data;
      end

      if (D_E_csr_read_en==1) begin
         alu_o1 = csr_rdata_o;
      end else begin
         alu_o1 = alu_o;
      end

      b_en = D_E_branch && alu_o[0] ;
      E_M = {b_en,D_E_auipc_en,D_E_u_imm,D_E_pc,D_E_U_en,D_E_jalr_en,D_E_UJ_en,D_E_rd_adr,D_E_str_en,D_E_rd_en,D_E_ld_en,D_E_func3,rs2_sltd_data,alu_o1} ;

      // Memory Stage \\

      mem_adr = E_M_alu_o[13:2];
   
      mem_in=E_M_rs2_data;

      if (E_M_str_en==1) begin
        if (E_M_func3[2:0] == 3'h0) begin
           WE_i = 4'b0001;
        end else if (E_M_func3[2:0] == 3'h1) begin
           WE_i= 4'b0011;
        end else if (E_M_func3[2:0] == 3'h2) begin
           WE_i = 4'b1111;
        end else begin
           WE_i = 4'b0000;
        end
      end else begin
         WE_i = 4'b0000;
      end

      M_D ={E_M_func3,E_M_auipc_en,E_M_u_imm,E_M_pc,E_M_U_en,E_M_jalr_en,E_M_UJ_en,E_M_rd_adr,E_M_rd_en,E_M_ld_en,E_M_alu_o} ;        

      // Write back Stage \\

      if (M_D_ld_en==1) begin
        if (M_D_func3[2:0] == 3'h0) begin
           l_d = {{24{mem_o[7]}},mem_o[7:0]};
        end else if (M_D_func3[2:0] == 3'h1) begin
           l_d = {{16{mem_o[15]}},mem_o[15:0]};
        end else if (M_D_func3[2:0] == 3'h4) begin
           l_d = {24'd0,mem_o[7:0]};
        end else if (M_D_func3[2:0] == 3'h5) begin
           l_d = {16'd0,mem_o[15:0]};
        end else if (M_D_func3[2:0] == 3'h6) begin
           l_d = $unsigned(mem_o);
        end else begin
           l_d = mem_o;
        end
      end else begin
         l_d = 32'd0;
      end

      if (M_D_ld_en==1) begin
         rd_data = l_d;
      end else if ( M_D_UJ_en == 1 || M_D_jalr_en == 1 ) begin
         rd_data = M_D_pc + 32'd4;
      end else if (M_D_U_en==1) begin
        if (M_D_auipc_en==1) begin
         rd_data = M_D_u_imm + M_D_pc;
        end else begin
         rd_data = M_D_u_imm;
        end
      end else begin
         rd_data = M_D_alu_o;
      end
 end
 
 always @ (posedge clk) begin
      {F_D_pc} <= F_D;

      {D_E_csr_op_ctr,D_E_csr_adr,D_E_csr_read_en,D_E_csr_imm,D_E_csr_imm_en,D_E_stall,D_E_sb_imm,D_E_rs2_adr,D_E_rs1_adr,D_E_imm_sel,D_E_auipc_en,D_E_u_imm,D_E_pc,D_E_U_en,D_E_jalr_en,D_E_UJ_en,D_E_rd_adr,D_E_str_en,D_E_rd_en,D_E_ld_en,D_E_func3,D_E_branch,D_E_alu_sel,D_E_u,D_E_rs2_data,D_E_alu1_in} <= D_E;

      {E_M_b_en,E_M_auipc_en,E_M_u_imm,E_M_pc,E_M_U_en,E_M_jalr_en,E_M_UJ_en,E_M_rd_adr,E_M_str_en,E_M_rd_en,E_M_ld_en,E_M_func3,E_M_rs2_data,E_M_alu_o} <= E_M;

      {M_D_func3,M_D_auipc_en,M_D_u_imm,M_D_pc,M_D_U_en,M_D_jalr_en,M_D_UJ_en,M_D_rd_adr,M_D_rd_en,M_D_ld_en,M_D_alu_o} <= M_D;
 end
endmodule
