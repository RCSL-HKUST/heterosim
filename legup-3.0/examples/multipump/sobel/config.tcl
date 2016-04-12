# unroll flags are in ./Makefile

# shared settings
set_parameter NUM_MEM_PORTS 1
set_parameter DUAL_PORT_BINDING 0
set_parameter LOCAL_RAMS 1
set_parameter PARALLEL_LOCAL_RAMS 1
set_parameter MULTIPLIER_NO_CHAIN 1
set_parameter MAX_SIZE 0
set_parameter NO_MIN_BITWIDTH 1
set_parameter SDC_RES_CONSTRAINTS 0
set_parameter ALIAS_ANALYSIS 0

# original - 2 stage mul
#set_parameter MULTIPLIER_PIPELINE_STAGES 2
#set_parameter SHARE_MUL 1

# sharing - 2 stage mul
#set_parameter SDC_RES_CONSTRAINTS 1
#set_parameter NUM_MULTIPLIERS 1
#set_parameter MULTIPLIER_PIPELINE_STAGES 2
#set_parameter SHARE_MUL 1

# multipumping - 3 stage mul
set_parameter MULTIPUMPING 1
set_parameter MULTIPLIER_PIPELINE_STAGES 3
