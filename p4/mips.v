`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:53 11/16/2020 
// Design Name: 
// Module Name:    mips 
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
module mips(
input clk,
input reset
    );
wire [31:0] op;//机器码
wire [2:0] ALUop;//运算指令
wire RegWrite;//寄存器写指令
wire ALUmux;//选择信号，1时选择立即数作为ALU的第二个输入，0时选择寄存器第二个输出作为ALU的第二个输入
wire EXTop;//立即数扩展信号，1时符号扩展，0时无符号扩展
wire [1:0] A3mux;//写入寄存器选择信号，1时选择机器码20~16位的寄存器，0时选择机器码15~11位的寄存器，2时选择31号寄存器
wire [1:0] REGmux;//写入寄存器数据的选择信号，1时选择DM输出的数据，0时选择ALU输出的数据，2时选择pc+4的值
wire MemWrite;//DM写入使能信号
wire Branch;//判断是否为beq指令
wire j;//判断是否为j型指令
wire [31:0] pc4;//pc+4
wire [31:0] pc;//当前pc
wire jr;//判断是否为jr指令

wire [31:0] imm;//扩展之后的立即数
wire EQU;
wire [4:0] A3;//回写寄存器的编号
assign A3=(A3mux==2'b01)? {op[20:16]} : 
				(A3mux==2'b10)? 31 : {op[15:11]} ;

wire [31:0] RD1;//第一个寄存器编号读出的寄存器值
wire [31:0] RD2;//第二个寄存器编号读出的寄存器值
wire [31:0] WD;//回写寄存器的值

wire [31:0] ALURD2;//ALU的第二个输入
wire [31:0] ALUout;

wire [31:0] DMout;

assign ALURD2=(ALUmux==1) ? imm : RD2;
assign WD=(REGmux==2'b01) ? DMout :
				(REGmux==2'b10) ? pc4 : ALUout ;

controlling con (
    .instr(op), 
    .ALUop(ALUop), 
    .RegWrite(RegWrite), 
    .ALUmux(ALUmux), 
    .EXTop(EXTop), 
    .A3mux(A3mux), 
    .REGmux(REGmux), 
    .MemWrite(MemWrite), 
    .Beq(Branch),
	 .J(j),
	 .JR(jr)
    );
	 
IFU ifu (
    .imm(imm),
	 .j(j),
	 .op(op),
    .clk(clk), 
    .reset(reset), 
    .beq(Branch), 
    .EQU(EQU), 
    .out(op),
	 .pc4(pc4),
	 .wpc(pc),
	 .jr(jr),
	 .RD1(RD1)
    );
GRF grf (
    .A1(op[25:21]), 
    .A2(op[20:16]), 
    .A3(A3), 
    .RD1(RD1), 
    .RD2(RD2), 
	 .pc(pc),
    .WD(WD), 
    .WE(RegWrite), 
    .clk(clk), 
    .reset(reset)
    );
Ext ext (
    .EXTop(EXTop), 
    .imm(op[15:0]), 
    .out(imm)
    );
DM dm (
    .A(ALUout), 
	 .pc(pc),
    .RD(DMout), 
    .WD(RD2), 
    .WE(MemWrite), 
    .clk(clk), 
    .reset(reset)
    );

ALU alu (
    .ALUop(ALUop), 
    .RD1(RD1), 
    .RD2(ALURD2), 
    .OUT(ALUout), 
    .EQU(EQU)
    );



	 
endmodule
