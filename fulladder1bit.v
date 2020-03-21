`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:27:57 01/26/2020 
// Design Name: 
// Module Name:    fulladder1bit 
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
module fulladder1bit(a,b,cin,sum,cout);
	input a,b,cin;
	output cout, sum;
	wire x,y,z;
	
	xor  g1(sum, a,b,cin);
	and  g2(x, a, b);
	or  g3(y, a, b);
	and  g4(z, y, cin);
	or  g5(cout, x, z);
	
endmodule