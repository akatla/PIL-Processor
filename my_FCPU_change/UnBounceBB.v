`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:			SergLetFPGA_Development
// Engineer:		Akatla Arbuzov
// 
// Create Date:    20:14:19 06/22/2017 
// Design Name: 	 First programmable state machine (CPU) 
// Module Name:    DeBouncer
// Project Name: 	 FPSM_LSV
// Target Devices: SPARTAN 6
// Tool versions:  1.0
// Description: 	 First attempt to create FPSM module
//
// Dependencies: 	 Alex S.
//
// Revision:		 2.1.0
// Revision 0.04 - File Created
// Additional Comments: none.
//
//////////////////////////////////////////////////////////////////////////////////
module UnBounceBB(
input  iclk,
input  iin ,
output iout
);

parameter STAGE = 10;

wire  [STAGE-1:0] chain_nxt;
wire  deb_nxt; 
reg   [STAGE-1:0] chain;
reg   deb;
 
assign iout = deb;
assign chain_nxt = {chain[STAGE-2:0], iin};
assign deb_nxt   = &chain[STAGE-1:1] ? 1'b1 : ~(|chain[STAGE-1:1]) ? 1'b0 : deb;

always @(posedge iclk)
	begin
        chain <= chain_nxt;
        deb   <= deb_nxt;
	end
 
endmodule
