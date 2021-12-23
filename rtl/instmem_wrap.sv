module instmem_wrap(
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
 logic [31:0] data_out;
 logic        EN_i;

  instmem i_instmem(
    .adr      (adr_i   ),
    .data_in  (        ),
    .clk      (clk     ),
    .WE_i     (        ),
    .EN_i     (EN_i    ),
    .data_out (data_out)
  );


  assign adr_i  =(arready==1 && arvalid==1)? araddr:12'b?;

  assign rdata  =(rready==1  && rvalid==1 )? data_out:32'b?;

  assign EN_i   =(arready & arvalid);

 always_comb begin
   if (!reset) begin
    bvalid  = 1'b0;
    bresp   = 1'b0;
    arready = 1'b0;     
    rresp   = 1'b0;
    rvalid  = 1'b0;
   end else begin
    bvalid  = 1'b1;
    bresp   = 1'b1;
    arready = 1'b1;     
    rresp   = 1'b1;
    rvalid  = 1'b1;
   end

 end

endmodule