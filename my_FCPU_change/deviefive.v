`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:06:59 03/03/2021 
// Design Name: 
// Module Name:    deviefive 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module deviefive
	(
    clk, 
	 CLK1kHz,
	 CLK100Hz,
	 CLKCPU	 
	);

input clk;
output CLK1kHz;
output CLK100Hz;
output CLKCPU;

reg [25:0]cnt = 26'd1;

assign CLKCPU = !cnt[25];
assign CLK1kHz = !cnt[14];
assign CLK100Hz = cnt[17];

	always @(posedge clk) cnt[0] <= !cnt[0];
	always @(posedge cnt[0]) cnt[1] <= !cnt[1];
	always @(posedge cnt[1]) cnt[2] <= !cnt[2];
	always @(posedge cnt[2]) cnt[3] <= !cnt[3];
	always @(posedge cnt[3]) cnt[4] <= !cnt[4];
	always @(posedge cnt[4]) cnt[5] <= !cnt[5];
	always @(posedge cnt[5]) cnt[6] <= !cnt[6];
	always @(posedge cnt[6]) cnt[7] <= !cnt[7];
	always @(posedge cnt[7]) cnt[8] <= !cnt[8];
	always @(posedge cnt[8]) cnt[9] <= !cnt[9];
	always @(posedge cnt[9]) cnt[10] <= !cnt[10];
	always @(posedge cnt[10]) cnt[11] <= !cnt[11];
	always @(posedge cnt[11]) cnt[12] <= !cnt[12];
	always @(posedge cnt[12]) cnt[13] <= !cnt[13];
	always @(posedge cnt[13]) cnt[14] <= !cnt[14];
	always @(posedge cnt[14]) cnt[15] <= !cnt[15];
	always @(posedge cnt[15]) cnt[16] <= !cnt[16];
	always @(posedge cnt[16]) cnt[17] <= !cnt[17];
	always @(posedge cnt[17]) cnt[18] <= !cnt[18];
	always @(posedge cnt[18]) cnt[19] <= !cnt[19];
	always @(posedge cnt[19]) cnt[20] <= !cnt[20];
	always @(posedge cnt[20]) cnt[21] <= !cnt[21];
	always @(posedge cnt[21]) cnt[22] <= !cnt[22];
	always @(posedge cnt[22]) cnt[23] <= !cnt[23];
	always @(posedge cnt[23]) cnt[24] <= !cnt[24];
	always @(posedge cnt[24]) cnt[25] <= !cnt[25];
	
endmodule
