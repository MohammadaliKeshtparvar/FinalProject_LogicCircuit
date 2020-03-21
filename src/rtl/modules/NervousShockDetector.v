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
** Module Name: NervousShockDetector
**********************************************************
** Additional Comments:
*/

module NervousShockDetector(
        clock,
        inputdata,
   nervousAbnormality);

input clock;
input inputdata;
output [1:0] nervousAbnormality;
 
 // write your code here, please.
parameter s0=5'b00000, s1=5'b00001, s2=5'b00010 ,s3=5'b00011 ,s4=5'b00100 ,s5=5'b00101 ,s6=5'b00110, s7=5'b00111 ,s8=5'b01000 ,s9=5'b01001 ,s10=5'b01010, s11=5'b01011 ,s12=5'b01100, s13=5'b01101, s14=5'b01110, s15=5'b01111, s16=5'b10000 , s17=5'b10001 ,s18=5'b10010, s19=5'b10011 ,s20=5'b10100 ; 
reg [4:0] prsstate, nextstate;
reg [1:0] nervousAbnormality;
reg q=1'b1;

always @(posedge clock)
begin
if(q) nextstate=s0;
prsstate=nextstate;
case(prsstate)

s0 :if(inputdata) nextstate=s1;    else  nextstate=s0;
s1 :if(inputdata) nextstate=s1;    else  nextstate=s2;
s2 :if(inputdata) nextstate=s3;    else  nextstate=s14;
s3 :if(inputdata) nextstate=s1;    else  nextstate=s4;
s4 :if(inputdata) nextstate=s5;    else  nextstate=s14;
s5 :if(inputdata) nextstate=s1;    else  nextstate=s6;
s6 :if(inputdata) nextstate=s7;    else  nextstate=s14;
s7 :if(inputdata) nextstate=s9;    else  nextstate=s8;
s8 :if(inputdata) nextstate=s10;   else  nextstate=s14;
s9 :if(inputdata) nextstate=s11;   else  nextstate=s2;
s10:if(inputdata) nextstate=s1;    else  nextstate=s12;
s11:if(inputdata) nextstate=s1;    else  nextstate=s13;
s12:if(inputdata) nextstate=s7;    else  nextstate=s14;
s13:if(inputdata) nextstate=s3;    else  nextstate=s14;
s14:if(inputdata) nextstate=s15;   else  nextstate=s0;
s15:if(inputdata) nextstate=s1;    else  nextstate=s16;
s16:if(inputdata) nextstate=s3;    else  nextstate=s17;
s17:if(inputdata) nextstate=s18;   else  nextstate=s0;
s18:if(inputdata) nextstate=s1;    else  nextstate=s19;
s19:if(inputdata) nextstate=s3;    else  nextstate=s20;
s20:if(inputdata) nextstate=s18;   else  nextstate=s0;
 endcase
 q=0;
 end
 
 always @ (prsstate or inputdata)
 begin
 if(prsstate==s12) nervousAbnormality=2'b11;
 else if (prsstate==s13) nervousAbnormality=2'b10;
   else if (prsstate==s18) nervousAbnormality=2'b01;
 else nervousAbnormality=2'b00;
 end
 
 
endmodule
