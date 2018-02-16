`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:12:34 06/24/2016 
// Design Name: 
// Module Name:    main 
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
module main(clk,rst,choice,money,item1,available_item1,remaining_money1
    );
input clk;
input rst;
input [2:0]choice;
input [2:0]money;
output  [2:0]item1;
output  [2:0]available_item1;
output  [2:0]remaining_money1;
wire finsh1;
wire reset_time;
wire en1;	 
	 
timer time1 (
    .clk(clk), 
    .en(en1), 
    .finish(finish1), 
    .rst_food(reset_time)
    );
	 
food_seller vending_machin (
    .clk(clk), 
    .rst(rst), 
    .choice(choice), 
    .money(money), 
    .finish(finish1), 
    .en_timer(en1), 
    .item(item1), 
    .available_item(available_item1), 
    .remaining_money(remaining_money1), 
    .rst_timer(reset_time)
    );

endmodule
