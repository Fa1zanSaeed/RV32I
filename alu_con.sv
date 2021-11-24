module alu_con(
  input logic [6:0] opcode,
  input logic [3:0] func3,
  output logic [3:0] alu_sel);
    logic [2:0] temp;
       assign temp = func3[2:0];
  always_comb begin
    if (opcode == 7'h3 || opcode == 7'h23 ) begin
       alu_sel=4'd9;
    end else if(opcode == 7'h33 || opcode==7'h3b) begin
       alu_sel=func3;
    end else if(opcode == 7'h13 || opcode ==7'h1b) begin
          if(temp == 3'd5) begin
             alu_sel=func3;
          end else begin
             alu_sel={1'b0,func3[2:0]};
          end
    end else begin
       alu_sel={1'b0,func3[2:0]};
    end
  end
endmodule

