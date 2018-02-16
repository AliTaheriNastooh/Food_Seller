`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:19:26 06/24/2016
// Design Name:   main
// Module Name:   F:/ali/home work/verilog/project/project1/test_main1.v
// Project Name:  project1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_main1;

	// Inputs
	reg b;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.b(b)
	);

	initial begin
		// Initialize Inputs
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        b=1;
		// Add stimulus here

	end
      
endmodule

