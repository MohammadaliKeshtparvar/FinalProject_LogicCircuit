`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:23:46 01/26/2020 
// Design Name: 
// Module Name:    comprator4bit 
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
module comprator4bit (a,b,eq,gt,lt);
input [3:0] a;
input [3:0] b;
output eq , gt , lt;
wire [3:0] e;
wire [10:0] w;

xnor x1(e[0] , a[0] , b[0]),
	  x2(e[1] , a[1] , b[1]),
	  x3(e[2] , a[2] , b[2]),
	  x4(e[3] , a[3] , b[3]);
and aa(eq , e[0] , e[1] , e[2] , e[3]);

not n1(w[0] , b[0]),
	 n2(w[1] , b[1]),
	 n3(w[2] , b[2]),
	 n4(w[3] , b[3]);
	 
xnor xx1(w[4] , a[3],b[3]),
	  xx2(w[5] , a[2],b[2]),
	  xx3(w[6] , a[1],b[1]);
	  
and a1(w[7] , w[3] , a[3]),
	 a2(w[8] , w[2] , w[4] , a[2]),
	 a3(w[9] , w[1] , w[4] , w[5] , a[1]),
	 a4(w[10] , w[0] , w[4] , w[5] , w[6] , a[0]);
	 
	 
or o(gt , w[7] , w[8] , w[9] , w[10]);

nor nn(lt , gt , eq);
	 
endmodule
