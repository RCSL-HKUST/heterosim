# legup.tcl - LegUp configuration file for test suite
#
# These variables can be overridden by environment variables using the naming
# convention:
#
#       LEGUP_($VARIABLE_NAME)
#
# ie. to turn off divider sharing:
#
#       export LEGUP_SHARE_DIV=0
#
# See Makefile.config for more examples
#

if { [get_device_family] != "CycloneII" && 
     [get_device_family] != "StratixIV" } {
    puts stderr "Unrecognized Family. Make to you include the ../hwtest/(family).tcl\n";
}

# if set, div/rem will be shared with any required mux width (as in Legup 1.0)
set_parameter SHARE_DIV 1 
set_parameter SHARE_REM 1

# only turn on multiplier sharing with DSPs off
#set_parameter SHARE_MUL 1

# set to ensure that muxing will be placed on multipliers if max DSPs
# are exceeded (as opposed to performing multiplication with logic)
set_parameter RESTRICT_TO_MAXDSP 0

# Enable multi-pumping of multipliers that use DSPs
#set_parameter MULTIPUMPING 0

# Only schedule one multiplier per cycle
# now deprecated in favour of SDC_RES_CONSTRAINTS
set_parameter MINIMIZE_MULTIPLIERS 0

# Override DSP infer estimation algorithm - assume multiply-by-constant
# always infers DSPs
set_parameter MULT_BY_CONST_INFER_DSP 0

# use local block rams for every array and remove global memory controller
# WARNING: only works with simple pointers and only one function (main)
#set_parameter LOCAL_RAMS 1

# when LOCAL_RAMS is on try to schedule independent load/stores in parallel
#set_parameter PARALLEL_LOCAL_RAMS 1

# Explicitly instantiate all multipliers as lpm_mult modules
# Setting MULTIPLIER_PIPELINE_STAGES > 0 will also turn this on
#set_parameter EXPLICIT_LPM_MULTS 1

# Number of pipeline stages for a multiplier
set_parameter MULTIPLIER_PIPELINE_STAGES 0

# Don't chain multipliers
#set_parameter MULTIPLIER_NO_CHAIN 1

# Maximum chain size to consider. Setting to 0 uses Legup 1.0 original binding
# SET TO 0 TO DISABLE PATTERN SHARING
# (setting to 0 shares only dividers and remainders, as in LegUp 1.0)
set_parameter MAX_SIZE 10

# The settings below should all be nonzero, but can be disabled when debugging
# if set, these will be included in patterns and shared with 2-to-1 muxing
if { [get_device_family] == "StratixIV" } {
    # these aren't worth sharing on CycloneII
    set_parameter SHARE_ADD 1
    set_parameter SHARE_SUB 1
} 

set_parameter SHARE_BITOPS 1
set_parameter SHARE_SHIFT 1

# Two operations will only be shared if the difference of their true bit widths
# is below this threshold: e.g. an 8-bit adder will not be shared with 
# a 32-bit adder unless BIT_DIFF_THRESHOLD >= 24
set_parameter BIT_DIFF_THRESHOLD 10
set_parameter BIT_DIFF_THRESHOLD_PREDS 30

# The minimum bit width of an instruction to consider
# (e.g. don't bother sharing 1 bit adders)
set_parameter MIN_WIDTH 2

# write patterns to dot file
#set_parameter WRITE_TO_DOT 1

# write patterns to verilog file
#set_parameter WRITE_TO_VERILOG 1

# MinimizeBitwidth parameters
#set to 1 to print bitwidth minimization stats
#set_parameter MB_PRINT_STATS 1
#set to filename from which to read initial data ranges.  If it's
#undefined, then no initial ranges are assumed
#set_parameter MB_RANGE_FILE "range.profile"
#max number of backward passes to execute (-1 for infinite)
set_parameter MB_MAX_BACK_PASSES -1
set_parameter MB_MINIMIZE_HW 0


# Minimum pattern frequency written to dot/v file
#set_parameter FREQ_THRESHOLD 1

# disable register sharing based on live variable analysis
#set_parameter DISABLE_REG_SHARING 1

#
# Scheduling Variables
#

# Setting this environment variable to a particular integer value in ns will
# set the clock period constraint.
# WARNING: This gets overriden by the environment variable LEGUP_SDC_PERIOD in
# Makefile.config based on the target family. 
#set_parameter SDC_PERIOD 15

# Disable chaining of operations in a clock cycle. This will achieve the
# maximum amount of pipelining. 
# Note: this overrides SDC_PERIOD 
#set_parameter SDC_NO_CHAINING 1

# Perform as-late-as-possible (ALAP) scheduling instead of as-soon-as-possible
# (ASAP).
#set_parameter SDC_ALAP 1

# Cause debugging information to be printed from the scheduler.
#set_parameter SDC_DEBUG 1

# Disable SDC scheduling and use the original scheduling that was in the LegUp
# 1.0 release.
#set_parameter NO_SDC 1

# Push more multipliers into the same state for multi-pumping
#set_parameter SDC_MULTIPUMP 1

#
# Debugging
#

# prepend every printf with the number of cycle elapsed
#set_parameter PRINTF_CYCLES 1

# print all signals to the verilog file even if they don't drive outputs
#set_parameter KEEP_SIGNALS_WITH_NO_FANOUT 1

# display cur_state on each cycle for each function
#set_parameter PRINT_STATES 1

# turn off getelementptr instructions chaining
#set_parameter DONT_CHAIN_GET_ELEM_PTR 0

# SDC resource constraints
set_parameter SDC_RES_CONSTRAINTS 1

# number of multipliers - SDC resource constraints must be on
#set_parameter NUM_MULTIPLIERS 2

# number of memory ports - SDC resource constraints must be on
# to enable dual port    - DUAL_PORT_BINDING must be on 
#                        - ALIAS_ANALYSIS must be on
set_parameter NUM_MEM_PORTS 2

# number of divider/remainder functional units in the hardware
set_parameter NUM_DIVIDERS 1

# enable dual port binding
set_parameter DUAL_PORT_BINDING 1

# create load/store dependencies based on LLVM alias analysis
set_parameter ALIAS_ANALYSIS 1

# turn off generating data flow graph dot files for every basic block
#set_parameter NO_DFG_DOT_FILES 1

# turn off minimize bitwidth path
#set_parameter NO_MIN_BITWIDTH 1

# pipeline a loop
# use the optional ii parameter to force a specific pipeline initiation
# interval
#loop_pipeline "loop1"
#loop_pipeline "loop2" -ii 1

# turn off all loop pipelining
#set_parameter NO_LOOP_PIPELINING 1
