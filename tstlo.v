`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:35:44 01/26/2020
// Design Name:   LogicHealthcareSystemController
// Module Name:   C:/Users/lenovo/Desktop/projectfinal/tstlo.v
// Project Name:  logicdesignproject-healthcaresystem
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: LogicHealthcareSystemController
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tstlo;

	// Inputs
	reg clock;
	reg presureAbnormality;
	reg bloodAbnormality;
	reg fallDetected;
	reg temperatureAbnormality;
	reg [1:0] nervousAbnormality;

	// Outputs
	wire [2:0] abnormaliryWarning;

	// Instantiate the Unit Under Test (UUT)
	LogicHealthcareSystemController uut (
		.clock(clock), 
		.presureAbnormality(presureAbnormality), 
		.bloodAbnormality(bloodAbnormality), 
		.fallDetected(fallDetected), 
		.temperatureAbnormality(temperatureAbnormality), 
		.nervousAbnormality(nervousAbnormality), 
		.abnormaliryWarning(abnormaliryWarning)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		presureAbnormality = 0;
		bloodAbnormality = 0;
		fallDetected = 1;
		temperatureAbnormality = 1;
		nervousAbnormality = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
     always #30 clock=~clock; 
endmodule

