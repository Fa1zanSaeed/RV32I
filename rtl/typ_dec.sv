module typ_dec(
  input  logic [6:0] opcode,
  output logic       R_type,
  output logic       load,
  output logic       I_type,
  output logic       jalr,
  output logic       S_type,
  output logic       SB_type,
  output logic       U_type,
  output logic       UJ_type,
  output logic       auipc,
  output logic       imm_sel,
  output logic       csr
 );
  
 always_comb begin
    if (opcode==7'h3b || opcode==7'h33) begin
       R_type  = 1'b1;
    end else begin
       R_type  = 1'b0;
    end      

    if (opcode==7'h03) begin
       load    = 1'b1;
    end else begin
       load    = 1'b0;
    end      
     
    if (opcode==7'h1b || opcode==7'h13) begin
       I_type  = 1'b1;
    end else begin
       I_type  =1'b0;
    end      

    if (opcode==7'h67) begin
       jalr    = 1'b1;
    end else begin
       jalr    = 1'b0;
    end      

    if (opcode==7'h23) begin
       S_type  = 1'b1;
    end else begin
       S_type  = 1'b0;
    end      

    if (opcode==7'h63) begin
       SB_type = 1'b1;
    end else begin
       SB_type = 1'b0;
    end      

    if (opcode==7'h37 || opcode==7'h17) begin
       U_type  = 1'b1;
    end else begin
       U_type  = 1'b0;
    end      

    if (opcode==7'h6f) begin
       UJ_type = 1'b1;
    end else begin
       UJ_type = 1'b0;
    end      

    if (opcode==7'h17) begin
       auipc   = 1'b1;
    end else begin
       auipc   = 1'b0;
    end      

    if (opcode==7'h1b || opcode==7'h13 || opcode==7'h03 || opcode==7'h67 || opcode==7'h23) begin
       imm_sel = 1'b1;
    end else begin
       imm_sel = 1'b0;
    end      

    if (opcode==7'h73) begin
       csr   = 1'b1;
    end else begin
       csr   = 1'b0;
    end      


 end
endmodule
