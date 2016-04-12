# Lanny: June-25-2012
#!/usr/bin/perl -w

use warnings;
use strict;
use locale;

my @output_array = ();
my $tmp=undef;
my $tmp_s=undef;
my $tmp_u=undef;
my $tmp_f=undef;
my $i=undef;

defined $ARGV[0] or die "Expect *.hash filename as argument 0.";
defined $ARGV[1] or die "Expect *.src filename as argument 1.";
defined $ARGV[2] or die "Expect program name as argument 2.";

#########################################################
### Parse Hash Parameters
#########################################################

# example hash file
#	tab[] = {0,12,13,0,0,0,0,8,14,5,4,0,15,11,0,0,}
#	V1 = 0x9e3779b9
#	A1 = 32
#	A2 = 28
#	B1 = 0
#	B2 = 0xf

my $N   = undef;
my @tab = ();
my $V1  = undef;
my $A1  = undef;
my $A2  = undef;
my $B1  = undef;
my $B2  = undef;

open HASH, $ARGV[0] or die $!;
while (<HASH>) {
	chomp($_);
	my $line = $_;

	if ($line =~ "tab") {
		$line =~ s/.*{//;
		$line =~ s/,}//;
		$N = scalar(split /,/, $line);	
		foreach my $element (split /,/, $line) {
			push (@tab, int($element) );
		}
	}
	elsif ($line =~ "V1") {
		$line =~ s/.*= //;
		$V1 = hex($line);
	}
	elsif ($line =~ "A1") {
		$line =~ s/.*= //;
		$A1 = int($line);
	}
	elsif ($line =~ "A2") {
		$line =~ s/.*= //;
		$A2 = int($line);
	}
	elsif ($line =~ "B1") {
		$line =~ s/.*= //;
		$B1 = int($line);
	}
	elsif ($line =~ "B2") {
		$line =~ s/.*= //;
		$B2 = hex($line);
	}
}
close (HASH);

#########################################################
### Parse Function Address and Calculate Hash Number
#########################################################
my @func_names = ();
my @func_hashs = ();
my $addr = "";
my $name = "";
my $cmd = "";
my $hash = "";
my $longest_func_name = 0;

open SRC, $ARGV[1] or die $!;
while (<SRC>)	{
	chomp ($_);
	if ($_ =~ />:/) {
		$_ =~ s/://;
		$addr = $_;		$addr =~ s/ .*//;	$addr =~ s/^8/0/;
		$name = $_;		$name =~ s/.*<//;	$name =~ s/>.*//;
		if ($name =~ /\./) {next;}
		push (@func_names, $name);
		$longest_func_name = ($longest_func_name < length($name)) ? length($name) : $longest_func_name;

		# calculate hash number for current function adddress		
		$cmd = sprintf("calc_hash %d $V1 $A1 $A2 $B1 $B2 @tab", hex($addr) );
		$hash = `$cmd`;
		$hash = hex($hash);
		push (@func_hashs, $hash);
	}
	elsif ($_ =~ "Disassembly of section" and $_ !~ "Disassembly of section .text") {
		last;
	}
}
close (SRC);

(scalar(@func_names) <= $N and scalar(@func_hashs) == scalar(@func_names)) or die "Error: Number of Functions NOT MATCHED...";
$N=scalar(@func_hashs);

# Add " " and "|"
# 16 is the length of " Function Name |";
$longest_func_name = $longest_func_name+3 > 16 ? $longest_func_name+3 : 16;

foreach $name (@func_names) {
	$name = "| ".$name." ";
	while (( $longest_func_name-length($name) ) >0) {
		$name = $name." ";
	}
	push (@output_array, $name."|");
}

#########################################################
### Parse Profiling Data
#########################################################
my @src_rpts = (
	 ".self_instr_profiling.rpt"
	,".hier_instr_profiling.rpt"
	,".self_cycle_profiling.rpt"
	,".hier_cycle_profiling.rpt"
	,".self_stall_profiling.rpt"
	,".hier_stall_profiling.rpt"
	,".self_istall_profiling.rpt"
	,".hier_istall_profiling.rpt"
	,".self_dstall_profiling.rpt"
	,".hier_dstall_profiling.rpt"
	);

foreach my $src_rpt (@src_rpts) {
	my @data_array = ();
	if (-e $ARGV[2].$src_rpt) {
		# put current report into array
		open SRC, $ARGV[2].$src_rpt or die $!;
		@data_array = <SRC>;
		
		my $base="";
		# find the base value
		if ($src_rpt =~ /self/) {
			my $base_rpt = $src_rpt;
			$base_rpt =~ s/self/hier/;
			open BASE, $ARGV[2].$base_rpt or die $!;
			my @base_array = <BASE>;	
			$base = $base_array[$func_hashs[0]]; #main function is always the first element in the array
		}
		else {
			$base = $data_array[$func_hashs[0]]; #main function is always the first element in the array
		}
		chomp ($base);
		$base = hex($base);

		for ($i=0; $i<$N; $i=$i+1) {
			$tmp=$data_array[$func_hashs[$i]];
			chomp ($tmp);
			$tmp = hex($tmp);
			if ($tmp*100.0/$base >= 1) {	$tmp = sprintf (" %8d %3d", $tmp, $tmp*100.0/$base );	}
			else                       {	$tmp = sprintf (" %8d  <1", $tmp );	}
			$output_array[$i] = $output_array[$i].$tmp."% |";
		}
	} else {
		for ($i=0; $i<$N; $i=$i+1) {
			$output_array[$i] = $output_array[$i]."      N/A      |";
		}
	}
}

open DST, ">".$ARGV[2].".profiling.rpt" or die $!;

$tmp_s = "               ";	# spaces
$tmp_u = "---------------"; # underscores
$tmp_f = " Function Name "; # function name

while ($longest_func_name - length($tmp_s)>1) {
	$tmp_s = " ".$tmp_s;
	$tmp_u = "-".$tmp_u;
	$tmp_f = $tmp_f." ";
}

print DST "+$tmp_u+-------------------------------+-------------------------------+-------------------------------+-------------------------------+-------------------------------+\n"; 
print DST "|$tmp_s|       # of Instructions       |          # of Cycles          |          # of Stalls          |          # of iStalls         |          # of dStalls         |\n";
print DST "|$tmp_f|---------------+---------------|---------------+---------------|---------------+---------------|---------------+---------------|---------------+---------------|\n"; 
print DST "|$tmp_s|      self.    |      hier.    |      self.    |      hier.    |      self.    |      hier.    |      self.    |      hier.    |      self.    |      hier.    |\n";
print DST "+$tmp_u+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+\n"; 

#foreach (sort {lc $a cmp lc $b} (@output_array)) {
foreach ((@output_array)) {
	print DST $_."\n";
}
print DST "+$tmp_u+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+---------------+\n"; 
close DST;

