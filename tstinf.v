`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:01:47 01/27/2020
// Design Name:   InformationController
// Module Name:   G:/projectfinal/tstinf.v
// Project Name:  logicdesignproject-healthcaresystem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InformationController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tstinf;

	// Inputs
	reg clock;
	reg request;
	reg confirm;
	reg [7:0] password;
	reg [7:0] user;

	// Outputs
	wire writeRegP;
	wire writeRegQ;

	// Instantiate the Unit Under Test (UUT)
	InformationController uut (
		.clock(clock), 
		.request(request), 
		.confirm(confirm), 
		.password(password), 
		.user(user), 
		.writeRegP(writeRegP), 
		.writeRegQ(writeRegQ)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		
		request = 1;
		
		confirm = 1;
		#60
		user = 8'b11000000;
		
		password = 8'b11000000;
		#60
		user = 8'b01000000;

		// Wait 100 ns for global reset to finish
		//#100;
        
		// Add stimulus here

	end
   always #30 clock =~clock;   
endmodule

