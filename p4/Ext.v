`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:39:19 11/16/2020 
// Design Name: 
// Module Name:    Ext 
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
module Ext(
    input EXTop,
    input [15:0] imm,
    output [31:0] out
    );
assign out=(EXTop==1)? {{16{imm[15]}},imm} : {{16{1'b0}},imm};

endmodule
