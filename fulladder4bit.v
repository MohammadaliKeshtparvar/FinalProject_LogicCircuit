`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:26 01/26/2020 
// Design Name: 
// Module Name:    fulladder4bit 
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
module fulladder4bit(a,b,cin,s,cout);
	input [3:0] a;
	input [3:0] b;
	input cin;
	output [3:0] s;
	output cout;
	wire c1,c2,c3;

	fulladder1bit g1(a[0], b[0], cin, s[0], c1),
					  g2(a[1], b[1], c1, s[1], c2),
		        	  g3(a[2], b[2], c2, s[2], c3),
			        g4(a[3], b[3], c3, s[3], cout);

endmodule