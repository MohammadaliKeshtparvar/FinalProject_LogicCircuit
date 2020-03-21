`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:53:06 01/27/2020
// Design Name:   ConfigurationUnit
// Module Name:   G:/projectfinal/testconf.v
// Project Name:  logicdesignproject-healthcaresystem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ConfigurationUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testconf;

	// Inputs
	reg clock;
	reg request;
	reg confirm;
	reg [7:0] key;
	reg [7:0] inputData;

	// Outputs
	wire [6:0] dataP;
	wire [6:0] dataQ;

	// Instantiate the Unit Under Test (UUT)
	ConfigurationUnit uut (
		.clock(clock), 
		.request(request), 
		.confirm(confirm), 
		.key(key), 
		.inputData(inputData), 
		.dataP(dataP), 
		.dataQ(dataQ)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		
		request = 1;
		
		confirm =1 ;
		#60
		key = 8'b11000000;
		
		inputData = 8'b11000000;
		#60
		inputData= 8'b00100101;

		// Wait 100 ns for global reset to finish
		//#100;
        
		// Add stimulus here

	end
      always #30  clock=~clock;
endmodule

