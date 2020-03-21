
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
** Module Name: Comparator8Bit
**********************************************************
** Additional Comments:
*/

module Comparator8Bit(
        inputP,
        inputQ,
        pLessThanQ,
        pEqualToQ,
        pGreaterThanQ
        );
input [7:0] inputP;
input [7:0] inputQ;
output pLessThanQ;
output pEqualToQ;
output pGreaterThanQ;

wire eq0 , gt0 , lt0;
wire eq1 , gt1 , lt1;
wire [3:0] w;

comprator4bit c1(inputP [3:0],inputQ [3:0] , eq0 , gt0 , lt0);
comprator4bit c2(inputP [7:4],inputQ [7:4] , eq1 , gt1 , lt1);

and a1(pEqualToQ , eq0 , eq1),
	 a2(w[0] , eq1 , gt0),
	 a3(w[1] , gt0 , lt1),
	 a4(w[2] , eq0 , lt1),
	 a5(w[3] , lt0 , gt1);

or o1(pGreaterThanQ , w[0] , w[1]),
   o2(pLessThanQ , w[2] , w[3]);


endmodule