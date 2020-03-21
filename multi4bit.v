`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:25:25 01/26/2020 
// Design Name: 
// Module Name:    multi4bit 
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
module multi4bit(A,B,P);

input [3:0]A;
input [3:0]B;
output [7:0]P;
wire [3:0] X;
wire [11:0] Y;
wire cout1,cout2;
wire [7:0]sum;

	and g1(X[0],A[0],B[0]),
		 g2(X[1],A[1],B[0]),
		 g3(Y[0],A[0],B[1]),
		 g4(X[2],A[2],B[0]),
		 g5(Y[1],A[1],B[1]),
		 g6(X[3],A[3],B[0]),
		 g7(Y[2],A[2],B[1]),
		 g8(Y[3],A[3],B[1]);
	assign P[0]=X[0];
		 
	fulladder4bit g9({1'b0,X[3:1]},Y[3:0],1'b0,sum[3:0],cout1);
	assign P[1]=sum[0];
	
	and g10(Y[4],A[0],B[2]),
		 g11(Y[5],A[1],B[2]),
		 g12(Y[6],A[2],B[2]),
		 g13(Y[7],A[3],B[2]);
		 
	fulladder4bit g14({cout1,sum[3:1]},Y[7:4],1'b0,sum[7:4],cout2);
	assign P[2]=sum[4];
	
	and g15(Y[8],A[0],B[3]),
		 g16(Y[9],A[1],B[3]),
		 g17(Y[10],A[2],B[3]),
		 g18(Y[11],A[3],B[3]);
		 
	fulladder4bit g19({cout2,sum[7:5]},Y[11:8],1'b0,P[6:3],P[7]);

endmodule
