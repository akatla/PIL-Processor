`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:12:33 03/31/2021
// Design Name:   my_FCPU
// Module Name:   D:/0_FPGA_2018/CPU_FPGA/my_FCPU_change/myCPUBench.v
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

module myCPUBench;

	// Inputs
	reg clk;
	reg BUT1;
	reg BUT2;

	// Outputs
	wire [14:0] DATA_OUT;

	// Instantiate the Unit Under Test (UUT)
	my_FCPU uut (
		.clk(clk), 
		.BUT1(BUT1), 
		.BUT2(BUT2), 
		.DATA_OUT(DATA_OUT)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		BUT1 = 0;
		BUT2 = 0;

		// Wait 100 ns for global reset to finish
		// #100;
      forever #10 clk <= ~clk; 
		// Add stimulus here

	end
      
endmodule

