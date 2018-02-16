`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:43:21 06/26/2016
// Design Name:   main
// Module Name:   F:/ali/home work/verilog/project/project1/test3.v
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

module test3;

	// Inputs
	reg clk;
	reg rst;
	reg [2:0] choice;
	reg [2:0] money;

	// Outputs
	wire [2:0] item1;
	wire [2:0] available_item1;
	wire [2:0] remaining_money1;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.rst(rst), 
		.choice(choice), 
		.money(money), 
		.item1(item1), 
		.available_item1(available_item1), 
		.remaining_money1(remaining_money1)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		choice = 0;
		money = 7;

		// Wait 100 ns for global reset to finish
		#100;
		rst=1;
		money=7;
		#100;
		choice=1;
		rst=0;
		#100;
		choice=4;
		#100;
		choice=5;
		#100;
		choice=2;
		#100;
		choice=1;
		#100;
		choice=0;
		
	end
    
	initial forever
	begin
	#50;
	clk=~clk;
	end
  
endmodule

