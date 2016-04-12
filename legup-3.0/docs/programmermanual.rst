.. highlight:: cpp

.. _progman:

Programmer's Manual
======================

This is a manual describing the LegUp high-level synthesis framework. LegUp is
a target back-end pass to the `LLVM <http://llvm.org/>`_ compiler
infrastructure. If you haven't used LLVM before please familiarize yourself
with the `LLVM Documentation <http://llvm.org/docs/>`_. This manual assumes
that you understand basic LLVM concepts.

If you just want to dive in. Start by looking at ``runOnModule()`` in
`llvm/lib/Target/Verilog/LegupPass.cpp
<http://legup.eecg.utoronto.ca/git?p=legup.git;a=blob;f=llvm/lib/Target/Verilog/LegupPass.cpp;hb=HEAD>`_

You should also look at the generated LegUp 
`Doxygen <http://legup.eecg.utoronto.ca/doxygen/namespacelegup.html>`_.

Overview
-----------
The overall flow of execution in LegUp is as follows. First, the LLVM front end :file:`clang`
takes the .c files and compiles them into LLVM intermediate representation, stored in a byte
code file (.bc). This byte code may contain LLVM intrinsic functions, which are functions that LLVM
assumes exist in the C library: memcpy, memset, and memmove. These functions do not exist in hardware, so we
replace them with functions that we've hand written. This is done with ``opt -legup-prelto`` and then
linking in our versions with llvm-ld lib/intrinsics.a. Now we are left solely with LLVM IR and no intrinsics.
Now we pass this code to llvm-ld to perform link time optimizations. Finally, we pass the optimized bytecode to 
``llc -march=v`` to run the Verilog backend.

The flow of the Verilog backend is as follows. First, the LLVM pass manager calls ``LegupPass:runOnModule()``.
This function reads the tcl file cycloneII.tcl or stratixIV.tcl depending on your device family. These are stored
in the object LEGUP_CONFIG which is a global variable available to all classes used by LegUp. 
For instance, if you wanted to know the number of DSPs available on this device use LEGUP_CONFIG->getMaxDPSs().
Next LegupPass initializes the Allocation object. The main role of this class
is to hold the unique names GlobalNames object. The GlobalNames class is used to make sure
each LLVM instruction has a unique name that doesn't overlap with a reserved
Verilog keyword (reg, wire, etc.). When two names overlap a postfix of _var##
is added, where ## is incremented after each conflict. All names have a prefix:
function_basicblock\_ to help debugging. Keep in mind that in LLVM IR the
register count resets for each function, for instance if you're 
looking for %157 there may exist multiple uses of register %157 in
other functions, so make sure you are looking in the right function. The next step
after allocation is to initialize the scheduler object and schedule LLVM
instructions into clock cycles. There are some helper classes to aid in this
task: The data flow graph of LLVM instructions is represented in the
SchedulerDAG class. Given an instruction you can get the successors and
predecessor instructions. For instance:

.. code-block:: llvm

    %1 = add %2, %3
    %4 = add %1, %5

The predecessors of %1 are it's operands: instructions %2, and %3. %1's successor is the instruction %4.
There are also dependencies between load, store, and call instructions that can access memory.
These dependencies can be detected using alias analysis performed by LLVM.
Scheduling works on a function by function basis. There are two important parameters
for each instruction: 

1. The latency, how many clock cycles you must wait until the output is
   available, loads have latency of 2.
2. The delay of an instruction is the other parameter, retrieved from
   Allocation and stored in the device tcl file.

The delay approximations allow the algorithm to determine how many instructions
can be *chained* together in the same cycle. During scheduling each instruction
is assigned a state object that represents a state in a finite state machine
stored in the FSM object.  Branches, jump, and switch instructions are used to
determine next state variable assignments. Each state has 3 possibilities
analogous to the LLVM branch, jump, and switch instructions. First, a
defaultTransition can be specified. Or a single transition variable can be set,
then one or more transition conditions can be specified.  If the transition
variable is equal to the condition then the associated state is the next state.
After we have a sched object to represent the FSM and the state of each
instruction , we can call GenerateRTL to create the RTLModule object
representing the final hardware circuit. 

An RTLModule has a list of inputs, outputs, parameters, and RTLSignals. To
understand RTLSignal it's useful to
look at the structure of the Verilog code.  Each RTLSignal represents a wire or
register that can be driven by other RTLSignals under different conditions.
Each condition is listed as an if statement in the **always@** block devoted to that
signal.  The most common condition is if we are in a particular state. It is so
common that there is a function to simplify this process:

.. code-block:: c

    connectState(signal, state, driverSignal, instruction)

Here we say that during **state** we want **driverSignal** to drive **signal**.
The optional **instruction** argument adds a comment above this Verilog
assignment indicating the instruction that **driverSignal** was
dervied from. 
Another option is to unconditionally drive a signal.  In order to do so, use:

.. code-block:: c

    signal->connect(driver, instruction) 

Note that this will clear away prior conditional drivers.  To manually specify a
conditional driver use:

.. code-block:: c

    signal->addCondition(signal, conditionSignal, driverSignal)

If the **conditionSignal** is 1 then **driverSignal** drives **signal**. 

To create a register or wire RTLSignal use these functions:

.. code-block:: c

    rtl->addReg() 
    rtl->addWire() 

Where **rtl** is an RTLModule object, **rtl** must keep track of all signals
used in order to print the variable declarations.  To create a signal you must
specify a name. Normally the ``verilogName(instruction)`` function is used, which
creates a unique name for the instruction using the GlobalNames object in the
allocation object discussed above. For all instructions we follow the
convention that there are 2 signals created, one wire, to represent the
instruction during the state it is assigned, and one register, which the wire
feeds in the assigned state only.  The register is used if the instruction is
used in another state. The name of the wire is ``verilogName(instruction)``,
the name of the register is ``verilogName(instruction) + "_reg"``.


.. index:: test suite
.. _testsuite:

Test Suite
-----------

The test suite is built using DejaGNU (also used by GCC and LLVM). 
The DejaGNU test framework is launched by the ``runtest`` command,
which recursively searches all the directories in the current
working directory for ``dg.exp`` tcl files.  
Every directory in ``examples`` that is part of the test suite
has a ``dg.exp`` tcl file, for instance ``examples/array/dg.exp``.
These tcl files all load the library ``examples/lib/legup.exp``
and call functions like **run-test** or **run-test-gx** to run
various tests.

To run the default test suite use the command:

.. code-block:: bash

    cd examples
    runtest

You should see the following output after a few minutes:

.. code-block:: none

                ===  Summary ===

    # of expected passes		476

The default test suite essentially takes every example and runs:

.. code-block:: bash

    make
    make v

Then parses the output and makes sure the *return_val* is correct and there are
no Modelsim warnings or errors.

You should run the LegUp test suite regularly during development to ensure your
hardware is correct. We have found that it is much easier to track down bugs
this way than debugging the RTL simulations. In fact, we run our regression tests after
every commit using `buildbot <http://www.legup.org:9100/waterfall>`_.


Other useful variants of the ``runtest`` DejaGNU command are:

.. code-block:: bash

    # for verbose output:
    runtest -v
    # only run the mips test:
    runtest chstone/mips/dg.exp


LLVM Passes
------------

LLVM is structured as a series of compiler passes that run in sequence on the
underlying intermediate representation. The main LegUp pass is a target backend
called LegupPass. Passes are normally classes inheriting from FunctionPass,
which have an entry function called:

.. code-block:: c

    bool runOnFunction(Function &F); 

When runOnFunction() is called, LLVM has already constructed the intermediate
representation (IR) for the input C file. By traversing over the IR we
perform the steps to generate valid Verilog RTL code.
LegupPass inherits from ModulePass, which has an entry function called:

.. code-block:: c

    bool runOnModule(Function &F); 

Source Files
-------------

LegUp files inside the LLVM source tree:
  * The core of LegUp is in:
     * :file:`llvm/lib/Target/Verilog/`
  * Other LegUp passes that are run with opt:
     * :file:`llvm/lib/Transforms/LegUp/`
  * llc calls the LegupPass and has been slightly modified:
     * :file:`llvm/tools/llc/llc.cpp`
  * Other files with minor changes:
     * :file:`llvm/tools/opt/opt.cpp` (can use Tcl)
     * :file:`llvm/autoconf/configure.ac` (add Verilog target)
     * :file:`llvm/configure` (add Verilog target)

Important Classes
------------------

RTL Datastructure
++++++++++++++++++

The RTL data structure is used to represent an arbitrary circuit using the
following classes:

  * ``RTLModule`` - Verilog module
  * ``RTLSignal`` - Represents a reg/wire signal in a Verilog always block. The
    signal can be driven by multiple RTLSignals each predicated on a RTLSignal
    to form a multiplexer.
  * ``RTLConst`` - Constant value
  * ``RTLOp`` - Functional unit with 1, 2 or 3 operands
  * ``RTLWidth`` - The bit width of an RTLSignal i.e. [31:0]

As an example lets implement the following Verilog using the RTL data structure:
                                                                     
.. code-block:: v

    module bitwise_AND_no_op_bitwise_OR_2to1mux_32bit
    #(parameter WIDTH=32)
    (
        input signed [WIDTH-1:0] data1,
        input signed [WIDTH-1:0] data2,
        input signed [WIDTH-1:0] data3,
        input signed [WIDTH-1:0] data4,
        input signed [WIDTH-1:0] data5,
        input signed [WIDTH-1:0] data6,
        input select,
        input clk,
        output reg [WIDTH-1:0] dataout
    );
        reg signed [WIDTH-1:0] data1_reg;
        reg signed [WIDTH-1:0] data2_reg;
        reg signed [WIDTH-1:0] data3_reg;
        reg signed [WIDTH-1:0] data4_reg;
        reg signed [WIDTH-1:0] data5_reg;
        reg signed [WIDTH-1:0] data6_reg;
        reg signed [WIDTH-1:0] w1;
        reg signed [WIDTH-1:0] w2;
        reg signed [WIDTH-1:0] w3;

        always @ (posedge clk)
        begin
            data1_reg <= data1;
            data2_reg <= data2;
            data3_reg <= data3;
            data4_reg <= data4;
            data5_reg <= data5;
            data6_reg <= data6;

            dataout <= (w1 & w2) | w3;
        end

        always @ (*)
        begin
            if (select==0)
            begin
                w1 <= data1_reg;
                w2 <= data2_reg;
                w3 <= data3_reg;
            end
            else
            begin
                w1 <= data4_reg;
                w2 <= data5_reg;
                w3 <= data6_reg;
            end
        end

    endmodule

The RTL data structure for the above Verilog looks like::

    RTLModule *rtl = new
        RTLModule("bitwise_AND_no_op_bitwise_OR_2to1mux_32bit");
    rtl->addIn("clk");

    RTLSignal *select = rtl->addIn("select");

    rtl->addParam("WIDTH", "32");
    RTLWidth *width = new RTLWidth("WIDTH-1");
    std::map<int, RTLSignal*> inputs;
    for (int i = 1; i <=6; i++) {
        std::string name = "data" + utostr(i);
        RTLSignal *in = rtl->addIn(name, width);

        RTLSignal *reg = rtl->addReg(name + "_reg", width);
        reg->connect(in);
        inputs[i] = reg;
    }
    RTLSignal *dataout = rtl->addOutReg("dataout", width);

    RTLOp *cond_zero = new RTLOp(RTLOp::EQ);
    cond_zero->setOperand(0, select);
    cond_zero->setOperand(1, new RTLConst("0"));

    RTLOp *cond_one = new RTLOp(RTLOp::EQ);
    cond_one->setOperand(0, select);
    cond_one->setOperand(1, new RTLConst("1"));

    RTLSignal *w1 = rtl->addWire("w1", width);
    w1->addCondition(cond_zero, inputs[1]);
    w1->addCondition(cond_one, inputs[4]);

    RTLSignal *w2 = rtl->addWire("w2", width);
    w2->addCondition(cond_zero, inputs[2]);
    w2->addCondition(cond_one, inputs[5]);

    RTLSignal *w3 = rtl->addWire("w3", width);
    w3->addCondition(cond_zero, inputs[3]);
    w3->addCondition(cond_one, inputs[6]);

    // Note: you can pass an instruction to RTLOp's constructor
    RTLOp *op_and = new RTLOp(RTLOp::And);
    op_and->setOperand(0, w1);
    op_and->setOperand(1, w2);

    RTLOp *op_or = new RTLOp(RTLOp::Or);
    op_or->setOperand(0, op_and);
    op_or->setOperand(1, w3);

    dataout->connect(op_or);

    // to print out verilog
    Allocation *allocation = new Allocation(&M);
    allocation->addRTL(rtl);
    VerilogWriter *writer = new VerilogWriter(Out, allocation);
    writer->printRTL(rtl);

Signal Truncation
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To get the lower 32 bits of a 64 bit signal::

    RTLOp *lower = rtl->addOp(RTLOp::Trunc);
    lower->setCastWidth(RTLWidth("32"));
    lower->setOperand(0, signal_64);

To get the upper 32 bits of a 64 bit signal use a shift followed by
the truncation above::

    RTLOp *shift = rtl->addOp(RTLOp::Shr);
    shift->setOperand(0, signal_64);
    shift->setOperand(1, new RTLConst("32"));
    RTLOp *upper = rtl->addOp(RTLOp::Trunc);
    upper->setCastWidth(RTLWidth("32"));
    upper->setOperand(0, shift);

Alternatively you can use the truncation operator directly::

    RTLOp *upper = rtl->addOp(RTLOp::Trunc);
    upper->setCastWidth(RTLWidth("63", "32"));
    upper->setOperand(0, signal_64);

GenerateRTL 
+++++++++++++

``GenerateRTL`` uses the scheduling and binding algorithms to generate the
final RTL data structure for the synthesized circuit.

VerilogWriter
++++++++++++++

``VerilogWriter`` prints an ``RTLModule`` as Verilog, the memory controller,
testbench, and required avalon signals.


SDC-Based Scheduling
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

The scheduler returns a ``FiniteStateMachine`` object for each LLVM function.

``FiniteStateMachine`` stores ``State`` objects in a doubly-linked list.  The
``State`` class stores a sequential list of instructions and the next state
transitions.

The ``SchedulerDAG`` class creates an InstructionNode for each instruction and
computes memory and data dependencies. ``InstructionNodes`` also store the
propogation delay of the instruction.  The ``SchedulerMapping`` class maps
``InstructionNodes`` to control steps.

The SDC scheduler is based on the formulation described in [Cong06]_.
Scheduling is formulated mathematically, as a system of equations to be solved.
The formulation is a linear program (LP) that can be solved in polynomial time.
SDC stands for System of Difference Constraints.  All of the constraints in
the LP have the form::

    x1 - x2 REL y 

where REL is a relational operator: EQUALS, LESS THAN OR EQUAL TO, GREATER THAN OR EQUAL TO.  
Constraints, in this form, are "difference constraints", hence the name SDC.
We use the lpsolve open source linear system solver. See `lpsolve <http://lpsolve.sourceforge.net/>`_.

The advantage of SDC is its flexibility: different styles of scheduling,
with different types of constraints, can all be elegantly rolled into the
same mathematical formulation.  By using SDC-based scheduling within LegUp,
we bring its scheduler closer to state-of-the-art.

By default, the scheduler performs ASAP scheduling and targets a 66 MHz
clock period constraint for the Altera DE2 Cyclone II.  Chaining of operators in a
cycle is permitted, within the clock period constraint limits.  

The ``examples/legup.tcl`` file sets the following parameters which control
the SDC scheduler:

  * **SDC_PERIOD**: Setting this parameter to a particular integer
    value in ns will set the clock period constraint.
  * **SDC_NO_CHAINING**: Disable chaining of operations in a clock cycle.
    This will achieve the maximum amount of pipelining.  The **SDC_PERIOD**
    parameter is useless when this is set
  * **SDC_ALAP**: Perform as-late-as-possible (ALAP) scheduling instead of
    as-soon-as-possible (ASAP).
  * **SDC_DEBUG**: Cause debugging information to be printed from the
    scheduler.
  * **NO_SDC**: Disable SDC scheduling and use the original scheduling that
    was in the LegUp 1.0 release.

Relevant source files for SDC scheduling: SDCScheduler.h and
SDCScheduler.cpp.  In the .cpp file, start by looking at the createMapping()
method, which is the top-level method that implements the flow of SDC
scheduling.


Known Issues with SDC Scheduler
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

 * Doesn't support global scheduling across basic block boundaries
 * Instructions from different basic blocks can never be in the same state


Binding 
---------

Binding uses the libhungarian-v0.1.2 library to solve bipartite weighted matching.
This is the problem of finding the optimal assignment (assigning a set of jobs
to a set of machines) in O(n^3), where n=max{#jobs, #machines}.
Bipartite weighted matching is used to minimize the number of operations that
share a functional unit.

Pattern Sharing Introduction
+++++++++++++++++++++++++++++

In the Legup 1.0 release, which targeted Cyclone II, Binding shared
only dividers and remainders. 

Binding has been modified to share other types of operations, as well 
as larger computational patterns. This was shown to reduce area on Stratix IV.

Enabling and Disabling Pattern Sharing
++++++++++++++++++++++++++++++++++++++++

The ``examples/legup.tcl`` file sets the following parameters which control
pattern sharing:

.. code-block:: tcl

    # if set, div/rem will be shared with any required mux width (as in Legup
    # 1.0)
    set_parameter SHARE_DIV 1
    set_parameter SHARE_REM 1

    # Maximum chain size to consider. Setting to 0 uses Legup 1.0 original
    # binding
    # SET TO 0 TO DISABLE PATTERN SHARING
    # (setting to 0 shares only dividers and remainders, as in LegUp 1.0)
    set_parameter MAX_SIZE 10

    # The settings below should all be nonzero, but can be disabled when
    # debugging
    # if set, these will be included in patterns and shared with 2-to-1 muxing
    set_parameter SHARE_ADD 1
    set_parameter SHARE_SUB 1
    set_parameter SHARE_BITOPS 1
    set_parameter SHARE_SHIFT 1

SHARE_DIV and SHARE_REM should always be set to 1, and will 
share these operations as in LegUp Release 1.0. 

With SHARE_DIV and SHARE_REM set nonzero, setting MAX_SIZE to 
0 will disable pattern resource sharing and use the binding from LegUp Release
1.0.

Setting SHARE_ADD, SHARE_SUB, SHARE_BITOPS and SHARE_SHIFT will
share these operations when constructing computational patterns.
Note that all 4 should be set when sharing for best results, but 
the parameters provide a means for debugging. Setting these four parameters
all to 0 also results in the original LegUp Binding (equivalent to setting
MAX_SIZE to 0). However MAX_SIZE takes precedence, so for example 
even if SHARE_ADD is set to 1, if MAX_SIZE = 0 then LegUp
original Binding will be active. i.e. both these examples will bind as in LegUp 1.0:

.. code-block:: tcl

    set_parameter SHARE_DIV 1
    set_parameter SHARE_REM 1

    set_parameter MAX_SIZE 0

    set_parameter SHARE_ADD 1
    set_parameter SHARE_SUB 1
    set_parameter SHARE_BITOPS 1
    set_parameter SHARE_SHIFT 1


.. code-block:: tcl

    set_parameter SHARE_DIV 1
    set_parameter SHARE_REM 1

    set_parameter MAX_SIZE 1

    set_parameter SHARE_ADD 0
    set_parameter SHARE_SUB 0
    set_parameter SHARE_BITOPS 0
    set_parameter SHARE_SHIFT 0

Writing Patterns to DOT and Verilog Files
++++++++++++++++++++++++++++++++++++++++++

Patterns found can also be written to .dot and .v files. 

Setting the WRITE_TO_DOT parameter to be nonzero will save all patterns of size > 1
to .dot files, and then convert these to .pdf files so that patterns may be
visualized.  The file name includes the pattern size and the frequency of
occurrence. 

The Graphviz graph visualization software can be downloaded from:
`<http://www.graphviz.org/Download.php>`_

Similarly, for experimental purposes, it is possible to
create a verilog module for each pattern, by setting the
WRITE_TO_VERILOG parameter nonzero. This creates a .v file
for that specific pattern with the same filename as the
.dot and .pdf files.

To avoid writing patterns of any frequency to these files, 
the parameter FREQ_THRESHOLD lets only patterns shared with 
frequency greater than or equal to this threshold to
be written to dot, pdf or verilog files. 

The dot, pdf and verilog, files will be created in folders
created for each function (given the function name).

.. _loop_pipeline:

Loop Pipelining
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

For working examples that use loop pipelining, look in ``legup/examples/pipeline/``.

Loop pipelining does not currently support array based depedencies like::
    
    loop: for (i = 1; i < N; i++) {
        a[i] = a[i-1] + 2
    }

But simple dependencies are supported such as (``legup/examples/pipeline/sum``)::

    loop: for (i = 1; i < N; i++) {
        sum += a[i] + i;
    }

Loop pipelining does not currently support dual port memories, binding, or
chaining of operations.
Only loops with a single basic block can be loop pipelined.

Iterative modulo scheduling is performed in
``legup/llvm/lib/Transforms/LegUp/IterativeModuloScheduling.cpp``.
The iterative modulo scheduling implementation was based on the paper:
B. Ramakrishna Rau, "Iterative Modulo Scheduling", 1995.

The IterativeModuloScheduling pass annotates the LLVM IR with metadata, for example
given the loop in ``legup/examples/pipeline/simple/simple.c``::

    #define N 4
    loop: for (i = 0; i < N; i++) {
        printf("Loop body\n");
        printf("a[%d] = %d\n", i, a[i]);
        printf("b[%d] = %d\n", i, b[i]);
        c[i] = a[i] + b[i];
        printf("c[%d] = %d\n", i, c[i]);
    }

Looking at a snippet of LLVM IR in the loop body:

.. code-block:: llvm

      %27 = volatile load i32* %scevgep6, align 4, !tbaa !3,
            !legup.pipeline.time !8, !legup.pipeline.stage !1

    !1 = metadata !{metadata !"1"}
    !8 = metadata !{metadata !"8"}

This load instruction is scheduled in time step 8, and in pipeline stage 1 of this pipeline.

The terminator instruction holds more useful information regarding the pipeline:

.. code-block:: llvm

    br i1 %exitcond4, label %.preheader.preheader, label %legup_memset_4.exit,
          !legup.pipelined !1, !legup.II !17, !legup.totalTime !18, !legup.maxStage !6, 
          !legup.tripCount !19, !legup.label !20, !legup.pipeline.time !1,
          !legup.pipeline.stage !2

    !1 = metadata !{metadata !"1"}
    !2 = metadata !{metadata !"0"}
    !6 = metadata !{metadata !"3"}
    !8 = metadata !{metadata !"8"}
    !17 = metadata !{metadata !"6"}
    !18 = metadata !{metadata !"22"}
    !19 = metadata !{metadata !"4"}
    !20 = metadata !{metadata !"loop"}

This basic block is pipelined (``legup.pipelined`` is 1). The initiation
interval (II) is 6. The total number of timesteps in the pipeline is 22. The
maximum stage is 3, so there are 4 stages (stages are indexed from 0).  The
tripcount (number of iterations) of the loop is 4. The label of the loop is
"loop". The pipeline time step that the branch has been scheduled to is 1 and
its pipeline stage is 0 (this can be ignored).

The ``GenerateRTL.cpp`` file handles the construction of the loop pipeline in
the function ``generateAllLoopPipelines()``. Note that the FSM of the original function is modified
so that there are two new state to start the loop pipeline hardware and wait for it to complete,
looking at a snippet of the ``scheduling.legup.rpt`` file:

.. code-block:: none

    state: LEGUP_loop_pipeline_start_loop_15
       %23 = phi i32 [ %34, %legup_memset_4.exit ], [ 0,
             %legup_memset_4.exit.preheader ], !legup.canonical_induction !1,
             !legup.pipeline.time !2, !legup.pipeline.stage !2 (endState:
             LEGUP_loop_pipeline_start_loop_15)
       Transition: default: LEGUP_loop_pipeline_wait_loop_16
    state: LEGUP_loop_pipeline_wait_loop_16
       br i1 %exitcond4, label %.preheader.preheader, label
             %legup_memset_4.exit, !legup.pipelined !1, !legup.II !17,
             !legup.totalTime !18, !legup.maxStage !6, !legup.tripCount !19,
             !legup.label !20, !legup.pipeline.time !1, !legup.pipeline.stage !2
       Transition: if (loop_pipeline_finish): 
                   LEGUP_F_main_BB__preheader_preheader_17 
                   default: LEGUP_loop_pipeline_wait_loop_16

The state ``LEGUP_loop_pipeline_wait_loop_16`` waits until the signal
``loop_pipeline_finish`` is asserted before continuing to the next state.

The pipeline has the following control signals (all active high):
  * loop_pipeline_start: starts the pipeline. Should not be asserted if the pipeline
    is running
  * loop_pipeline_finish: the pipeline is finished and all computation is complete
  * loop_valid_bit_*: the valid_bit signals form a shift register:
    ``loop_valid_bit_1 <= loop_valid_bit_0`` etc.
    Every time new data enters the pipeline a 1 is shifted into loop_valid_bit_0.
    If the valid bit is high for a time step then the input data is valid and that
    pipeline step can be performed
  * loop_ii_state_*: this is a counter from 0 to II-1. This counter is only
    needed for pipelines with an initiation interval greater than 1
  * loop_epilogue: no new data, the pipeline is being flushed
  * loop_i_stage*: the value of the induction variable (i) at each pipeline stage

Most operations in the pipeline will use both the loop_ii_state and
loop_valid_bit to determine when to execute. For example:

.. code-block:: v

    always @(posedge clk) begin
    if (((loop_ii_state == 3'd5) & loop_valid_bit_11))
    begin
    main_legup_memset_4_exit_scevgep6_reg_stage2 <= main_legup_memset_4_exit_scevgep6_reg_stage1;
    end

Notice that we are assigning the _reg_stage2 register. If the output of an
operation is used across pipeline stages then we must create a register
for every pipeline stage that must be crossed. If another operation needs
to use ``main_legup_memset_4_exit_scevgep6`` in stage 2 then the register
``main_legup_memset_4_exit_scevgep6_reg_stage2`` would be used.

LegupConfig 
------------

``LegupConfig`` is an Immutable LLVM pass that can read LegUp .tcl files.
For instance, to read the functions that should be accelerated.


PreLTO 
--------

``PreLTO`` pass computes the new size for memset and memcpy when applied to structs.
The pass is needed because struct lengths may be different.


LLVM  
------

Alias Analysis 
+++++++++++++++

Alias analysis is required for load/store/call instructions which aren't
connected by a use-def chain like other LLVM instructions.
In the worst case, without alias analysis, you must perform these memory
instructions sequentially to avoid memory hazards.

For example:

.. code-block:: llvm

    store %a, 10
    %b = load %a

This store and load have a read after write data dependency. 
The store must occur before the load, which means these instructions cannot be
performed in parallel 
The LLVM ``MemDep`` analysis pass gives the dependencies of a load/store/call
instruction.  Mod/Ref means modify/refer.


LLVM Intrinsics 
++++++++++++++++

The CHStone gsm benchmark requires the LLVM intrinsic function memset.i64().
By using the lowerIntrinsics function from CBackend we can turn this call into
a memset() but we can't lower that.
Even with -ffreestanding gcc requires: memcpy, memmove, memset, memcpy.

To handle this we create a custom intrinsic C functions defined in: 
  * ``examples/lib/llvm/liblegup/`` - source files
  * ``examples/lib/include/legup/intrinsics.h`` - header file

These functions are compiled into an .a archive, which is linked with every
Legup example.


Tips/Tricks 
-------------

Compiling 
++++++++++

To quickly compile only ``llc`` after modifying a file in ``llvm/lib/Target/Verilog/``::

    # llvm/utils must be on your path
    makellvm llc 

Debugging Segfaults 
++++++++++++++++++++

To debug segfaults in ``llc`` first make sure you have compiled a debug build.
Do this by uncommenting the following line in ``Makefile`` and rerunning ``make``::

    #DEBUG_MODE = --disable-optimized

Then either update LLVM_BUILD in either ``examples/Makefile.config`` or your environment::

    LLVM_BUILD=Debug+Asserts

Then use gdb::

    > gdb llc
    (gdb) run -march=v array.bc

To see DEBUG() print statements use the -debug flag::

    llc -march=v -debug array.bc


Debugging RTL generated by LegUp 
++++++++++++++++++++++++++++++++++

Printf 
~~~~~~~
The easiest way to debug in Legup is to use C printf statements
which will translate to Verilog **$display** statements which will
print to the terminal when simulating the circuit in Modelsim.

.. _watch:

make watch 
~~~~~~~~~~~
To try make watch run::

    cd array
    make watch

If your hardware is correct 'make watch' will give a diff that returns nothing::

    diff -q lli.txt sim.txt

``make watch`` does the following:
  #. Creates an annotated LLVM IR by adding a printf instruction at the end of
     every basic block that prints the current value of all registers modified
     in that basic block
  #. Runs Legup on this annotated LLVM code to generate Verilog with $display
     statements at the end of each basic block
  #. Simulates the Verilog with Modelsim, which will print out the state of registers
     as the program executes
  #. Runs the annotated LLVM with the LLVM interpreter (``lli``) 
  #. diffs the two outputs to verify that the values of the registers are the
     same between software and hardware


Presently, the order the basic blocks are executed is identical when
running in software or hardware, in the future this will change as
basic blocks start to run in parallel. This will break this debugging
method as the order of the basic block execution will be non-deterministic.

One caveat, registers that contain addresses to memory are not compared,
because the software version of the code will have different addresses than the
hardware.  In some cases LLVM will cast a pointer to an integer, making it hard
to identify that the register actually stores an address and this will lead to
a false mismatch.


LegUp Quality of Results 
--------------------------

To determine the LegUp quality of results we use the `CHStone benchmark suite
<http://www.ertl.jp/chstone/>`_ and Dhrystone.  These are tracked on our
`quality of results page
<http://www.legup.org:9100/perf/dashboard/overview.html>`_.

The horizontal axis shows the git revision, the rightmost being the latest
revision.  Click on a graph to zoom in, and click on a particular revision to
view the git log message for that revision.  Latency metrics are from a
functional simulation using Modelsim. Area and fmax is provided from Quartus
after place and route.


.. [Cong06] 
    J. Cong and Z. Zhang, “An Efficient and Versatile Scheduling Algorithm
    Based On SDC Formulation,” Proceedings of the 2006 Design Automation
    Conference, San Francisco, CA, pp. 433-438, July 2006.

