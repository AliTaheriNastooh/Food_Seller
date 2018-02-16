`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:48:36 06/25/2016 
// Design Name: 
// Module Name:    food_seller 
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
module food_seller(clk,rst,choice,money,finish,en_timer,item,available_item,remaining_money,rst_timer
    );
input clk;
input rst;
input [2:0]choice;
input [2:0]money;
input finish;
output reg rst_timer;
output reg en_timer;
output reg [2:0]item;
output reg [2:0]available_item;
output reg [2:0]remaining_money;
parameter [3:0] A=4'b0000,B=4'b0001,C=4'b0010,D=4'b0011,E=4'b0100,F=4'b0101,G=4'b0110,H=4'b0111,initiall=4'b1000,waitt=4'b1001,calcute=4'b1010;
reg[3:0]currentstate;
reg flag=0;
reg en_input;
reg[3:0]moneystate;
reg[2:0]num_soda;
reg[2:0]num_chips;
reg[2:0]num_icecream;
reg[2:0]num_water;

initial
begin
	rst_timer=0;
	num_water=1;
	num_soda=2;
	num_chips=2;
	num_icecream=2;
	item=0;
	available_item=0;
	remaining_money=0;
	en_timer=0;
	en_input=0;
end

always@(choice)
begin
	en_input=1;
end

always@(posedge clk , posedge finish,posedge rst)
begin
if(rst==1)
begin
currentstate<=initiall;
end
else
begin
	case(currentstate)
	initiall:
	begin
	currentstate<=money;
	end
	A:
	begin
	$display("end of your money and you havn't choice") ;
	currentstate<=initiall;
	end
	B:
	begin
	$display("available item:ice cream") ;
	$display("remaining money:001") ;
	remaining_money<=B;
	available_item<=1;
	moneystate<=B;
	currentstate<=waitt;
	end
	C:
	begin
	$display("available item:ice cream , water") ;
	$display("remaining money:010") ;
	remaining_money<=C;
	available_item<=2;
	moneystate<=C;
	currentstate<=waitt;
	end
	D:
	begin
	$display("available item:ice cream , water,chips") ;
	$display("remaining money:%b",D) ;
	remaining_money<=D;
	available_item<=3;
	moneystate<=D;
	currentstate<=waitt;
	end
	E:
	begin
	$display("available item:ice cream , water,chips,soda") ;
	$display("remaining money:100") ;
	remaining_money<=E;
	available_item<=4;
	moneystate<=E;
	currentstate<=waitt;	
	end
	F:
	begin
	$display("available item:ice cream , water,chips,soda") ;
	$display("remaining money:101") ;
	remaining_money<=F;
	available_item<=4;
	moneystate<=F;
	currentstate<=waitt;	
	end
	
	G:
	begin
	$display("available item:ice cream , water,chips,soda") ;
	$display("remaining money:110") ;
	remaining_money<=G;
	available_item<=4;
	moneystate<=G;
	currentstate<=waitt;	
	end
	
	H:
	begin
	$display("available item:ice cream , water,chips,soda") ;
	$display("remaining money:111") ;
	remaining_money<=H;
	available_item<=4;
	moneystate<=H;
	currentstate<=waitt;	
	end
	
	waitt:
	begin
	rst_timer<=0;
	en_timer<=1;
	if(finish==1 && en_input==1)
	begin
	currentstate<=calcute;
	en_timer<=0;
	rst_timer<=1;
	en_input<=0;
	end
	else
	begin
	if(finish==1 && en_input==0)
	begin
	currentstate<=initiall;
	$display("your time is end and give yor remaining money") ;
	remaining_money<=moneystate;
	en_timer<=0;
	en_input<=0;
	end
	end
	end
	
	calcute:
	begin
	case(moneystate)
	B:
	begin
	if(choice==3'b001)
	begin
	if(num_icecream>0)
	begin
	$display("please give your ice cream") ;
	currentstate<=A;
	item<=1;
	num_icecream=num_icecream-1;
	end
	else
	begin
	currentstate<=initiall;
	$display("you can't choose any things because icecream end ") ;
	end
	end
	else
	begin
	if(choice==3'b000)
	begin
	$display("please give your remaining money : %d",B) ;
	currentstate<=initiall;
	end
	else
	begin
	$display("error and you can't choose this item") ;
	currentstate<=B;
	item<=0;
	end
	end
	end
	
	C:	
	begin
	case(choice)
		3'b100:
		begin
		$display("error and you can't choose this item") ;	
		item<=0;
		currentstate<=C;
		end
		3'b011:
		begin
		item<=0;
		currentstate<=C;
		$display("error and you can't choose this item") ;
		end
		3'b001:
		begin
		if(num_icecream>0)
		begin
		item<=1;
		$display("please give your ice cream") ;
		currentstate<=B;
		num_icecream=num_icecream-1;
		end
		else
		begin
		currentstate<=C;
		$display("please choose another things because icecream end ") ;
		end
		end
		3'b010:
		begin
		if(num_water>0)
		begin
		item<=2;
		$display("please give your water") ;
		currentstate<=A;
		num_water=num_water-1;
		end
		else
		begin
		currentstate<=C;
		$display("please choose another things because water end ") ;
		end
		end
		3'b000:
		begin
		$display("please give your remaining money : %d",C) ;
		currentstate<=initiall;
		end
		endcase
		end
	
	
	D:
	begin
	case(choice)
		3'b100:
		begin
		currentstate<=D;
		item<=0;
		$display("error and you can't choose this item") ;
		end
		3'b011:
		begin
		if(num_chips>0)
		begin
		item<=3;
		$display("please give your chips") ;
		currentstate<=A;
		num_chips=num_chips-1;
		end
		else
		begin
		currentstate<=D;
		$display("please choose another things because chips end ") ;
		end		
		end
		3'b001:
		begin
		if(num_icecream>0)
		begin
		item<=1;
		$display("please give your ice cream") ;
		currentstate<=C;
		num_icecream=num_icecream-1;
		end
		else
		begin
		currentstate<=D;
		$display("please choose another things because icecream end ") ;
		end
		end
		3'b010:
		begin
		if(num_water>0)
		begin
		item<=2;
		$display("please give your water") ;
		currentstate<=B;
		num_water=num_water-1;
		end
		else
		begin
		currentstate<=D;
		$display("please choose another things because water end ") ;
		end		
		end
		3'b000:
		begin
		$display("please give your remaining money : %d",D) ;
		currentstate<=initiall;
		end
		endcase
		end
	
	E:	
	begin
	case(choice)
		3'b100:
		begin
		if(num_soda>0)
		begin
		item<=4;
		$display("please give your soda") ;
		currentstate<=A;
		num_soda=num_soda-1;
		end
		else
		begin
		currentstate<=E;
		$display("please choose another things because soda end ") ;
		end

		end
		3'b011:
		begin
		if(num_chips>0)
		begin
		item<=3;
		$display("please give your chips") ;
		currentstate<=B;
		num_chips=num_chips-1;
		end
		else
		begin
		currentstate<=E;
		$display("please choose another things because chips end ") ;
		end
		end
		3'b001:
		begin
		if(num_icecream>0)
		begin
		item<=1;
		$display("please give your ice cream") ;
		currentstate<=D;
		num_icecream=num_icecream-1;
		end
		else
		begin
		currentstate<=E;
		$display("please choose another things because icecream end ") ;
		end
		end
		3'b010:
		begin
		if(num_water>0)
		begin
		item<=2;
		$display("please give your water") ;
		currentstate<=C;
		num_water=num_water-1;
		end
		else
		begin
		currentstate<=E;
		$display("please choose another things because water end ") ;
		end
		end
		3'b000:
		begin
		$display("please give your remaining money : %d",E) ;
		currentstate<=initiall;
		end
		endcase
		end
	
	F:
		begin
	case(choice)
		3'b100:
		begin
		if(num_soda>0)
		begin
		item<=4;
		$display("please give your soda") ;
		currentstate<=B;
		num_soda=num_soda-1;
		end
		else
		begin
		currentstate<=F;
		$display("please choose another things because soda end ") ;
		end

		end
		3'b011:
		begin
		if(num_chips>0)
		begin
		item<=3;
		$display("please give your chips") ;
		currentstate<=C;
		num_chips=num_chips-1;
		end
		else
		begin
		currentstate<=F;
		$display("please choose another things because chips end ") ;
		end
		end
		3'b001:
		begin
		if(num_icecream>0)
		begin
		item<=1;
		$display("please give your ice cream") ;
		currentstate<=E;
		num_icecream=num_icecream-1;
		end
		else
		begin
		currentstate<=F;
		$display("please choose another things because icecream end ") ;
		end
		end
		3'b010:
		begin
		if(num_water>0)
		begin
		item<=2;
		$display("please give your water") ;
		currentstate<=D;
		num_water=num_water-1;
		end
		else
		begin
		currentstate<=F;
		$display("please choose another things because water end ") ;
		end
		end
		3'b000:
		begin
		$display("please give your remaining money : %d",F) ;
		currentstate<=initiall;
		end
		endcase
		end
	G:
		begin
	case(choice)
		3'b100:
		begin
		if(num_soda>0)
		begin
		item<=4;
		$display("please give your soda") ;
		currentstate<=C;
		num_soda=num_soda-1;
		end
		else
		begin
		currentstate<=G;
		$display("please choose another things because soda end ") ;
		end
		end
		3'b011:
		begin
		if(num_chips>0)
		begin
		item<=3;
		$display("please give your chips") ;
		currentstate<=D;
		num_chips=num_chips-1;
		end
		else
		begin
		currentstate<=G;
		$display("please choose another things because chips end ") ;
		end
		end
		3'b001:
		begin
		if(num_icecream>0)
		begin
		item<=1;
		$display("please give your ice cream") ;
		currentstate<=F;
		num_icecream=num_icecream-1;
		end
		else
		begin
		currentstate<=G;
		$display("please choose another things because icecream end ") ;
		end
		end
		3'b010:
		begin
		if(num_water>0)
		begin
		item<=2;
		$display("please give your water") ;
		currentstate<=E;
		num_water=num_water-1;
		end
		else
		begin
		currentstate<=G;
		$display("please choose another things because water end ") ;
		end
		end
		3'b000:
		begin
		$display("please give your remaining money : %d",G) ;
		currentstate<=initiall;
		end
		endcase
		end
	H:	
	begin
	case(choice)
		3'b100:
		begin
		if(num_soda>0)
		begin
		item<=4;
		$display("please give your soda") ;
		currentstate<=D;
		num_soda=num_soda-1;
		end
		else
		begin
		currentstate<=H;
		$display("please choose another things because soda end ") ;
		end

		end
		3'b011:
		begin
		if(num_chips>0)
		begin
		item<=3;
		$display("please give your chips") ;
		currentstate<=E;
		num_chips=num_chips-1;
		end
		else
		begin
		currentstate<=H;
		$display("please choose another things because chips end ") ;
		end
		end
		3'b001:
		begin
		if(num_icecream>0)
		begin
		item<=1;
		$display("please give your ice cream") ;
		currentstate<=G;
		num_icecream=num_icecream-1;
		end
		else
		begin
		currentstate<=H;
		$display("please choose another things because icecream end ") ;
		end
		end
		3'b010:
		begin
		if(num_water>0)
		begin
		item<=2;
		$display("please give your water") ;
		currentstate<=F;
		num_water=num_water-1;
		end
		else
		begin
		currentstate<=H;
		$display("please choose another things because water end ") ;
		end
		end
		3'b000:
		begin
		$display("please give your remaining money : %d",H) ;
		currentstate<=initiall;
		end
		endcase
		end
		endcase
	end
	endcase
	end
end

endmodule
