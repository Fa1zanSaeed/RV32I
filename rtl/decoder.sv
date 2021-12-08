module decoder(
  input  logic [31:0] inst,
  output logic [ 6:0] opcode,
  output logic [ 6:0] func7,
  output logic [ 3:0] func3,
  output logic [ 4:0] rd,
  output logic [ 4:0] rs1,
  output logic [ 4:0] rs2
  );
  always_comb begin
   opcode     = inst [ 6: 0];
   rd         = inst [11: 7];
   func3[2:0] = inst [14:12];
   func3[3  ] = inst [30   ];
   rs1        = inst [19:15];
   rs2        = inst [24:20];
   func7      = inst [31:25];
  end  
endmodule

