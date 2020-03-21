`timescale 1ns / 1ps
`default_nettype none

/*
**********************************************************
** Logic Design Final Project Fall, 2019 Semester
** Amirkabir University of Technology (Tehran Polytechnic)
** Department of Computer Engineering (CEIT-AUT)
** Logic Circuit Design Laboratory
** https://ceit.aut.ac.ir
**********************************************************
** Student ID: XXXXXXX
** Student ID: XXXXXXX
**********************************************************
** Module Name:PressureAnalyzer
**********************************************************
** Additional Comments:
*/

module PressureAnalyzer(
        pData,
        pWarning);
input [4:0] pData;
output pWarning;
wire [2:0] w;
wire p4 , p3;
not
	n1(p4 , pData[4]),
	n2(p3 , pData[3]);
		
and
	a1 (w[0] , p4 , p3),
	a2 (w[1] , pData[4] , pData[3]),
	a3 (w[2] , p3 , pData[2] , pData[1] , pData[0]);
		
or o1 (pWarning , w[0] , w[1] , w[2]);


endmodule
