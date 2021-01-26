`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:43:09 11/16/2020 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input [31:0] imm,
	 input [31:0] op,
	 input [31:0] RD1,
    input clk,
    input reset,
    input beq,
    input EQU,
	 input j,
	 input jr,
    output [31:0] out,
	 output [31:0] pc4,
	 output [31:0] wpc
    );
reg [31:0] rst [0:1023];
reg [31:0] pc;
assign pc4=pc+4;
assign wpc=pc;
initial
begin
$readmemh("code.txt",rst);
pc<=32'h00003000;
end
wire [31:0] npc=(EQU&beq)?(pc+4+(imm<<2)):
						(j)?{pc[31:28],op[25:0],{2{1'b0}}}:
						(jr)? RD1 : 
						pc+4;
always@(posedge clk)
begin
	if(reset)
	pc<=32'h00003000;
	/*
	else if(EQU&Branch==1)
	begin
	pc<=pc+4+(imm<<2);
	end
	
	else if(j==1)
	begin
	pc<={pc[31:28],op[25:0],{2{1'b0}}};	
	end
	
	else if(jr==1)
	begin
	pc<=RD1;
	end
	else
	pc<=pc+4;*/
	else pc<=npc;
end

assign out=rst[pc[11:2]];

endmodule
