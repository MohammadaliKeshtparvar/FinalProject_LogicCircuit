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
** Module Name:
**********************************************************
** Additional Comments:
*/

module BloodPHAnalyzer(
        bloodPH,
        abnormalityP,
        abnormalityQ);
input [3:0] bloodPH;
output abnormalityP;
output abnormalityQ;
    wire p0 , p1 , p2 , p3;
	wire [4:0] w;
	not
		n1(p0 , bloodPH[0]),
		n2(p1 , bloodPH[1]),
		n3(p2 , bloodPH[2]),
		n4(p3 , bloodPH[3]);
		
	and
		a1 (w[1] , bloodPH[3] , bloodPH[0]),
		a2 (w[0] , bloodPH[2] , p1), 
		a3 (w[2] , bloodPH[1] , p0),
		a4 (w[3] , p3 , p2 ),
		a5 (w[4] , bloodPH[3] , bloodPH[1]);
	or
		out1 (abnormalityP , w[0] , w[1] , w[2] , w[3]),
		out2 (abnormalityQ , w[0] , w[3] , w[4]);
endmodule