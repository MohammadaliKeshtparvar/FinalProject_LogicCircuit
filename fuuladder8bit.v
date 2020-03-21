`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:15 01/26/2020 
// Design Name: 
// Module Name:    fuuladder8bit 
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
module fuuladder8bit(A, B, cin, S, cout);
	input [7:0] A, B;
	input cin;
	output [7:0] S;
	output cout;
	wire [7:0] C;
	wire inner_cout;
	
	fulladder4bit f1(A[3:0], B[3:0], cin, S[3:0], inner_cout);
	fulladder4bit f2(A[7:4], B[7:4], inner_cout, S[7:4], cout);

endmodule
