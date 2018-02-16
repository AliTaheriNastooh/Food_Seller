`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:21:22 07/01/2016
// Design Name:   main
// Module Name:   F:/ali/home work/verilog/project/project1/test4.v
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

module test4;

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
		money = 0;

		// Wait 100 ns for global reset to finish
/*		#10;
		rst=1;
		money=7;
		#10;
		rst = 0;
		choice=3;
		#140;
		choice=2;
		#122;
		choice=3;
		#122;
		choice=1;
		#122;
		choice=2;
		#130;
		choice=0;
		money=5;
		//choice=3;
		#210;
		choice=2;
		*/
				#10;
		rst=1;
		money=7;
		#10;
		rst = 0;
		choice=2;
		#140;
		choice=1;
		#122;
		choice=2;
		#122;
		choice=1;
		#122;
		choice=3;
		#130;
		choice=2;
		money=5;
		//choice=3;
		#110;
		choice=1;
		// Add stimulus here
	end
   initial forever
	begin
	#10;
	clk=~clk;
	end
endmodule

