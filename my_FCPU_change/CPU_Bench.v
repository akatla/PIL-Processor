`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:46:10 06/24/2017
// Design Name:   my_FCPU
// Module Name:   C:/SUGONAYEV_Infa/V/CPU_FPGA/my_FCPU/CPU_Bench.v
// Project Name:  my_FCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_FCPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CPU_Bench;

	// Inputs
	reg iclk;

	// Outputs
	wire iDATA_OUT;

	// Instantiate the Unit Under Test (UUT)
	my_FCPU uut (
		.clk(iclk), 
		.DATA_OUT(iDATA_OUT)
	);

	initial begin
		// Initialize Inputs
		iclk = 1'b0;

		forever #50 iclk = ~iclk;

		// Wait 100 ns for global reset to finish
		// #100;
        
		// Add stimulus here

	end
      
endmodule

