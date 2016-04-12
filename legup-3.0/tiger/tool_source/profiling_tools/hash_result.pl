# Lanny: May-26-2012
# This script can be used to find functions' hash number based on input *.src and *.hash
#	can also be used to parse profiling_result.log if the file exists at CWD
#!/usr/bin/perl
use warnings;
use strict;
use integer;
use POSIX qw/ceil/;

# example hash file
#	tab[] = {0,12,13,0,0,0,0,8,14,5,4,0,15,11,0,0,}
#	V1 = 0x9e3779b9
#	A1 = 32
#	A2 = 28
#	B1 = 0
#	B2 = 0xf

defined $ARGV[0] or die "Expect *.hash filename as argument 0.";
defined $ARGV[1] or die "Expect *.src filename as argument 1.";

my $N   = undef;
my @tab = ();
my $V1  = undef;
my $A1  = undef;
my $A2  = undef;
my $B1  = undef;
my $B2  = undef;

#$N = scalar(split /-/, $string);

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

printf ("Hash Parameters:\n\tN=$N V1=%x A1=$A1 A2=$A2 B1=$B1 B2=%x \n", $V1, $B2);
print "\ttab: "."@tab";
print "\n";

my $DEBUG_MSG = ( defined $ARGV[2] and $ARGV[2] eq "DEBUG_HASH" );
if ($DEBUG_MSG) {
	print "|   addr   | rsl |   V1   |A1|A2|B1|B2|  val_1   |  val_2   |  val_3   | b|    a     |tab-b|\n";
	}

my @funcs = (); 
open SRC, $ARGV[1] or die $!;
while (<SRC>)	{
	chomp ($_);
	if ($_ =~ />:/) {
		my $tmp_l = $_;
		$tmp_l =~ s/://;
		die "Error: expect <main> as the first function starting at 0x00800000.\n" if ($tmp_l ne "00800000 <main>" and scalar(@funcs) == 0);
		push(@funcs, $tmp_l);
	}
	elsif ($_ =~ "Disassembly of section" and $_ !~ "Disassembly of section .text") {
		last;
	}
}
close (SRC);

#my @funcs = `grep \\\>\\\: $ARGV[1] | sed 's/\\\://' `;
my $main_data = ""; # counter value of the entire program ( main function )

foreach my $func (@funcs) {
	chomp ($func);
	my $addr = $func; $addr =~ s/ .*//;
	$addr =~ s/^8/0/;
	my $name = $func; $name =~ s/.* //;
	if ($name =~ /\./) {next;}
	my $cmd = sprintf("./calc_hash %d $V1 $A1 $A2 $B1 $B2 @tab", hex($addr) );
	if ($DEBUG_MSG) {
		$cmd = $cmd." whatever"; 
		system ($cmd);
	}
	else {
		my $rslt = `$cmd`;
		$rslt = sprintf ("%02x", hex($rslt) );	
		if ( -e "profiling_result.log") {
			my @data_ = `grep '^FuncNum-$rslt  Data-'  profiling_result.log | sed 's/.*Data-//'`;
	#	print "grep '^FuncNum-$rslt  Data-'  profiling_result.log | sed 's/.*Data-//'\n";
	#	print "$name $rslt\n";
			my $data = $data_[0];
			$data =~ s/\n.*//;
			chomp ($data);
			my $percentage = "";
			if (defined $ARGV[2] and $ARGV[2] eq "SHOW_PERCENTAGE") {
				$main_data = $main_data eq "" ? $data : $main_data;
				if (int($data)*100.0/int($main_data) >= 1) {  $percentage = sprintf ("%3d", int($data)*100.0/int($main_data)); }
				else                                       {  $percentage =          " <1"; }
				printf ("Address $addr, Hash-Func Number $rslt, Count %6d, Percentage $percentage%%, Function $name\n", int($data) );
			}
			else {
				printf ("Address $addr, Hash-Func Number $rslt, Count %6d, Function $name\n", int($data) );
			}
		} else {
			printf ("Address $addr, Hash-Func Number $rslt, Function $name\n");
		}
	}
}



