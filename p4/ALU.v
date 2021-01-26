`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:31:53 11/16/2020 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [2:0] ALUop,
    input [31:0] RD1,
    input [31:0] RD2,
    output [31:0] OUT,
	 output EQU
    );
assign OUT=(ALUop==0)? RD1+RD2 :
				(ALUop==1)? RD1-RD2 :
				(ALUop==2)? RD1|RD2 :
				(ALUop==4)? {RD2[15:0],{16{1'b0}}} :
				0;
integer i,temp;
initial
begin
temp=0;
for(i=0;i<=31;i=i+1)
begin
temp=temp+RD1[i];
end
end
assign EQU=(RD1==RD2)? 1 :0 ;

endmodule
