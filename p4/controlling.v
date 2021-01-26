`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:30 11/16/2020 
// Design Name: 
// Module Name:    controlling 
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
`define adduop 6'b000000
`define subuop 6'b000000
`define oriop 6'b001101
`define lwop 6'b100011
`define swop 6'b101011
`define beqop 6'b000100
`define luiop 6'b001111
`define jop 6'b000010
`define jalop 6'b000011
`define jrop 6'b000000
`define addiop 6'b001000
`define jalrop 6'b000000

/////////////////////////fuction////////////////////
`define addu_fuction 6'b100001
`define subu_fuction 6'b100011
`define jr_fuction 6'b001000
`define jalr_fuction 6'b001001

module controlling(
    input [31:0] instr,
    output [2:0] ALUop,
    output RegWrite,
    output ALUmux,
    output EXTop,
    output [1:0] A3mux,
    output [1:0] REGmux,
    output MemWrite,
    output Beq,
	 output J,
	 output JR
    );
wire [4:0] rs;
wire [4:0] rt;
wire [4:0] rd;
wire [5:0] op;
wire [5:0] fuction;
assign rs=instr[25:21];
assign rt=instr[20:16];
assign rd=instr[15:11];
assign op=instr[31:26];
assign fuction=instr[5:0];

wire addu=((op==`adduop)&&(fuction==`addu_fuction));
wire addi=(op==`addiop);
wire subu=((op==`subuop)&&(fuction==`subu_fuction));
wire ori=(op==`oriop);
wire lw=(op==`lwop);
wire sw=(op==`swop);
wire beq=(op==`beqop);
wire lui=(op==`luiop);
wire j=(op==`jop);
wire jal=(op==`jalop);
wire jr=((op==`jrop)&&(fuction==`jr_fuction));
wire nop=(instr==8'h000000);
wire jalr=((op==`jalrop)&&(fuction==`jalr_fuction));

assign ALUop=(subu)? 3'b001 :
					(ori)? 3'b010 :
					(lui)? 3'b100 :
					3'b000;


assign RegWrite=((addu)||(subu)||(ori)||(lw)||(lui)||(jal)||(addi)||(jalr))? 1 :0 ;

assign ALUmux=((ori)||(lw)||(sw)||(lui)||(addi))? 1 : 0;//选择信号，1时选择立即数作为ALU的第二个输入，0时选择寄存器第二个输出作为ALU的第二个输入

assign EXTop=((lw)||(sw)||(beq)||(addi)) ? 1 : 0;

assign A3mux=((ori)||(lw)||(lui)||(addi)) ? 2'b01 : 
					(jal)? 2'b10 : 0;//写入寄存器选择信号，1时选择机器码20~16位的寄存器，0时选择机器码15~11位的寄存器，2时选择31号寄存器

assign REGmux=(lw)? 2'b01 :
					(jal||jalr)? 2'b10 : 0;//写入寄存器数据的选择信号，1时选择DM输出的数据，0时选择ALU输出的数据，2时选择pc+4的值

assign MemWrite=(sw)? 1 : 0;

assign Beq=(beq)? 1 : 0;

assign J=(jal||j) ? 1 : 0 ;

assign JR=(jr||jalr) ? 1 : 0;

endmodule
