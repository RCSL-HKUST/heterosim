# Lanny: July-14-2012
#!/usr/bin/perl
use warnings;
use strict;

my $trace_file_type = "lli_bb";
(-e "scheduling.legup.rpt") or die "Expect scheduling.legup.rpt to be in CWD.";
(defined $ARGV[0] and $ARGV[0] =~ /\.$trace_file_type\.trace/) or die "Expect *.$trace_file_type.trace as argument 0.";
(defined $ARGV[1]) or die "Expect output report file as argument 1.";

my $cycle_storage = {};
my $runs_storage = {};
my $func = undef;
my @func_lst = ();
my $BB = undef;
my $states = undef;
my $calls = undef;
my $bb_states = {};
my $longest_func_name = 8;

# Parse number of states foreach BB
open SRC, "scheduling.legup.rpt" or die $!;
while (<SRC>)	{
	chomp ($_);
	my $line = $_;
	if ($line =~ /^Start Function: /) {
		$func = $line;
		$func =~ s/^Start Function: //;
		
		push @func_lst, $func;
		#initialize storage hash
		$cycle_storage->{"<$func>"} = 0;	
		$runs_storage ->{"<$func>"} = 0;
		$longest_func_name = ($longest_func_name <= length($func) ) ? length($func) : $longest_func_name;
	}
	elsif ($line =~ /^Basic Block: /) {
		$BB = $line;
		$BB =~ s/^Basic Block: //;
		$BB =~ s/ Num States: .*//;
		$states = $line;
		$states =~ s/.*Num States: //;
		$bb_states->{"<$func>:<$BB>"} = int($states);
	}
}
close SRC;

#foreach my $key (sort keys $bb_states ){
#	print $key.", ".$bb_states->{$key}."\n";
#}


# Parse trace file to find out total states foreach function
# 0 - nothing happen, 1 - calling, 2 - retning;
my $call_or_retn = 0;
my @func_stack = ("");
my @cntr_stack = (0);
my $curr_func = "";
my $last_func = "";
my $curr_cntr = 0;
my $popd_func = "";
my $popd_cntr = 0;

open TRACE, $ARGV[0] or die $!;
while (<TRACE>)
{
	chop;
	if ($_ =~ /^<Calling by .*>$/) {
		$call_or_retn = 1;
	}
	elsif ($_ =~ /^<Returning by .*>$/) {
		$call_or_retn = 2;
	}
	elsif ($_ =~ /^<.*>:<.*>$/) {
		$BB = $_;
		$curr_func = $BB;
		$curr_func =~ s/:.*//;
	}
	else {
		next;
	}

	##########################
	## Handle call and retn ##
	##########################
	if ($call_or_retn == 1) {	# call
		# print "  "x scalar(@cntr_stack) ."On Call: $curr_func -- $_\n";
		# reset curr_cntr with the value of current BB
		push @cntr_stack, ($curr_cntr+$popd_cntr);
		push @func_stack, $curr_func;

		# reset curr_cntr and popd_cntr for descendent
		$curr_cntr = 1;	# FSM transition b/w functions takes 1 cycle
		$popd_cntr = 0;
		$popd_func = "";
	}
	elsif ($call_or_retn == 2) {	# retn
	#	pop @func_stack eq $curr_func or die "Error: Function names should match here.\n";
		
		# print "  "x scalar(@cntr_stack) ."On Retn: $curr_func -- $_ -> ".($popd_cntr + $curr_cntr)."\n";
		# store on retn
		$cycle_storage->{$curr_func} = 0 if (! exists $cycle_storage->{$curr_func});
		$runs_storage ->{$curr_func} = 0 if (! exists $runs_storage ->{$curr_func});
		$cycle_storage->{$curr_func} += $popd_cntr + $curr_cntr;
		$runs_storage ->{$curr_func} += 1;
		
		# pop from stack for ascendent
		# the last element in cntr_stack is the value of the ascendent before calling the current retuning function.
		die "Error: Counter Stack is empty when Function $curr_func returns!\n" if scalar(@cntr_stack) == 0;
		$popd_cntr = (pop @cntr_stack) + $curr_cntr + $popd_cntr;
		$popd_func = pop @func_stack;
		$curr_func = $popd_func;
		
		# reset curr_cntr for ascendent
		$curr_cntr = 0;
	}
	else {
		# increment curr_cntr by the value of current BB
		die "BB information not matched - $BB.\n" if (!exists $bb_states->{$BB} and  (grep {"<$_>" eq $curr_func} @func_lst) );
		$curr_cntr += $bb_states->{$BB} if exists $bb_states->{$BB};
		# make sure program is properly traced
#		if ( ($popd_cntr eq 0) and ($popd_func ne "") ) {
#			die "Error: popd_func should be NULL since current function has not called any descendent.\n";
#		}
#		elsif ( ($popd_cntr ne 0) and ($popd_func ne $curr_func) ) {
#			die "Error: popd_func-'$popd_func' should be the same as curr_func-'$curr_func' since current function has called descendent(s).\n";		
#		}
	}
	$call_or_retn = 0;
}
close TRACE;

( (scalar(@cntr_stack) eq 0) and (scalar(@func_stack) eq 0) ) or die "Error: the program is not properly traced.\n";

# output with format~~~
open OUT, ">".$ARGV[1];
my $tmp = 0;
while ($longest_func_name - 8 > $tmp) {
	print OUT " ";
	$tmp += 1;
}
print OUT " Function | # of Cycles |  # of Runs |\n";

foreach $func (@func_lst) {
	$tmp = sprintf ("  %8d  |  %8d  |", $cycle_storage->{"<$func>"}, $runs_storage->{"<$func>"});
	while ($longest_func_name > length($func)) {
		$func = " ".$func;
	}
	print OUT " $func | $tmp\n";
}
close OUT;
