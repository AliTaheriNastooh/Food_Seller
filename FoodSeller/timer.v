`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:49:24 06/25/2016 
// Design Name: 
// Module Name:    timer 
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
module timer(clk,en,finish,rst_food
    );
input clk;
input en;
input rst_food;
output reg finish;
reg [3:0]counter;
initial
begin
	counter<=0;
	finish=0;
end

always @(posedge clk)
begin
	if(rst_food==1)
	begin
		counter<=0;
		finish<=0;
	end
	else
		begin
		if(counter==2)
		begin
			counter<=0;
			finish<=1;
		end
		else
		begin
			if(en==1)
				begin
				counter<=counter+1;
			end
			finish<=0;
		end
	end
end
endmodule
