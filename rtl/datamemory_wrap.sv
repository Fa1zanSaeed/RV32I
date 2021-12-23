module datamemory_wrap(
 input  logic        clk,
 input  logic        reset,

 // Write address channel signals
 input  logic        awvalid,
 output logic        awready,
 input  logic [11:0] awaddr,
 input  logic [ 2:0] awprot, 
  
 // Write data channel signals                                                 
 input  logic        wvalid,
 output logic        wready,
 input  logic [31:0] wdata,
 input  logic [ 3:0] wstrb,
  
 // Write response channel signals                                                     
 output logic        bvalid,
 input  logic        bready,
 output logic        bresp,
  
 // Read address channel signals                                                      
 input  logic        arvalid,
 output logic        arready,
 input  logic [11:0] araddr,
 input  logic [ 2:0] arprot, 
  
 // Read data channel signals                                                    
 output logic        rvalid,
 input  logic        rready,
 output logic [31:0] rdata,
 output logic        rresp
 );

 logic [11:0] adr_i;
 logic [31:0] data_in;
 logic [ 3:0] WE_i;
 logic [31:0] data_out;
 logic        EN_i;

  datamemory i_datamemory(
    .adr      (adr_i   ),
    .data_in  (data_in ),
    .clk      (clk     ),
    .WE_i     (WE_i    ),
    .EN_i     (EN_i    ),
    .data_out (data_out)
  );

  assign adr_i  =((awready==1 && awvalid==1) || (arready==1 && arvalid==1))? awaddr:12'b?;

  assign data_in=(wready==1  && wvalid==1 )? wdata   :32'b?;
  assign WE_i   =(wready==1  && wvalid==1 )? wstrb   : 4'b?;

  assign rdata  =(rready==1  && rvalid==1 )? data_out:32'b?;

  assign EN_i  =(awready & awvalid) | (arready & arvalid);

 always_comb begin
   if (!reset) begin
    awready = 1'b0;     
    wready  = 1'b0;
    bvalid  = 1'b0;
    bresp   = 1'b0;
    arready = 1'b0;     
    rresp   = 1'b0;
    rvalid  = 1'b0;
   end else begin
    awready = 1'b1;
    wready  = 1'b1;
    bvalid  = 1'b1;
    bresp   = 1'b1;
    arready = 1'b1;     
    rresp   = 1'b1;
    rvalid  = 1'b1;
   end
 end
endmodule
