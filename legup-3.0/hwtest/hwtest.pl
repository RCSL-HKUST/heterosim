#!/usr/bin/perl
use warnings;
use strict;
use POSIX qw/ceil/;

# Selected device family
my $devicefam = "";

my $device = "";

# Hardware source files
my $Vfile = "";

# Checking if device argument provided
# Later add capability to check for supported devices/families
if ($ARGV[0] eq "") {
	print "Device Family argument not provided.\n",
	      "Defaulting to CycloneII.\n";
	$devicefam = "CycloneII";
} else {
	$devicefam = $ARGV[0];
}
if ($ARGV[1] eq "") {
	print "Device argument not provided.\n",
	      "Defaulting to AUTO.\n";
	$device = "AUTO";
} else {
	$device = $ARGV[1];
}

my $bitsToToggle = 50;
if ($ARGV[2] ne "") {
    my $bitsToToggle = $ARGV[2];
}


#TODO: Change to use -e statement to enable appending to output.dat
mkdir ("$devicefam");
chdir ("$devicefam");
open (Fout, ">>output.dat");
my $date = qx/date/;
print Fout "Data collected on $date",
	   "Device Family: $devicefam\n",
	   "Device: $device\n\n";
close (Fout);
chdir ("..");

my $quartuspath = qx/which quartus/;
$quartuspath =~ s/bin\/\/quartus//g;
$quartuspath =~ s/bin\/quartus//g;
chomp($quartuspath);

#########################################################################################################
#													
# COMMAND LINE ARGUMENTS: DeviceFamily Device BitsToToggle CyclesToTest					
# 				1	  2	   3		4					
#													
# 1.DeviceFamily: Any of the Altera FPGA families supported. Do not include the space (i.e. CycloneII) 	
#													
# 2.Device: Any of the devices within the chosen device family. (i.e. EP2C35F672C6 on the DE2 Board)	
#													
# 3.BitsToToggle: The percentage of input bits to toggle when testing Power. (0 to 100)			
#													
# 4.CyclesToTest: The number of cycles to simulate when testing Power. (1000 balances speed/precision) 	
#
# 5.ClockPeriod: The clock period in ns for testing power (defaults to fmax from timing analysis) 	
#													
# To change bit widths to be tested:									
# 	Add/remove desired widths to/from the width array						
#													
# To change hardware modules to be run, add/remove the supported operations from the operations array	
# Supported Operations so far:										
#													
# 	Arithmetic:											
#	1- signed_add											
#	2- unsigned_add											
#	3- signed_subtract										
#	4- unsigned_subtract										
#	5- signed_multiply										
#	6- unsigned_multiply										
#	7- signed_divide										
#	8- unsigned_divide										
#	9- signed_modulus										
#	10- unsigned_modulus										
#													
#	Bitwise Logic:											
#	11- bitwise_OR											
#	12- bitwise_AND											
#	13- bitwise_XOR											
#													
#	Boolean Comparisons:										
#	14- unsigned_comp_lt										
#	15- signed_comp_lt										
#	16- unsigned_comp_gt										
#	17- signed_comp_gt										
#	18- signed_comp_eq										
#	19- unsigned_comp_eq										
#													
#	20- unsigned_comp_lte										
#	21- signed_comp_lte										
#	22- unsigned_comp_gte										
#	23- signed_comp_gte										
#	24- signed_comp_ne
#	25- unsigned_comp_ne 							
#													
#	Conditional Selecting Operations (min/max)[a = (b > c)? b:c]:														
#	26- unsigned_comp_gt_mux									
#	27- signed_comp_gt_mux										
#	28- signed_comp_eq_mux									
#	29- signed_comp_lt_mux
#	30- unsigned_comp_lt_mux											
#													
#	Shifting Operations: 										
#	29- shift_ll											
#	30- shift_rl											
#	31- shift_la											
#	32- shift_ra											
#													
#	Registers:											
#	33- reg												
#													
#	Multiplexers:											
#	34- mux_[NUMBEROFINPUTS] (i.e. mux_2 is a 2 to 1 Multiplexer)					
#													
#	Pipelined Mulitpliers:										
#	35- signed_multiply_pipelined_[NUMBEROFSTAGES] (i.e. signed_multiply_pipelined_3 has 3 stages)	
#	36- unsigned_multiply_pipelined_[NUMBEROFSTAGES]						
#													
#	Pipelined Dividers:										
#	37- signed_divide_pipelined_[NUMBEROFSTAGES] 							
#	38- unsigned_divide_pipelined_[NUMBEROFSTAGES]							
#													
#########################################################################################################

my @width = (8, 16, 32, 64);

my @pipelines;
for ( my $i = 5, my $j = 0; $i <= 100 ; $i += 5, $j++ ) {
	$pipelines[$j] = "signed_divide_pipelined" . "_$i";
}
my @operations = (
#@pipelines,
"signed_multiply_NODSP"
#"signed_add",											
#"unsigned_add",											
#"signed_subtract",										
#"unsigned_subtract",										
#"signed_multiply",										
#"unsigned_multiply",										
#"signed_divide",										
#"unsigned_divide",										
#"signed_modulus",										
#"unsigned_modulus",
#"bitwise_OR",											
#"bitwise_AND",											
#"bitwise_XOR",																								
#"unsigned_comp_lt",										
#"signed_comp_lt",										
#"unsigned_comp_gt",										
#"signed_comp_gt",										
#"signed_comp_eq",										
#"unsigned_comp_eq",											
#"unsigned_comp_lte",										
#"signed_comp_lte",										
#"unsigned_comp_gte",										
#"signed_comp_gte",										
#"signed_comp_ne",
#"unsigned_comp_ne", 																													
#"unsigned_comp_gt_mux",									
#"signed_comp_gt_mux",										
#"signed_comp_eq_mux",									
#"signed_comp_lt_mux",
#"unsigned_comp_lt_mux",																								 										
#"shift_ll",											
#"shift_rl",											
#"shift_la",											
#"shift_ra",																															
#"reg",
#"mux_2",
#"mux_3",
#"mux_4",
#"mux_5",
#"mux_6",
#"mux_7",
#"mux_8"
#"signed_multiply_pipelined_1",
#"signed_multiply_pipelined_2",
#"signed_multiply_pipelined_3",
#"signed_multiply_pipelined_4",
#"unsigned_multiply_pipelined_1",
#"unsigned_multiply_pipelined_2",
#"unsigned_multiply_pipelined_3",
#"unsigned_multiply_pipelined_4",
#"signed_divide_pipelined_1",
#"signed_divide_pipelined_2",
#"signed_divide_pipelined_3",
#"signed_divide_pipelined_4",
#"signed_divide_pipelined_5",
#"signed_divide_pipelined_6",
#"unsigned_divide_pipelined_1",
#"unsigned_divide_pipelined_2",
#"unsigned_divide_pipelined_3",
#"unsigned_divide_pipelined_4",
#"unsigned_divide_pipelined_5",
#"unsigned_divide_pipelined_6",					
);
# Graph type would be either "lines" or "scat"
my $graphtype = "scat";
		  
foreach my $operation (@operations) {	   		    	
	foreach my $width (@width) {
		$Vfile = "$operation\_$width";
		system ("mkdir -p $devicefam/$operation/$Vfile");
		chdir ("$devicefam/$operation/$Vfile");
		my @params = split(/_/, $operation);
		unless (-e "$Vfile.qpf") {
			# Creates project setup file
			open (Fout, ">setup_proj.tcl");
			print Fout "project_new $Vfile -overwrite\n",
				   "set_global_assignment -name FAMILY $devicefam\n",
			 		 "set_global_assignment -name SDC_FILE $Vfile.sdc\n",
				   "set_global_assignment -name DEVICE $device\n",
				   "set_global_assignment -name TOP_LEVEL_ENTITY $Vfile\n",
				   "set_global_assignment -name SOURCE_FILE $Vfile.v\n",
				   "set_global_assignment -name EDA_SIMULATION_TOOL \"ModelSim (Verilog)\"\n",
				   "set_global_assignment -name EDA_OUTPUT_DATA_FORMAT \"VERILOG HDL\" -section_id eda_simulation\n",
				   "set_global_assignment -name EDA_TEST_BENCH_DESIGN_INSTANCE_NAME $Vfile -section_id eda_simulation\n",
				   "set_global_assignment -name EDA_WRITE_NODES_FOR_POWER_ESTIMATION ALL_NODES -section_id eda_simulation\n",
				   "set_global_assignment -name EDA_MAP_ILLEGAL_CHARACTERS ON -section_id eda_simulation\n",
				   "set_global_assignment -name EDA_TIME_SCALE \"1 ps\" -section_id eda_simulation\n",
				   "set_global_assignment -name EDA_ENABLE_GLITCH_FILTERING ON -section_id eda_simulation\n";
			# Condition for wrapper/top level source file when using LPM models
			if ($params[2] eq "pipelined") {
				print Fout "set_global_assignment -name SOURCE_FILE $operation.v\n";
			}
			# Condition for embedded multiplier use
			if ($params[2] eq "NODSP" || $params[4] eq "NODSP") {
				print Fout "set_global_assignment -name MAX_BALANCING_DSP_BLOCKS 0\n";
			}	   
			print Fout "set_global_assignment -name NUMBER_OF_PATHS_TO_REPORT 100000\n",
				   "create_base_clock -fmax 1500MHz -target clk clk\n",
				   "project_close";
			close (Fout);
			
			# Creates Hardware Component's parametrized verilog file
			open (Fout, ">$Vfile.v");
			# Setting operator based on operation type
			my $operator = "";
			if ($params[1] eq "add") {
				$operator = "+";
			} elsif ($params[1] eq "subtract") {
				$operator = "-";
			} elsif ($params[1] eq "multiply") {
				$operator = "*";
			} elsif ($params[1] eq "divide") {
				$operator = "/";
			} elsif ($params[1] eq "modulus") {
				$operator = "%";
			} elsif ($params[1] eq "AND") {
				$operator = "&";
			} elsif ($params[1] eq "OR") {
				$operator = "|";
			} elsif ($params[1] eq "XOR") {
				$operator = "^";
			} elsif ($params[1] eq "ll") {
				$operator = "<<";
			} elsif ($params[1] eq "rl") {
				$operator = ">>";
			} elsif ($params[1] eq "la") {
				$operator = "<<<";
			} elsif ($params[1] eq "ra") {
				$operator = ">>>";
			} elsif ($params[2] eq "lt") {
				$operator = "<";
			} elsif ($params[2] eq "gt") {
				$operator = ">";
			} elsif ($params[2] eq "eq") {
				$operator = "==";
			} elsif ($params[2] eq "ne") {
				$operator = "!=";
			} elsif ($params[2] eq "lte") {
				$operator = "<=";
			} elsif ($params[2] eq "gte") {
				$operator = ">=";
			}
			# Naming module and setting width parameter
			print Fout "module $operation\_$width\n",
				   "#(parameter WIDTH=$width)\n",
				   "(\n";
			# INPUTS	   
			if ($params[0] eq "signed" || $params[1] eq "la" || $params[1] eq "ra") {
				print Fout "	input signed [WIDTH-1:0] dataa,\n",
					   "	input signed [WIDTH-1:0] datab,\n";
			} elsif ($params[0] eq "mux") {
				for (my $i = 0 ; $i < $params[1] ; $i++) {
					print Fout "	input [WIDTH-1:0] data$i\,\n";
				} 
				my $selwidth = ceil(log($params[1])/log(2));
				my $selindex = $selwidth - 1;
				if ($selindex == 0) {
					print Fout "	input select,\n";
				} else {
					print Fout "	input [$selindex:0] select,\n";
				}
			} elsif ($params[0] eq "reg") {
				print Fout "	input [WIDTH-1:0] datain,\n";
			} else {
				print Fout "	input [WIDTH-1:0] dataa,\n",
					   "	input [WIDTH-1:0] datab,\n";   
			}
			print Fout "	input clk,\n";
			# OUTPUTS
			if($params[1] ne "multiply") { 	   
				if(($params[1] eq "comp") && ($params[3] ne "mux")) {
					print Fout "	output reg dataout\n";
				} else {
					print Fout "	output reg [WIDTH-1:0] dataout\n";
				}
			} else {
				print Fout "	output reg [WIDTH-1:0] dataout\n";
			}	   
			print Fout ");\n";
			# REG
			if ($params[0] eq "signed" || $params[1] eq "la" || $params[1] eq "ra") {
				print Fout "	reg signed [WIDTH-1:0] dataa_reg;\n",
				   	   "	reg signed [WIDTH-1:0] datab_reg;\n";
			} elsif ($params[0] eq "mux") {
				my $selwidth = ceil(log($params[1])/log(2));
				my $selindex = $selwidth - 1;
				if ($selindex == 0) {
					print Fout "	reg select_reg;\n";
				} else {
					print Fout "	reg [$selindex:0] select_reg;\n";
				}
				for (my $i = 0 ; $i < $params[1] ; $i++) {
					print Fout "	reg [WIDTH-1:0] data$i\_reg;\n";
				} 
			} elsif ($params[0] eq "reg") {
				print Fout "	reg [WIDTH-1:0] datain_reg;\n",
					   "	reg [WIDTH-1:0] data_reg;\n";
			} else {
				print Fout "	reg [WIDTH-1:0] dataa_reg;\n",
				   	   "	reg [WIDTH-1:0] datab_reg;\n";
			}
			# WIRES
			if ($params[2] eq "pipelined") {
				if ($params[1] eq "multiply") {
					print Fout "\n",
						   "	wire [WIDTH-1:0] result;\n";
				} elsif ($params[0] eq "mux") {
					#print Fout "\n",
						   #"	wire [WIDTH-1:0] result;\n";
				} elsif ($params[1] eq "divide") {
					print Fout "\n",
						   "	wire [WIDTH-1:0] result;\n",
						   "	wire [WIDTH-1:0] remain;\n";
				}
			}
			# ALWAYS BLOCK
			print Fout "\n	always @ (posedge clk)\n",
				   "	begin\n";
				   
			if ($params[0] eq "reg"){
				print Fout "		datain_reg <= datain;\n",
					   " 		data_reg <= datain_reg;\n";
			} elsif ($params[0] ne "mux") {
				print Fout "		dataa_reg <= dataa;\n",
				   	   "		datab_reg <= datab;\n";
			} else {
				my $selwidth = ceil(log($params[1])/log(2));
				print Fout "		select_reg <= select;\n";
				for (my $i = 0 ; $i < $params[1] ; $i++ ) {
					print Fout "		data$i\_reg <= data$i;\n";
				}
				print Fout "		case (select_reg)\n";
				for (my $i = 0 ; $i < $params[1] ; $i++ ) {
					my $bin = sprintf("%b", $i);
					print Fout "			$selwidth\'b$bin:\n",
							   "				dataout <= data$i\_reg;\n\n";
				}
				print Fout "			default:\n",
						   "				dataout <= data0_reg;\n",
						   "		endcase\n";
			}
			if ($params[2] eq "pipelined") {
				print Fout "		dataout <= result;\n";
			} elsif ($params[0] eq "mux") {
				#empty
			} elsif ($params[0] eq "reg") {
				print Fout "		dataout <= data_reg;\n";
			} elsif ($params[3] ne "mux") {
				print Fout "		dataout <= dataa_reg $operator datab_reg;\n";
			} else {
				print Fout "		dataout <= (dataa_reg $operator datab_reg)? dataa_reg:datab_reg;\n";
			}
			print Fout "	end\n\n";
			# INSTANTIATIONS
			if ($params[2] eq "pipelined") {
				if ($params[1] eq "multiply") {
					print Fout "	$operation $operation\_inst (\n",
						   "	.clock (clk),\n",
						   "	.dataa (dataa_reg),\n",
						   "	.datab (datab_reg),\n",
						   "	.result (result)\n",
						   "	);\n\n";
				} else {
					print Fout "	$operation $operation\_inst (\n",
						   "	.clock (clk),\n",
						   "	.denom (datab_reg),\n",
						   "	.numer (dataa_reg),\n",
						   "	.quotient (result),\n",
						   "	.remain (remain),\n",
						   "	);\n\n";
				}		   
			} elsif ($params[0] eq "mux") {
				#print Fout "	$operation $operation\_inst (\n";
				#for ( my $i = 0 ; $i < $params[1] ; $i++ ) {
				#	print Fout "	.data$i","x (data$i\_reg),\n",
				#}	   
				#print Fout "	.sel (select_reg),\n",
				#	   "	.result (result)\n",
				#	   "	);\n\n";
			}
			print Fout "endmodule\n";
			close (Fout);
			# PIPELINED LPMs		
			if ($params[2] eq "pipelined" || $params[0] eq "mux") {
				my $ismux = ($params[0] eq "mux")? 1:0;
				my $pipelines = 0;
				unless ($ismux == 1) {
					$pipelines = $params[3];
				} else {
					$pipelines = $params[2];
				}
				my $muxsize = $params[1];	
				my $signed = ($params[0] eq "signed")? 1:0;
				my $signedstring = ($signed == 1)? "SIGNED":"UNSIGNED";
				my $ismult = ($params[1] eq "multiply")? 1:0;
				my $LPM = ($ismult == 1)? "MULT":($ismux == 0)? "DIVIDE":"MUX";
				my $lpm = ($ismult == 1)? "mult":($ismux == 0)? "divide":"mux";
				my $multwidth = 0;
				my $selwidth = 0;
				if ($ismult == 1) {
					$multwidth = 2*$width;
				} elsif ($params[0] eq "mux") {
					$selwidth = ceil(log($params[1])/log(2));
				}	
				open (Fout,">$operation.v");
				print Fout "// megafunction wizard: \%LPM_$LPM\%VBB\%\n",
				"// GENERATION: STANDARD\n",
				"// VERSION: WM1.0\n",
				"// MODULE: lpm_mult\n", 
				"\n",
				"// ============================================================\n",
				"// File Name: $operation.v\n",
				"// Megafunction Name(s):\n",
				"// 			lpm_$lpm\n",
				"//\n",
				"// Simulation Library Files(s):\n",
				"// 			lpm\n",
				"// ============================================================\n",
				"// ************************************************************\n",
				"// THIS IS A WIZARD-GENERATED FILE. DO NOT EDIT THIS FILE!\n",
				"//\n",
				"// 9.1 Build 222 10/21/2009 SJ Web Edition\n",
				"// ************************************************************\n",
				"\n",
				"//Copyright (C) 1991-2009 Altera Corporation\n",
				"//Your use of Altera Corporation's design tools, logic functions\n", 
				"//and other software and tools, and its AMPP partner logic\n",
				"//functions, and any output files from any of the foregoing\n",
				"//(including device programming or simulation files), and any\n",
				"//associated documentation or information are expressly subject\n",
				"//to the terms and conditions of the Altera Program License\n",
				"//Subscription Agreement, Altera MegaCore Function License\n",
				"//Agreement, or other applicable license agreement, including,\n",
				"//without limitation, that your use is for the sole purpose of\n",
				"//programming logic devices manufactured by Altera and sold by\n",
				"//Altera or its authorized distributors.  Please refer to the\n",
				"//applicable agreement for further details.\n",
				"\n",
				"module $operation (\n";
				if ($ismult == 1) {
					print Fout "	clock,\n",
						   "	dataa,\n",
						   "	datab,\n",
						   "	result);\n",
						   "\n",
						   "	input	  clock;\n",
						   "	input	[31:0]  dataa;\n",
						   "	input	[31:0]  datab;\n",
						   "	output	[31:0]  result;\n",
						   "\n",
						   "endmodule\n";
				} elsif ($ismult == 0 && $ismux == 0) {
					print Fout "	clock,\n",
						   "	denom,\n",
						   "	numer,\n",
						   "	quotient,\n",
						   "	remain);\n",
						   "\n",
						   "	input	  clock;\n",
						   "	input	[31:0]  denom;\n",
						   "	input	[31:0]  numer;\n",
						   "	output	[31:0]  quotient;\n",
						   "	output	[31:0]  remain;\n",
						   "\n",
						   "endmodule\n";
				} else {
					print Fout "	data0x,\n",
						   "	data1x,\n",
						   "	sel,\n",
						   "	result);\n",
						   "\n",
						   "	input	[31:0]  data0x;\n",
						   "	input	[31:0]  data1x;\n",
						   "	input	  sel;\n",
						   "	output	[31:0]  result;\n",
						   "\n",
						   "endmodule\n";
				}		   		   
				print Fout "\n",
					   "// ============================================================\n",
					   "// CNX file retrieval info\n",
					   "// ============================================================\n";
				if ($ismult == 1) {
					print Fout "// Retrieval info: PRIVATE: AutoSizeResult NUMERIC \"1\"\n",
						   "// Retrieval info: PRIVATE: B_isConstant NUMERIC \"0\"\n",
						   "// Retrieval info: PRIVATE: ConstantB NUMERIC \"0\"\n",
						   "// Retrieval info: PRIVATE: INTENDED_DEVICE_FAMILY STRING \"$devicefam\"\n",
						   "// Retrieval info: PRIVATE: LPM_PIPELINE NUMERIC \"$pipelines\"\n",
						   "// Retrieval info: PRIVATE: Latency NUMERIC \"1\"\n",
						   "// Retrieval info: PRIVATE: SYNTH_WRAPPER_GEN_POSTFIX STRING \"0\"\n",
						   "// Retrieval info: PRIVATE: SignedMult NUMERIC \"$signed\"\n",
						   "// Retrieval info: PRIVATE: USE_MULT NUMERIC \"1\"\n",
						   "// Retrieval info: PRIVATE: ValidConstant NUMERIC \"0\"\n",
						   "// Retrieval info: PRIVATE: WidthA NUMERIC \"$width\"\n",
						   "// Retrieval info: PRIVATE: WidthB NUMERIC \"$width\"\n",
						   "// Retrieval info: PRIVATE: WidthP NUMERIC \"$width\"\n",
						   "// Retrieval info: PRIVATE: aclr NUMERIC \"0\"\n",
						   "// Retrieval info: PRIVATE: clken NUMERIC \"0\"\n",
						   "// Retrieval info: PRIVATE: optimize NUMERIC \"0\"\n",
						   "// Retrieval info: CONSTANT: LPM_HINT STRING \"MAXIMIZE_SPEED=5\"\n",
						   "// Retrieval info: CONSTANT: LPM_PIPELINE NUMERIC \"$pipelines\"\n",
						   "// Retrieval info: CONSTANT: LPM_REPRESENTATION STRING \"$signedstring\"\n",
						   "// Retrieval info: CONSTANT: LPM_TYPE STRING \"LPM_MULT\"\n",
						   "// Retrieval info: CONSTANT: LPM_WIDTHA NUMERIC \"$width\"\n",
						   "// Retrieval info: CONSTANT: LPM_WIDTHB NUMERIC \"$width\"\n",
						   "// Retrieval info: CONSTANT: LPM_WIDTHP NUMERIC \"$width\"\n",
						   "// Retrieval info: USED_PORT: clock 0 0 0 0 INPUT NODEFVAL clock\n",
						   "// Retrieval info: USED_PORT: dataa 0 0 32 0 INPUT NODEFVAL dataa[31..0]\n",
						   "// Retrieval info: USED_PORT: datab 0 0 32 0 INPUT NODEFVAL datab[31..0]\n",
						   "// Retrieval info: USED_PORT: result 0 0 32 0 OUTPUT NODEFVAL result[31..0]\n",
						   "// Retrieval info: CONNECT: \@dataa 0 0 32 0 dataa 0 0 32 0\n",
						   "// Retrieval info: CONNECT: result 0 0 32 0 \@result 0 0 32 0\n",
						   "// Retrieval info: CONNECT: \@datab 0 0 32 0 datab 0 0 32 0\n",
						   "// Retrieval info: CONNECT: \@clock 0 0 0 0 clock 0 0 0 0\n",
						   "// Retrieval info: LIBRARY: lpm lpm.lpm_components.all\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.v TRUE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.inc FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.cmp FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.bsf TRUE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation\_inst.v TRUE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation\_bb.v TRUE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation\_waveforms.html FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation\_wave*.jpg FALSE\n",
						   "// Retrieval info: LIB_FILE: lpm\n";
				} elsif ($ismult == 0 && $ismux == 0) {
					print Fout "// Retrieval info: PRIVATE: INTENDED_DEVICE_FAMILY STRING \"$devicefam\"\n",
						   "// Retrieval info: PRIVATE: PRIVATE_LPM_REMAINDERPOSITIVE STRING \"FALSE\"\n",
						   "// Retrieval info: PRIVATE: PRIVATE_MAXIMIZE_SPEED NUMERIC \"-1\"\n",
						   "// Retrieval info: PRIVATE: SYNTH_WRAPPER_GEN_POSTFIX STRING \"0\"\n",
						   "// Retrieval info: PRIVATE: USING_PIPELINE NUMERIC \"$pipelines\"\n",
						   "// Retrieval info: PRIVATE: VERSION_NUMBER NUMERIC \"2\"\n",
						   "// Retrieval info: CONSTANT: LPM_DREPRESENTATION STRING \"$signedstring\"\n",
						   "// Retrieval info: CONSTANT: LPM_HINT STRING \"LPM_REMAINDERPOSITIVE=FALSE\"\n",
						   "// Retrieval info: CONSTANT: LPM_NREPRESENTATION STRING \"$signedstring\"\n",
						   "// Retrieval info: CONSTANT: LPM_PIPELINE NUMERIC \"$pipelines\"\n",
						   "// Retrieval info: CONSTANT: LPM_TYPE STRING \"LPM_DIVIDE\"\n",
						   "// Retrieval info: CONSTANT: LPM_WIDTHD NUMERIC \"$width\"\n",
						   "// Retrieval info: CONSTANT: LPM_WIDTHN NUMERIC \"$width\"\n",
						   "// Retrieval info: USED_PORT: clock 0 0 0 0 INPUT NODEFVAL clock\n",
						   "// Retrieval info: USED_PORT: denom 0 0 32 0 INPUT NODEFVAL denom[31..0]\n",
						   "// Retrieval info: USED_PORT: numer 0 0 32 0 INPUT NODEFVAL numer[31..0]\n",
						   "// Retrieval info: USED_PORT: quotient 0 0 32 0 OUTPUT NODEFVAL quotient[31..0]\n",
						   "// Retrieval info: USED_PORT: remain 0 0 32 0 OUTPUT NODEFVAL remain[31..0]\n",
						   "// Retrieval info: CONNECT: \@numer 0 0 32 0 numer 0 0 32 0\n",
						   "// Retrieval info: CONNECT: \@denom 0 0 32 0 denom 0 0 32 0\n",
						   "// Retrieval info: CONNECT: quotient 0 0 32 0 \@quotient 0 0 32 0\n",
						   "// Retrieval info: CONNECT: remain 0 0 32 0 \@remain 0 0 32 0\n",
						   "// Retrieval info: CONNECT: \@clock 0 0 0 0 clock 0 0 0 0\n",
						   "// Retrieval info: LIBRARY: lpm lpm.lpm_components.all\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.v TRUE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.inc FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.cmp FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.bsf FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation\_inst.v TRUE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation\_bb.v TRUE\n",
						   "// Retrieval info: LIB_FILE: lpm\n";
				} else {
					print Fout "// Retrieval info: PRIVATE: INTENDED_DEVICE_FAMILY STRING \"$devicefam\"\n",
						   "// Retrieval info: PRIVATE: SYNTH_WRAPPER_GEN_POSTFIX STRING \"0\"\n",
						   "// Retrieval info: CONSTANT: LPM_SIZE NUMERIC \"$muxsize\"\n",
						   "// Retrieval info: CONSTANT: LPM_TYPE STRING \"LPM_MUX\"\n",
						   "// Retrieval info: CONSTANT: LPM_WIDTH NUMERIC \"$width\"\n",
						   "// Retrieval info: CONSTANT: LPM_WIDTHS NUMERIC \"$selwidth\"\n",
						   "// Retrieval info: USED_PORT: data0x 0 0 32 0 INPUT NODEFVAL data0x[31..0]\n",
						   "// Retrieval info: USED_PORT: data1x 0 0 32 0 INPUT NODEFVAL data1x[31..0]\n",
						   "// Retrieval info: USED_PORT: result 0 0 32 0 OUTPUT NODEFVAL result[31..0]\n",
						   "// Retrieval info: USED_PORT: sel 0 0 0 0 INPUT NODEFVAL sel\n",
						   "// Retrieval info: CONNECT: result 0 0 32 0 \@result 0 0 32 0\n",
						   "// Retrieval info: CONNECT: \@data 0 0 32 32 data1x 0 0 32 0\n",
						   "// Retrieval info: CONNECT: \@data 0 0 32 0 data0x 0 0 32 0\n",
						   "// Retrieval info: CONNECT: \@sel 0 0 1 0 sel 0 0 0 0\n",
						   "// Retrieval info: LIBRARY: lpm lpm.lpm_components.all\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.v TRUE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.inc FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.cmp FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation.bsf FALSE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation\_inst.v TRUE\n",
						   "// Retrieval info: GEN_FILE: TYPE_NORMAL $operation\_bb.v TRUE\n",
						   "// Retrieval info: LIB_FILE: lpm\n";
				}	
				close (Fout);
			}

			open (Fout, ">$Vfile.sdc"); # > means overwrite, >> is append
			print Fout "create_clock -period 1 -name clk [get_ports clk]\n";
			close (Fout);

			# Executes commands to create/compile project
			if ($params[2] eq "pipelined") {
				system ("qmegawiz -silent $operation.v");
			}
			my @commands = ("quartus_sh -t setup_proj.tcl $Vfile.v",
					"quartus_sh --flow compile $Vfile",
					"quartus_sta $Vfile"
					);
			foreach my $command (@commands) {
				system ($command);
			}
		}
		
		# Gathers required data and writes it to "output.dat"
		my $line = qx/grep -A6 "Fmax Summary" $Vfile.sta.rpt/;
		my $Fmax = 0;
		my $FmaxRestriction = 0;
		if ($line =~ /([\.\d]+) MHz[\s]+;[\s]+([\.\d]+)/) {
			$Fmax = $1;
			$FmaxRestriction = $2;
		} else {
			$line = qx/grep "Fmax is" $Vfile.sta.rpt/;
			if($line =~ /([\.\d]+) MHz/) {
				$Fmax = $FmaxRestriction = $1;
			}
		}
		$line = qx/grep "Longest register to register delay" $Vfile.sta.rpt/;
		my $RtoRmax = 0; # This does not exist in sta.rpt anymore, can calculate manually
		if ($line =~ /([\.\d]+) ns/) {
			$RtoRmax = $1;
		} else {
			$line = qx/grep -B5 "; tsu" $Vfile.sta.rpt/;
			my @toks = split(/;/, $line);
			if ($toks[8] =~ /([\.\d]+) ns/) {
				$RtoRmax = $1;
			}
		}
		$line = qx/grep "Estimated ALMs:  partially or completely used" $Vfile.map.rpt/;
		my $LEs = 0;
		if ($line =~ /([,\d]+)/) {
			$LEs = $1;
			$LEs =~ s/,//g;
		} else {
			$line = qx/grep "Total logic elements" $Vfile.map.summary/;
			if ($line =~ /:\s([,\d]+)/) {
				$LEs = $1;
				$LEs =~ s/,//g;
			}
		}
		$line = qx/grep "DSP" $Vfile.map.summary/;
		my $DSPblocks = 0;
		if ($line =~ /:\s([,\d]+)/) {
			$DSPblocks = $1;
			$DSPblocks =~ s/,//g;
		} else {
			$line = qx/grep "Embedded Multiplier" $Vfile.map.summary/;
			if ($line =~ /:\s([,\d]+)/) {
				$DSPblocks = $1;
				$DSPblocks =~ s/,//g;
			}
		}
		$line = qx/grep "Total registers" $Vfile.map.rpt/;
		my $Regs = 0;
		if ($line =~ /([,\d]+)/) {
			$Regs = $1;
			$Regs =~ s/,//g;
		}

		my $LUTs = 0;
		if ($devicefam eq "CycloneII") {
			$line = qx/grep "Total combinational functions" $Vfile.map.rpt/;
			if ($line =~ /([,\d]+)/) {
				$LUTs = $1;
				$LUTs =~ s/,//g;
			}
		} else {
			$line = qx/grep "Combinational ALUTs" $Vfile.map.rpt/;
			if ($line =~ /([,\d]+)/) {
				$LUTs = $1;
				$LUTs =~ s/,//g;
			}
		}

		# Creates sim.do in simulation/modelsim
		my $cycloneiisim = $quartuspath . "eda/sim_lib/cycloneii_atoms.v";
#	  my $cycloneiisim = "~/Desktop/legup/tiger/hybrid/processor/tiger_cache_on_avalon/lib/cycloneii_atoms.v";
		my $stratixiiisim = $quartuspath . "eda/sim_lib/stratixiii_atoms.v";
		my $stratixivsim = $quartuspath . "eda/sim_lib/stratixiv_atoms.v";
		my $primitivesim = $quartuspath . "eda/sim_lib/altera_primitives.v";
		system ("mkdir -p simulation/modelsim");
		chdir ("simulation/modelsim");
		open (Fout, ">>sim.do");
		my $Cycles = 1000;

		my $RandNum = 2**int( $width*($bitsToToggle/100) - 1 ) - 1;

		if ($ARGV[3] ne "") {
			$Cycles = $ARGV[3];
		}
		my $Period = 1000/$FmaxRestriction;
		if ($ARGV[4] ne "") {
			$Period = 1000/$ARGV[4];
		}
		my $ClkHigh = $Period/4;
		my $ClkLow = (3*$Period)/4;
		my $Unit = "ns";
		print Fout "vsim -t 1ps -L work $Vfile\n",
			   "add wave -r /*\n",
			   "do $Vfile\_dump_all_vcd_nodes.tcl\n",
			   "force -freeze sim:/$Vfile/clk 1 $ClkHigh$Unit, 0 {$ClkLow $Unit} -r $Period$Unit\n",
			   "for {set i 0} {\$i < $Cycles} {incr i} {\n";
			   
		if ($params[0] eq "mux") {
			for (my $i = 0 ; $i < $params[1] ; $i++) {
				print Fout "    force sim:/$Vfile/data$i 10#[expr {int(rand()*$RandNum)}] [expr {$Period*\$i}]$Unit\n";
			} 
			my $selwidth = ceil(log($params[1])/log(2));
			my $RandSel = (2**($selwidth - 1))-1;
			print Fout "    force sim:/$Vfile/select 10#[expr {int(rand()*$RandSel)}] [expr {$Period*\$i}]$Unit\n";
		} elsif ($params[0] eq "reg") {
			print Fout "    force sim:/$Vfile/datain 10#[expr {int(rand()*$RandNum)}] [expr {$Period*\$i}]$Unit\n";
		} else {
			print Fout "    force sim:/$Vfile/dataa 10#[expr {int(rand()*$RandNum)}] [expr {$Period*\$i}]$Unit\n",
					   "    force sim:/$Vfile/datab 10#[expr {int(rand()*$RandNum)}] [expr {$Period*\$i}]$Unit\n"; 
		}	   
		print Fout "}\n",
			   "run [expr {$Period*\$i}]$Unit\n",
			   "vcd flush\n",
			   "exit\n";
		close (Fout);
		chdir ("../..");
		# Runs power simulation and quartus power analyzer

		my @powercommands;
		if ($devicefam eq "CycloneII") {
			@powercommands = ("cd simulation/modelsim/ && vlib work && vlog $Vfile.vo && vlog -work work $cycloneiisim && vsim -c -do sim.do",
					"cp simulation/modelsim/$Vfile.vcd $Vfile.vcd",
					"quartus_pow $Vfile --input_vcd=$Vfile.vcd --use_vectorless_estimation=on --vcd_filter_glitches=on");
		} else {
			@powercommands = ("cd simulation/modelsim/ && vlib work && vlog $Vfile.vo && vlog -work work $primitivesim $stratixiiisim $stratixivsim && vsim -c -do sim.do",
					"cp simulation/modelsim/$Vfile.vcd $Vfile.vcd",
					"quartus_pow $Vfile --input_vcd=$Vfile.vcd --use_vectorless_estimation=on --vcd_filter_glitches=on");
		}

		foreach my $powercommand (@powercommands) {
			system ($powercommand);
		}
		$line = qx/grep "Core Static Thermal" $Vfile.pow.summary/;
		my $StaticPower = 0;
		if($line =~ /([,\.\d]+) mW/) {
			$StaticPower = $1;
			$StaticPower =~ s/,//g;
		}
		$line = qx/grep "Core Dynamic Thermal" $Vfile.pow.summary/;
		my $DynamicPower = 0;
		if($line =~ /([,\.\d]+) mW/) {
			$DynamicPower = $1;
			$DynamicPower =~ s/,//g;
		}
		my $Power = $DynamicPower + $StaticPower;
		my $Latency = 0;
		if ($params[2] eq "pipelined") {
			$Latency = $params[3];
		} elsif ($params[0] eq "reg") {
			$Latency = 2;
		}
		chdir ("../..");
		open (Fout, ">>output.dat");
		print Fout "Hardware Unit: $Vfile \n",
		           "Max register to register delay: $RtoRmax ns\n",
		           "Fmax: $Fmax MHz\n",
		           "Fmax Restriction: $FmaxRestriction MHz\n",
		           "Logic Elements: $LEs\n",
		           "Combinational Functions: $LUTs\n",
		           "DSP elements: $DSPblocks\n",
		           "Static Power: $StaticPower\n",
		           "Dynamic Power: $DynamicPower\n",
		           "Total Power: $Power\n",
		           "Total Registers: $Regs\n",
		           "Latency: $Latency\n\n";
		close (Fout);
		# Creates input TCL file for legup
		unless (-e "profile.tcl") {
			open (Fout, ">profile.tcl");
			if ($devicefam eq "CycloneII") {
				print Fout "set_device_specs $devicefam $device 33216 105 483840 70\n";
			} else {
				print Fout "set_device_specs $devicefam $device 212480 1610 21233664 128\n"; # StratixIV
				# NOTE that on Cyclone II, these 4 numbers are <MaxLEs> <MaxM4Ks> <MaxRAMBits> <MaxDSPs>. On Stratix IV, it is <MaxALMs>, <MaxM9K Memory blocks>, <MaxRAMBits>, <MaxDSPs>
				# Information from Quartus 11 and http://www.altera.com/products/devices/stratix-fpgas/stratix-iv/overview/stxiv-overview.html
				# Note also that for Stratix IV, 212480 is the number of ALMs, but the "Equivalent LEs" (listed on the website above) is 531200
			}

			close (Fout);
		}
		open (Fout, ">>profile.tcl");
		print Fout "set_operation_attributes $Vfile $FmaxRestriction $RtoRmax $StaticPower $DynamicPower $LUTs $Regs $LEs $DSPblocks $Latency\n";
		close (Fout);
		# Creates input data file for ploticus
		system ("mkdir -p plots/data");
		chdir ("plots/data");
		open (Fout, ">>plot$operation.dat");
		print Fout "$width $RtoRmax $Fmax $LUTs $DSPblocks $Regs $LEs $FmaxRestriction $Power\n";
		close (Fout);
		chdir ("../../..");
	}
	# Executes plot and image editing commands
	chdir ("$devicefam/plots/");
	my @plotcmd = 
	("ploticus -prefab $graphtype data=data/plot$operation.dat x=1 y=2 xlbl=WIDTH ylbl=\"DELAY (ns)\" pointsym=none ylbldistance=0.6 title=\"$devicefam: $device-$operation\" -png -o $operation\_delay.png",
	"ploticus -prefab $graphtype data=data/plot$operation.dat x=1 y=3 xlbl=WIDTH ylbl=\"FMax (MHz)\" pointsym=none ylbldistance=0.6 -png -o $operation\_fmax.png",
	"ploticus -prefab $graphtype data=data/plot$operation.dat x=1 y=4 xlbl=WIDTH ylbl=\"LUTs\" pointsym=none ylbldistance=0.6 -png -o $operation\_luts.png",
	"ploticus -prefab $graphtype data=data/plot$operation.dat x=1 y=5 xlbl=WIDTH ylbl=\"DSP Elements\" pointsym=none ylbldistance=0.6 -png -o $operation\_dsp.png",
	"ploticus -prefab $graphtype data=data/plot$operation.dat x=1 y=7 xlbl=WIDTH ylbl=\"Logic Elements\" pointsym=none ylbldistance=0.6 -png -o $operation\_les.png",
	"ploticus -prefab $graphtype data=data/plot$operation.dat x=1 y=8 xlbl=WIDTH ylbl=\"FMax - Device Restricted (MHz)\" pointsym=none ylbldistance=0.6 -png -o $operation\_rest.png",
	"ploticus -prefab $graphtype data=data/plot$operation.dat x=1 y=6 xlbl=WIDTH ylbl=\"Registers\" pointsym=none ylbldistance=0.6 -png -o $operation\_regs.png",
	"ploticus -prefab $graphtype data=data/plot$operation.dat x=1 y=9 xlbl=WIDTH ylbl=\"Power (mW)\" pointsym=none ylbldistance=0.6 -png -o $operation\_power.png",
	"convert +append $operation\_delay.png $operation\_fmax.png temp1.png",
	"convert +append $operation\_dsp.png $operation\_luts.png temp2.png",
	"convert +append $operation\_les.png $operation\_rest.png temp3.png",
	"convert +append $operation\_regs.png $operation\_power.png temp4.png",
	"convert -append temp1.png temp2.png temp3.png temp4.png $operation.png",
	"rm $operation\_delay* $operation\_fmax* $operation\_luts* $operation\_dsp* $operation\_rest* $operation\_les* $operation\_regs* $operation\_power* temp*");
	foreach my $plotcmd (@plotcmd) {
		system ($plotcmd);
	}
	chdir ("../..");
}
print "********************************************\n",
      "* Data gathering for all selected hardware *\n",
      "* operations was successfully completed.   *\n",
      "* The results can be found in output.dat   *\n",
      "* found in the device family directory.    *\n",
      "********************************************\n"; 
