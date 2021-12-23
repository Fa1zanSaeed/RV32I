module riscv_topp(
  input  logic clk,
  input  logic reset
 );
 // AXI-lite interface signals for instruction memory \\
 
 // Write address channel signals 
 logic        axi_awvalid_im;  
 logic        axi_awready_im; 
 logic [11:0] axi_awaddr_im;
 logic [ 2:0] axi_awprot_im;  

 // Write data channel signals                                                 
 logic        axi_wvalid_im;
 logic        axi_wready_im;
 logic [31:0] axi_wdata_im;  
 logic [ 3:0] axi_wstrb_im;  

 // Write response channel signals                          
 logic        axi_bvalid_im;  
 logic        axi_bready_im;  
 logic        axi_bresp_im;    

 // Read address channel signals                          
 logic        axi_arvalid_im; 
 logic        axi_arready_im; 
 logic [11:0] axi_araddr_im;
 logic [ 2:0] axi_arprot_im;  

 // Read data channel signals                                                    
 logic        axi_rvalid_im;  
 logic        axi_rready_im;  
 logic [31:0] axi_rdata_im;   
 logic        axi_rresp_im;  
 
 // AXI-lite interface signals for data memory \\

 // Write address channel signals 
 logic        axi_awvalid_dm;  
 logic        axi_awready_dm; 
 logic [11:0] axi_awaddr_dm;
 logic [ 2:0] axi_awprot_dm;  

 // Write data channel signals                                                 
 logic        axi_wvalid_dm;
 logic        axi_wready_dm;
 logic [31:0] axi_wdata_dm;  
 logic [ 3:0] axi_wstrb_dm;  

 // Write response channel signals                          
 logic        axi_bvalid_dm;  
 logic        axi_bready_dm;  
 logic        axi_bresp_dm;    

 // Read address channel signals                          
 logic        axi_arvalid_dm; 
 logic        axi_arready_dm; 
 logic [11:0] axi_araddr_dm;
 logic [ 2:0] axi_arprot_dm;  

 // Read data channel signals                                                    
 logic        axi_rvalid_dm;  
 logic        axi_rready_dm;  
 logic [31:0] axi_rdata_dm;   
 logic        axi_rresp_dm;  

 riscv_core i_riscv_core(
   .clk        (clk           ),
   .reset      (reset         ),
   .awvalid_im (axi_awvalid_im),
   .awready_im (axi_awready_im),
   .awaddr_im  (axi_awaddr_im ),
   .awprot_im  (axi_awprot_im ),     
   .wvalid_im  (axi_wvalid_im ),
   .wready_im  (axi_wready_im ),
   .wdata_im   (axi_wdata_im  ),
   .wstrb_im   (axi_wstrb_im  ),    
   .bvalid_im  (axi_bvalid_im ),
   .bready_im  (axi_bready_im ),
   .bresp_im   (axi_bresp_im  ),     
   .arvalid_im (axi_arvalid_im),
   .arready_im (axi_arready_im),
   .araddr_im  (axi_araddr_im ),      
   .arprot_im  (axi_arprot_im ),     
   .rvalid_im  (axi_rvalid_im ),
   .rready_im  (axi_rready_im ),
   .rdata_im   (axi_rdata_im  ),
   .rresp_im   (axi_rresp_im  ),
   .awvalid_dm (axi_awvalid_dm),
   .awready_dm (axi_awready_dm),
   .awaddr_dm  (axi_awaddr_dm ),         
   .awprot_dm  (axi_awprot_dm ),     
   .wvalid_dm  (axi_wvalid_dm ),
   .wready_dm  (axi_wready_dm ),
   .wdata_dm   (axi_wdata_dm  ),
   .wstrb_dm   (axi_wstrb_dm  ),        
   .bvalid_dm  (axi_bvalid_dm ),
   .bready_dm  (axi_bready_dm ),
   .bresp_dm   (axi_bresp_dm  ),        
   .arvalid_dm (axi_arvalid_dm),
   .arready_dm (axi_arready_dm),
   .araddr_dm  (axi_araddr_dm ),         
   .arprot_dm  (axi_arprot_dm ),     
   .rvalid_dm  (axi_rvalid_dm ),
   .rready_dm  (axi_rready_dm ),
   .rdata_dm   (axi_rdata_dm  ),
   .rresp_dm   (axi_rresp_dm  )
 );

 instmem_wrap i_instmem_wrap(
   .clk     (clk           ),
   .reset   (reset         ),
   .awvalid (axi_awvalid_im),
   .awready (axi_awready_im),
   .awaddr  (axi_awaddr_im ),
   .awprot  (axi_awprot_im ),     
   .wvalid  (axi_wvalid_im ),
   .wready  (axi_wready_im ),
   .wdata   (axi_wdata_im  ),
   .wstrb   (axi_wstrb_im  ),
   .bvalid  (axi_bvalid_im ),
   .bready  (axi_bready_im ),
   .bresp   (axi_bresp_im  ),
   .arvalid (axi_arvalid_im),
   .arready (axi_arready_im),
   .araddr  (axi_araddr_im ),
   .arprot  (axi_arprot_im ),     
   .rvalid  (axi_rvalid_im ),
   .rready  (axi_rready_im ),
   .rdata   (axi_rdata_im  ),
   .rresp   (axi_rresp_im  ) 
 );

 datamemory_wrap i_datamemory_wrap(
   .clk     (clk           ),
   .reset   (reset         ),
   .awvalid (axi_awvalid_dm),
   .awready (axi_awready_dm),
   .awaddr  (axi_awaddr_dm ),
   .awprot  (axi_awprot_dm ),     
   .wvalid  (axi_wvalid_dm ),
   .wready  (axi_wready_dm ),
   .wdata   (axi_wdata_dm  ),
   .wstrb   (axi_wstrb_dm  ),
   .bvalid  (axi_bvalid_dm ),
   .bready  (axi_bready_dm ),
   .bresp   (axi_bresp_dm  ),
   .arvalid (axi_arvalid_dm),
   .arready (axi_arready_dm),
   .araddr  (axi_araddr_dm ),
   .arprot  (axi_arprot_dm ),     
   .rvalid  (axi_rvalid_dm ),
   .rready  (axi_rready_dm ),
   .rdata   (axi_rdata_dm  ),
   .rresp   (axi_rresp_dm  )  
 );

endmodule