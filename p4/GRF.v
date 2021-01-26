`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:29:25 11/16/2020 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input [4:0] A1,
    input [4:0] A2,
	 input [4:0] A3,
	 output [31:0] RD1,
	 output [31:0] RD2,
	 input [31:0] WD,
	 input [31:0] pc,
	 input WE,
	 input clk,
	 input reset
    );
reg [31:0] rst [0:31];
integer i;

initial
begin
for(i=0;i<=31;i=i+1)
begin
	rst[i]<=0;
end
end

always@(posedge clk)
begin
	if(reset)
	begin
		for(i=0;i<=31;i=i+1)
		begin
			rst[i]<=0;
		end
	end
	else if(WE)
	begin
	$display("%d@%h: $%d <= %h",$time, pc, A3, WD);
	if(A3!=0)
	rst[A3]<=WD;
	end
end

assign RD1=rst[A1];
assign RD2=rst[A2];

endmodule
