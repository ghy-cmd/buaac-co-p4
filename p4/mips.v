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
wire [31:0] op;//������
wire [2:0] ALUop;//����ָ��
wire RegWrite;//�Ĵ���дָ��
wire ALUmux;//ѡ���źţ�1ʱѡ����������ΪALU�ĵڶ������룬0ʱѡ��Ĵ����ڶ��������ΪALU�ĵڶ�������
wire EXTop;//��������չ�źţ�1ʱ������չ��0ʱ�޷�����չ
wire [1:0] A3mux;//д��Ĵ���ѡ���źţ�1ʱѡ�������20~16λ�ļĴ�����0ʱѡ�������15~11λ�ļĴ�����2ʱѡ��31�żĴ���
wire [1:0] REGmux;//д��Ĵ������ݵ�ѡ���źţ�1ʱѡ��DM��������ݣ�0ʱѡ��ALU��������ݣ�2ʱѡ��pc+4��ֵ
wire MemWrite;//DMд��ʹ���ź�
wire Branch;//�ж��Ƿ�Ϊbeqָ��
wire j;//�ж��Ƿ�Ϊj��ָ��
wire [31:0] pc4;//pc+4
wire [31:0] pc;//��ǰpc
wire jr;//�ж��Ƿ�Ϊjrָ��

wire [31:0] imm;//��չ֮���������
wire EQU;
wire [4:0] A3;//��д�Ĵ����ı��
assign A3=(A3mux==2'b01)? {op[20:16]} : 
				(A3mux==2'b10)? 31 : {op[15:11]} ;

wire [31:0] RD1;//��һ���Ĵ�����Ŷ����ļĴ���ֵ
wire [31:0] RD2;//�ڶ����Ĵ�����Ŷ����ļĴ���ֵ
wire [31:0] WD;//��д�Ĵ�����ֵ

wire [31:0] ALURD2;//ALU�ĵڶ�������
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
