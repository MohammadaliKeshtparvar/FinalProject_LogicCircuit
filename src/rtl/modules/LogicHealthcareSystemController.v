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
** Module Name: LogicHealthcareSystemController
**********************************************************
** Additional Comments:
*/

module LogicHealthcareSystemController(  
    clock,
    presureAbnormality,
    bloodAbnormality,
    fallDetected,
    temperatureAbnormality,
    nervousAbnormality,
    abnormaliryWarning);
  
input clock;
input presureAbnormality;
input bloodAbnormality;
input fallDetected;
input temperatureAbnormality;
input [1:0] nervousAbnormality;
output [2:0] abnormaliryWarning;

parameter S0=3'b000 , S1 = 3'b001 , S2 = 3'b010 , S3 = 3'b011 , S4 = 3'b100 , S5 = 3'b101 , S6 = 3'b110 ;

reg [2:0] nextstate ;

reg [2:0] psstate ;
initial psstate = S0;

always @ ( posedge clock)
 begin 
 psstate =  presureAbnormality +  bloodAbnormality + fallDetected + temperatureAbnormality + nervousAbnormality[0] + nervousAbnormality[1]  ; 
 
 case (psstate )
   S0 : if(psstate==S0)nextstate = S0;
	S1 : if(psstate==S1)nextstate = S1;
	S2 : if(psstate==S2)nextstate = S2;
	S3 : if(psstate==S3)nextstate = S3;
	S4 : if(psstate==S4)nextstate = S4;
	S5 : if(psstate==S5)nextstate = S5;
	S6 : if(psstate==S6)nextstate = S6;
	
	endcase
	end
 
assign abnormaliryWarning = nextstate ;
  

endmodule


