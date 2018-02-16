`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:33:35 06/26/2016
// Design Name:   main
// Module Name:   F:/ali/home work/verilog/project/project1/test2_main.v
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

module test2_main;

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
		.item(item1), 
		.available_item(available_item1), 
		.remaining_money(remaining_money1)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		choice = 0;
		money = 7;

		// Wait 100 ns for global reset to finish
		#100;
		money = 7;
		rst=0;
		#300;
		rst=0;
		choice=3'b001;
		#200;
		choice=3'b011;
		#100;
		choice=3'b010;
		#2000;
		choice=3'b100;
        
		// Add stimulus here

	end
      	initial forever
	begin
	#100;
	clk=~clk;
	end
endmodule

