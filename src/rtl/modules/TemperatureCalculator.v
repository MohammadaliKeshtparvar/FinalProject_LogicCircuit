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
** Module Name: TemperatureCalculator
**********************************************************
** Additional Comments:
*/

module TemperatureCalculator(
        factoryBaseTemp,
        factoryTempCoef,
        tempSensorValue,
        temperature);
input [7:0] factoryBaseTemp;
input [3:0] factoryTempCoef;
input [3:0] tempSensorValue;
output [7:0] temperature;
wire [7:0] X;
wire [7:0] Y;
wire cout;

		multi4bit g1(tempSensorValue,factoryTempCoef,X);
		
		assign Y={3'b000,X[7:3]};
		
		
		fuuladder8bit g2(factoryBaseTemp,Y,1'b0,temperature,cout);

endmodule
