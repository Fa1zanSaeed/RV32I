module typ_dec(
  input  logic [6:0]  opcode,
  output  logic  R_type,load,I_type,jalr,S_type,SB_type,U_type,UJ_type,auipc,imm_sel);
  
  always_comb begin
      if (opcode==7'h3b || opcode==7'h33) begin
         R_type =1'b1;
      end else begin
         R_type =1'b0;
      end      
      if (opcode==7'h03) begin
         load =1'b1;
      end else begin
         load =1'b0;
      end      
     
      if (opcode==7'h1b || opcode==7'h13) begin
         I_type =1'b1;
      end else begin
         I_type =1'b0;
      end      

      if (opcode==7'h67) begin
         jalr =1'b1;
      end else begin
         jalr =1'b0;
      end      

      if (opcode==7'h23) begin
         S_type =1'b1;
      end else begin
         S_type =1'b0;
      end      

      if (opcode==7'h63) begin
         SB_type =1'b1;
      end else begin
         SB_type =1'b0;
      end      

      if (opcode==7'h37 || opcode==7'h17) begin
         U_type =1'b1;
      end else begin
         U_type =1'b0;
      end      

      if (opcode==7'h6f) begin
         UJ_type =1'b1;
      end else begin
         UJ_type =1'b0;
      end      

      if (opcode==7'h17) begin
         auipc =1'b1;
      end else begin
         auipc =1'b0;
      end      

      if (opcode==7'h1b || opcode==7'h13 || opcode==7'h03 || opcode==7'h67 || opcode==7'h23) begin
         imm_sel =1'b1;
      end else begin
         imm_sel =1'b0;
      end      
     
  end
endmodule
