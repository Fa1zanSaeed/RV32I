module riscv_topp(
  input logic clk,reset
 );
  logic EN,D_E_stall,jalr_en1,UJ_en1,forward1,forward2,E_M_b_en,branch1,ld_en1,rd_en1,str_en1,stall,D_E_imm_sel,rd_en,rs1_en,rs2_en,imm_sel,branch,str_en,ld_en,UJ_en,jalr_en,U_en,auipc_en,b_en,D_E_branch,D_E_ld_en,E_M_ld_en,M_D_ld_en,D_E_rd_en,E_M_rd_en,M_D_rd_en,D_E_str_en,E_M_str_en,D_E_UJ_en,E_M_UJ_en,M_D_UJ_en,D_E_jalr_en,E_M_jalr_en,M_D_jalr_en,D_E_U_en,E_M_U_en,M_D_U_en,D_E_auipc_en,E_M_auipc_en,M_D_auipc_en;
  logic [1:0] forwardA,forwardB;
  logic [3:0] func3,alu_sel,D_E_alu_sel,D_E_func3,E_M_func3,WE,M_D_func3;
  logic [4:0] rd_adr,rs1_adr,rs2_adr,D_E_rd_adr,D_E_rs1_adr,D_E_rs2_adr,E_M_rd_adr,M_D_rd_adr;
  logic [6:0] opcode;
  logic [11:0] mem_adr;
  logic [31:0] F_D_inst1,rs1_data1,rs2_data1,D_E_sb_imm,D_E_u,D_E_u_imm,D_E_pc,E_M_u_imm,E_M_pc,M_D_u_imm,M_D_pc,D_E_alu1_in,D_E_alu2_in,F_D_pc,E_M_alu_o,M_D_alu_o,inst,rd_data,rs1_data,rs2_data,D_E_rs2_data,E_M_rs2_data,i_imm,s_imm,sb_imm,u_imm,uj_imm,u,alu_o,mem_o,pc,mem_in,l_d,rs1_sltd_data,rs2_sltd_data;
 
  fetch fetch1(.clk(clk),
            .reset(reset),
            .inst(inst),
            .b_en(b_en),
            .UJ_en(UJ_en1),
            .jalr(D_E_jalr_en),
            .al(alu_o),
            .UJimm(uj_imm),
            .SBimm(D_E_sb_imm),
            .pc(pc),
            .stall(stall));

  hazard_detection_unit hazard_detection_unit1(.D_E_ld_en(D_E_ld_en),
                                               .D_E_rd_adr(D_E_rd_adr),
                                               .rs1_adr(rs1_adr),
                                               .rs2_adr(rs2_adr),
                                               .stall(stall));    
      
  decoder decoder1(.inst(F_D_inst1),
          .opcode(opcode),
              .func7(),
          .func3(func3),
          .rd(rd_adr),
          .rs1(rs1_adr),
          .rs2(rs2_adr));
      
  control_unit control_unit1(.opcode(opcode),
                  .mem_write(str_en),
                  .rd_en(rd_en),
                  .rs1_en(rs1_en),
                  .rs2_en(rs2_en),
                  .mem_read(ld_en),
                  .branch(branch),
                  .UJ(UJ_en),
                  .jalr(jalr_en),
                  .U(U_en),
                  .imm_sel(imm_sel),
                  .auipc(auipc_en));

      
  reg_file reg_file1(.rs1(rs1_adr),
               .rs2(rs2_adr),
               .rd(M_D_rd_adr),
               .rs1_en(rs1_en),
               .rs2_en(rs2_en),
               .rd_en(M_D_rd_en),
               .rd_data(rd_data),
               .clk(clk),
               .reset(reset),
               .rs1_data(rs1_data),
               .rs2_data(rs2_data));
      
  imm_gen imm_gen1(.inst(F_D_inst1),
             .I(i_imm),
             .S(s_imm),
             .SB(sb_imm),
             .U(u_imm),
             .UJ(uj_imm));
             
  alu_con alu_con1(.opcode(opcode),
             .func3(func3),
             .alu_sel(alu_sel));
      
  alu alu1(.branch(D_E_branch),
          .func3(D_E_alu_sel),
          .rs1(rs1_sltd_data),
          .rs2(D_E_alu2_in),
          .data_out(alu_o));

  forwarding_unit forwarding_unit1(.E_M_rd_en(E_M_rd_en),
                                   .M_D_rd_en(M_D_rd_en),
                                   .D_E_rs1_adr(D_E_rs1_adr),
                                   .D_E_rs2_adr(D_E_rs2_adr),
                                   .E_M_rd_adr(E_M_rd_adr),
                                   .M_D_rd_adr(M_D_rd_adr),
                                   .forwardA(forwardA),
                                   .forwardB(forwardB),
                                   .rs1_adr(rs1_adr),
                                   .rs2_adr(rs2_adr),
                                   .forward1(forward1),
                                   .forward2(forward2));
      
  datamemory datamemory1(.adr(mem_adr),
                    .data_in(mem_in),
                    .clk(clk),
                    .WE(WE),
                    .EN(EN),
                    .data_out(mem_o));

  logic [31:0] F_D;
//  logic [63:0] F_D1;
  logic [224:0] D_E;
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
         branch1 =0;
         ld_en1  =0;
         rd_en1  =0;
         str_en1 =0;
         jalr_en1=0;
         UJ_en1  =0;
  //       F_D_inst1=32'h00000013;
      end else begin
         branch1 = branch;
         ld_en1  = ld_en;
         rd_en1  = rd_en;
         str_en1 = str_en;
         jalr_en1= jalr_en;
         UJ_en1  = UJ_en;
    //     F_D_inst1=inst;
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

      D_E = {stall,sb_imm,rs2_adr,rs1_adr,imm_sel,auipc_en,u_imm,F_D_pc,U_en,jalr_en1,UJ_en,rd_adr,str_en1,rd_en1,ld_en1,func3,branch1,alu_sel,u,rs2_data1,rs1_data1};

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

      b_en = D_E_branch && alu_o[0] ;
      E_M = {b_en,D_E_auipc_en,D_E_u_imm,D_E_pc,D_E_U_en,D_E_jalr_en,D_E_UJ_en,D_E_rd_adr,D_E_str_en,D_E_rd_en,D_E_ld_en,D_E_func3,rs2_sltd_data,alu_o} ;

      // Memory Stage \\

      mem_adr = E_M_alu_o[13:2];
      EN = E_M_ld_en || E_M_str_en;   
      mem_in=E_M_rs2_data;

      if (E_M_str_en==1) begin
        if (E_M_func3[2:0] == 3'h0) begin
           WE = 4'b0001;
        end else if (E_M_func3[2:0] == 3'h1) begin
           WE = 4'b0011;
        end else if (E_M_func3[2:0] == 3'h2) begin
           WE = 4'b1111;
        end else begin
           WE = 4'b0000;
        end
      end else begin
         WE = 4'b0000;
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
/*        F_D1 <= F_D;
      if (stall==1) begin        
      {F_D_pc,F_D_inst} <= F_D1;
      end else begin
      {F_D_pc,F_D_inst} <= F_D;
      end
*/   
      {F_D_pc} <= F_D;

      {D_E_stall,D_E_sb_imm,D_E_rs2_adr,D_E_rs1_adr,D_E_imm_sel,D_E_auipc_en,D_E_u_imm,D_E_pc,D_E_U_en,D_E_jalr_en,D_E_UJ_en,D_E_rd_adr,D_E_str_en,D_E_rd_en,D_E_ld_en,D_E_func3,D_E_branch,D_E_alu_sel,D_E_u,D_E_rs2_data,D_E_alu1_in} <= D_E;

      {E_M_b_en,E_M_auipc_en,E_M_u_imm,E_M_pc,E_M_U_en,E_M_jalr_en,E_M_UJ_en,E_M_rd_adr,E_M_str_en,E_M_rd_en,E_M_ld_en,E_M_func3,E_M_rs2_data,E_M_alu_o} <= E_M;

      {M_D_func3,M_D_auipc_en,M_D_u_imm,M_D_pc,M_D_U_en,M_D_jalr_en,M_D_UJ_en,M_D_rd_adr,M_D_rd_en,M_D_ld_en,M_D_alu_o} <= M_D;
  end
endmodule
