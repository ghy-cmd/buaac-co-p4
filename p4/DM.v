`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:05:00 11/16/2020 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input [31:0] A,
    output [31:0] RD,
    input [31:0] WD,
	 input [31:0] pc,
    input WE,
    input clk,
    input reset
    );
	 
reg [31:0] rst [0:1023];
integer i;
initial
begin
for(i=0;i<=1023;i=i+1)
	begin
	rst[i]<=0;
	end
end

always@(posedge clk)
begin
	if(reset)
	begin
	for(i=0;i<=1023;i=i+1)
	begin
	rst[i]<=0;
	end
	end
	else if(WE)
	begin
	$display("%d@%h: *%h <= %h",$time, pc, A, WD);
	rst[A[11:2]]<=WD;
	end
end

assign RD=rst[A[11:2]];


endmodule
