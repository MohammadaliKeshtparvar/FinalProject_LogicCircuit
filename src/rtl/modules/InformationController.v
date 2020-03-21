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
** Module Name: InformationController
**********************************************************
** Additional Comments:
*/


module InformationController(
        clock,
        request,
	 	confirm,
	 	password,
	 	user,
	 	writeRegP,
	 	writeRegQ
		);

input clock;
input request;
input confirm;
input [7:0] password;
input [7:0] user;

output writeRegP;
output writeRegQ;

reg [2:0] nstate,pstate;
reg writeRegP;
reg writeRegQ;
parameter A = 3'b000 , B = 3'b001 , C = 3'b010 , D = 3'b011 , E = 3'b100 , F = 3'b101 , G = 3'b110;
initial begin 
	pstate = A;
	end
always @ (posedge clock or negedge request)
	if (request == 0)  pstate = A;
		else pstate = nstate;

always @ (pstate or confirm or request or user)
	case (pstate)
		A : if (request == 1) nstate = B;
		B : if (user == password) begin if (confirm == 1) nstate = C;
														else nstate = B;
														end
				else nstate = E;
		C : if (confirm == 1) nstate = D;
		D : if (user[7] == 0) nstate = F;
						else nstate = G;
		F : nstate = A;
		G : nstate = A;
		endcase	
always @ (pstate) 
			case (pstate)
				A : begin writeRegP = 0; writeRegQ = 0; end
				B : begin writeRegP = 0; writeRegQ = 0; end
				C : begin writeRegP = 0; writeRegQ = 0; end
				D : begin writeRegP = 0; writeRegQ = 0; end
				F : begin writeRegP = 1; writeRegQ = 0; end
				G : begin writeRegP = 0; writeRegQ = 1; end
				endcase		
	
endmodule