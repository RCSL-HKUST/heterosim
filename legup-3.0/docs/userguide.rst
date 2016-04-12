.. highlight:: c

.. _userguide:

User Guide
=================

LegUp accepts a vanilla ANSI C file as input,
that is, no pragmas or special keywords are required, 
and produces a Verilog hardware description file as output that
can be synthesized onto an Altera FPGA.
Any C **printf** statements are converted to Verilog **$display** statements that
are printed during a modelsim simulation, making it possible
to compile the same C file with gcc and check its output against the
simulation.

LegUp has two different synthesis *flows*: 
 * Pure hardware: Synthesizes the whole C file into hardware with no soft processor
 * Hybrid: Execute a portion of the C file on the TigerMIPS soft processor and
   synthesize the rest into hardware

The LegUp synthesis flow is driven by Makefiles in the ``examples`` directory.
The ``examples`` directory contains sample C benchmark programs that make up
the LegUp test suite.  There are two global Makefiles:

* ``Makefile.config``: This Makefile defines all the default Makefile global variables.
  Users may have to edit this Makefile to change the following variables:

    * **FAMILY**: specify the target FPGA device family, either: CycloneII (default) or StratixIV
    * **LEGUP_SDC_PERIOD**: specify the target clock period constraint (ns). 
      Defaults to 15ns for CycloneII and 5ns for StratixIV.

 * ``Makefile.common``: This is the central Makefile that is included by all other Makefiles in 
   the ``examples`` directory.  This file includes ``Makefile.config``.

If we look inside the ``examples/array`` directory there are three files:

 * ``array.c``: This is the C file we wish to synthesize into hardware.
 * ``dg.exp``: Test suite file. See :ref:`testsuite`
 * ``Makefile``

The contents of ``Makefile`` are:

.. code-block:: make

    NAME=array
    ifeq ($(NO_OPT),)
        NO_OPT=1
    endif
    ifeq ($(NO_INLINE),)
        NO_INLINE=1
    endif
    LEVEL = ..
    include $(LEVEL)/Makefile.common

There are two important environment variables defined here:

 * **NO_OPT**: Disable all compiler optimizations. This passes the flag ``-O0`` to ``clang``.
 * **NO_INLINE**: Disable all function inlining

The reason we turn off all optimizations and disable inlining for this simple benchmark
is for testing purposes. We want to avoid the LLVM compiler optimizing away the whole program.
For most complex programs (like CHStone) you will want to remove these
Makefile variables to enable full LLVM optimizations.

Note that this Makefile includes ``examples/Makefile.common``, which uses the **NAME** and
**LEVEL** variables to customize the LegUp synthesis flow for this specific benchmark.

The central ``examples/Makefile.common`` defines the LegUp synthesis flow. To run
LegUp use the following commands:

 * **make**: run the pure hardware flow
 * **make hybrid**: run the hybrid flow. 

A few other useful commands are:

 * **make v**: simulate the output Verilog file with Modelsim in textual mode
 * **make w**: simulate the output Verilog file with Modelsim and show waveforms
 * **make hybridsim**: run the hybrid flow and simulate the output Verilog with Modelsim
 * **make sim_proc**: simulate the hybrid system created with make hybrid
 * **make hybridquartus**: run a full Quartus compile on the hybrid system created with make hybrid
 * **make p**: create a Quartus project in the current directory
 * **make q**: run the Quartus mapper on the Verilog file
 * **make f**: run a full Quartus compile Verilog file
 * **make watch**: debug the hardware implementation by comparing a Modelsim simulation trace to a pure software trace. See :ref:`watch`.
 * **make tiger**: compile C to MIPS assembly
 * **make emul**: simulate MIPS assembly on GXemul MIPS emulator
 * **make dot**: compile all .dot graph files in the current directory into .ps files
   
.. NOTE::

    For examples that use the hybrid flow look in ``examples/chstone_hybrid/``

Pure Hardware Flow
------------------------------

The pure hardware flow synthesizes the entire C file into hardware with no soft
processor. To run this flow use:

.. code-block:: bash

    make

This is similar to other high-level synthesis tools. To look at an example,
change into the ``legup/examples/array`` directory and type ``make``. This will
run the following commands:

.. code-block:: bash

     clang array.c -emit-llvm -c -fno-builtin -m32 -I ../lib/include/
     -I/usr/include/i386-linux-gnu -O0 -mllvm -inline-threshold=-100 -o
     array.prelto.1.bc

``clang`` compiles the ``array.c`` file into LLVM byte code file:
``array.prelto.1.bc``. Note that inlining is off (``-mllvm
-inline-threshold=-100``) and optimizations are off (``-O0``).
The next command:

.. code-block:: bash

     ../../llvm/Debug+Asserts/bin/llvm-ld -disable-inlining -disable-opt
     array.prelto.1.bc -b=array.prelto.linked.bc

This runs the LLVM linker ``llvm-ld`` to perform link time optimizations and
produce ``array.prelto.linked.bc``.
The next command:

.. code-block:: bash

     ../../llvm/Debug+Asserts/bin/opt -load=../../cloog/install/lib/libisl.so
     -load=../../cloog/install/lib/libcloog-isl.so
     -load=../../llvm/tools/polly/Debug+Asserts/lib/LLVMPolly.so
     -load=../../llvm/Debug+Asserts/lib/LLVMLegUp.so -legup-config=../legup.tcl
     -legup-prelto < array.prelto.linked.bc > array.prelto.bc

This uses the LLVM ``opt`` command to run a LegUp LLVM pass called ``-legup-prelto``, which
performs LLVM intrinsic function lowering and produces ``array.prelto.bc``.
The next command:

.. code-block:: bash

     ../../llvm/Debug+Asserts/bin/llvm-ld -disable-inlining -disable-opt
     array.prelto.bc ../lib/llvm/liblegup.a -b=array.bc

Runs the LLVM linker again to perform more link time optimizations and produces ``array.bc``.
The following commands:

.. code-block:: bash

     ../../llvm/Debug+Asserts/bin/llvm-dis array.prelto.1.bc
     ../../llvm/Debug+Asserts/bin/llvm-dis array.prelto.linked.bc
     ../../llvm/Debug+Asserts/bin/llvm-dis array.prelto.bc
     ../../llvm/Debug+Asserts/bin/llvm-dis array.bc

Disassemble the LLVM bytecode using ``llvm-dis`` and create text files holding the LLVM intermediate representation
for all stages of the LegUp flow: ``array.prelto.1.ll``, ``array.prelto.linked.ll``, ``array.prelto.ll``, ``array.ll``.
The final command:

.. code-block:: bash

    ../../llvm/Debug+Asserts/bin/llc -legup-config=../../hwtest/CycloneII.tcl
    -legup-config=../legup.tcl -march=v array.bc -o array.v

This uses the LLVM ``llc`` compiler targeting architecture ``v`` (Verilog). ``llc`` reads 
the ``hwtest/CycloneII.tcl`` device database file, which holds the delay and area information for hardware operations
on the Cyclone II. Next ``llc`` reads the ``examples/legup.tcl`` file containing LegUp synthesis parameters.
Finally, ``llc`` calls LegUp backend pass (see ``runOnModule()`` in
``llvm/lib/Target/Verilog/LegupPass.cpp``) to produce the Verilog file
``array.v`` from the LLVM bytecode ``array.bc``.


Loop Pipelining
------------------------------

Loop pipelining is a feature introduced in LegUp 3.0. To look at some examples that utilize loop pipelining 
navigate to the ``legup/examples/pipeline/simple`` directory. Take a look in the ``Makefile``

.. code-block:: make

    NAME=simple
    LOCAL_CONFIG = -legup-config=config.tcl

    # don't unroll the loop
    CFLAG += -mllvm -unroll-threshold=0

    LEVEL = ../..
    include $(LEVEL)/Makefile.common

The **LOCAL_CONFIG** variable specifies a local configuration tcl file named
``config.tcl`` in the current directory. Also note that we've turned the LLVM loop
unroll threshold to 0 so that the four iteration loop in this example is not unrolled.
Open ``config.tcl``:

.. code-block:: tcl

    # turn on loop pipelining for loop
    loop_pipeline "loop"

    set_parameter PRINTF_CYCLES 1

The **loop_pipeline** tcl command specifies that we wish to pipeline the loop with
label "loop" in ``simple.c``.  Open ``simple.c`` and verify the for loop has a label::

    loop: for (i = 0; i < N; i++) {

Now run ``make`` and ``make v``. Your modelsim output should look
like:

.. code-block:: none

    # Cycle:           50 Time:        1050    Loop body
    # Cycle:           54 Time:        1130    a[         0] =    1
    # Cycle:           56 Time:        1170    Loop body
    # Cycle:           59 Time:        1230    b[         0] =    5
    # Cycle:           60 Time:        1250    a[         1] =    2
    # Cycle:           62 Time:        1290    Loop body
    # Cycle:           65 Time:        1350    b[         1] =    6
    # Cycle:           66 Time:        1370    a[         2] =    3
    # Cycle:           68 Time:        1410    Loop body
    # Cycle:           70 Time:        1450    c[         0] =    6
    # Cycle:           71 Time:        1470    b[         2] =    7
    # Cycle:           72 Time:        1490    a[         3] =    4
    # Cycle:           76 Time:        1570    c[         1] =    8
    # Cycle:           77 Time:        1590    b[         3] =    8
    # Cycle:           82 Time:        1690    c[         2] =   10
    # Cycle:           88 Time:        1810    c[         3] =   12
    # Cycle:           92 Time:        1890    c[         0] =    6
    # Cycle:           98 Time:        2010    c[         1] =    8
    # Cycle:          104 Time:        2130    c[         2] =   10
    # Cycle:          110 Time:        2250    c[         3] =   12
    # At t=     2330000 clk=1 finish=1 return_val=        36
    # Cycles:          114

Notice how the print statements are happening out-of-order? For instance
``a[2]`` is printing out before ``c[0]``. To get more information about the
iterative modulo schedule of the loop body open ``pipelining.legup.rpt`` and
scroll to the bottom. You will see that the initiation interval (II) of the
loop is 6. Each instruction is scheduled into a stage of the pipeline.  To get
a better look at the pipeline run ``make w``. When asked "Are you sure you want
to finish?" select No. Use the ``ctrl-s`` shortcut to search for a signal
called ``loop_pipeline_start``. Hit tab on this signal to get to scroll to when
it's asserted. Zoom out a bit and you will be able to see the
``loop_valid_bit_*`` signals for when each time step of the pipeline is valid.

Try commenting out the ``loop_pipeline`` tcl command in ``config.tcl``. Run
``make`` and ``make v``.  Notice that the circuit gets slower, with latency in
cycles increasing to 129. Also the print statements are now happening in order.

Look through the other benchmarks in ``legup/examples/pipeline/`` to get more
examples of using loop pipelining. For more details see :ref:`loop_pipeline`.

Hardware/Software Hybrid Flow
------------------------------

LegUp can automatically compile selected C functions into hardware
accelerators while running the remaining program segments on the processor.
Communication between the processor and hardware accelerators is performed
over the Avalon Interconnection Fabric, which is generated by Altera's SOPC Builder.
The hybrid flow can be implemented on the Cyclone II FPGA with SDRAM off-chip memory on the Altera DE-2 board or 
on the Stratix IV FPGA with DDR2 off-chip memory on the Altera DE-4 board. This can be configured by setting
**FAMILY** variable in Makefile.config to either Cyclone II or Stratix IV.

Sequential Execution
~~~~~~~~~~~~~~~~~~~~

LegUp can compile C functions to hardware accelerators which execute sequentially. 
To do this, LegUp generates a C wrapper function for every function to be accelerated. The wrapper function
sends its arguments to the hardware accelerator then
asserts the accelerator start signal, at which point the accelerator will stall
the processor by asserting the Avalon waitrequest signal. When the accelerator
finishes and sets waitrequest to 0 the processor resumes and
retrieves the return value from the accelerator. For example, let's say we want
to accelerate an array addition function as shown below::

    int add (int * a, int * b, int N)
    {
        int sum=0;
        for (int i=0; i<N; i++)
        {
            sum += a[i]+b[i];
        }
        return sum;
    }

To accelerate this function, put the function name in the ``config.tcl`` file
as shown below::

    set_accelerator_function "add"

Then run ``make hybrid``. LegUp will generate a C wrapper function, **legup_seq_add**,
to replace the **add** function. The wrapper function is shown below::

    //memory mapped addresses
    #define add_DATA   (volatile int *)0xf00000000
    #define add_STATUS (volatile int *)0xf00000008
    #define add_ARG1   (volatile int *)0xf0000000C
    #define add_ARG2   (volatile int *)0xf00000010
    #define add_ARG3   (volatile int *)0xf00000014

    int legup_seq_add (int * a, int * b, int N)
    {
        int sum;
    //pass arguments to accelerator
        *add_ARG1 = a;
        *add_ARG2  = b;
        *add_ARG3 = N;
    //give start signal
        *add_STATUS = 1;
    //get return data
        return = *add_DATA;
    }

``make hybrid`` automatically uses SOPC builder to generate the communication
between the processor and the hardware accelerator. In software, all
function calls to the accelerated function are replaced with calls to the
wrapper function. Thus, whenever the **add** function was called, the **legup_seq_add**
function is called instead, so that the computation is performed
by a hardware accelerator instead of the processor. 

If the function designated for acceleration has descendants (other functions
which are called by the designated function), all of its descendants are also
moved to hardware.  Descendant functions which have been moved to hardware
which are not called by other software functions are removed from software to
reduce the program footprint. 

All remaining functions are compiled to MIPS assembly to
run on the soft MIPS processor. One or more C functions can be synthesized into
hardware accelerators. 
``make hybridsim`` automatically creates the complete system and simulates in
Modelsim to verify the output.

In order to keep memory coherent, all global variables which are not
constants are stored in main memory, which is shared between the processor
and accelerators. When a hardware accelerator tries to access global variables
it first checks the on-chip data cache, which is also shared between the
processor and all accelerators. If there is a cache hit, the data is retrieved from
the cache. If there is a cache miss, the off-chip main memory is accessed, which
takes many more cycles to return the data. All constant variables in the hardware
accelerator are stored in local block RAMs, since they will never be modified
and thus it does not make sense to store them in high latency off-chip memory.
All hardware accelerator local variables are also stored in local block RAMs.

Parallel Execution (in beta release)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Note that this is work in progress and is in beta release. Please file any bugs on our bugzilla. 

LegUp can also execute multiple accelerators in parallel. This is done using Pthreads and OpenMP. 
Each thread is compiled into an accelerator, and LegUp instantiates as many accelerators as the number of threads used in the C program. 
Using Pthreads, you can either execute the same function in parallel using multiple threads, or you can also execute different functions in parallel. 
OpenMP can be used to execute a loop in parallel. This parallel execution flow has all the same properties as the sequential execution flow, except for a few minor differences.
Instead of stalling the processor after calling an accelerator, the processor continues to call all of the accelerators that execute in parallel
and then polls on the accelerators to check if they are done. The return value is retrieved after polling. 
Hence LegUp generates a pair of C wrappers for each parallel function, which is called a calling wrapper and a polling wrapper. The calling wrapper sends all of the arguments
to the accelerator and asserts the start signal, and the polling wrapper polls on the accelerator to check if it is done, then retrieves the return value if necessary. 
For example, let's say we parallelized the add function above using Pthreads. The add function needs to be re-written so that it can be used with Pthreads, as shown below::

    void *add (void *threadarg)
    {
        int sum=0;
		struct thread_data* arg = (struct thread_data*) threadarg;
		int *a = arg->a;
		int *b = arg->b;
		int N = arg->N;
        for (int i=0; i<N; i++)
        {
            sum += a[i]+b[i];
        }
		pthread_exit((void*)sum);
    }

This add function can execute in parallel using two threads with the following code::

	pthread_create(&threads[0], NULL, add, (void *)&data[0]);
	pthread_create(&threads[1], NULL, add, (void *)&data[1]);

	pthread_join(threads[0], (void**)&result[0]);
	pthread_join(threads[1], (void**)&result[1]);

LegUp automatically replaces the call to pthread_create with calls to LegUp calling wrappers and replaces the call to pthread_join with calls to LegUp polling wrappers. With two threads executing the add function, the following wrapper functions are generated::

    #define add0_DATA	(volatile int * ) 0xf0000000
    #define add0_STATUS	(volatile int * ) 0xf0000008
    #define add0_ARG1	(volatile int * ) 0xf000000c
    #define add0_ARG2	(volatile int * ) 0xf0000010

    void legup_call_add0(char *threadarg)
    {
        *add0_ARG1 = (volatile int) threadarg;
        *add0_ARG2 = (volatile int) 1;
        *add0_STATUS = 1;
    }

    #define add1_DATA	(volatile int * ) 0xf0000020
    #define add1_STATUS	(volatile int * ) 0xf0000028
    #define add1_ARG1	(volatile int * ) 0xf000002c
    #define add1_ARG2	(volatile int * ) 0xf0000030

    void legup_call_add1(char *threadarg)
    {
        *add1_ARG1 = (volatile int) threadarg;
        *add1_ARG2 = (volatile int) 2;
        *add1_STATUS = 1;
    }

    char *legup_poll_add0()
    {
        while (*add0_STATUS == 0){}
        return (char*)*add0_DATA;
    }

    char *legup_poll_add1()
    {
        while (*add1_STATUS == 0){}
        return (char*)*add1_DATA;
    }

legup_call indicates a calling wrapper, and legup_poll indicates a polling wrapper. The first argument pointer, ARG1, passes in the function argument, threadarg, 
and the second argument pointer, ARG2, passes in the threadID. This threadID is determined at compiled time by looking at the number of threads which are accelerated. 

LegUp currently supports the following Pthread and OpenMP functions. 

.. tabularcolumns:: |p{5cm}|p{5cm}|

==============================  =============================
Pthread Support                 OpenMP Support
==============================  =============================
pthread support 				Parallel for
pthread_create
pthread_join
pthread_mutex_lock
pthread_mutex_unlock
pthread_barrier_init
pthread_barrier_wait
==============================  =============================

Currently, only one mutex and one barrier can be used in a program. For working examples that use Pthreads and OpenMP, look in ``legup/examples/parallel/``

Avalon Signals
~~~~~~~~~~~~~~~

Each hardware accelerator contains the following Avalon signals.

.. tabularcolumns:: |p{5cm}|p{10cm}|

==============================  =============================
Avalon signal                   Description
==============================  =============================
csi_clockreset_clk              hardware accelerator clock 
csi_clockreset_reset            hardware accelerator reset
==============================  =============================

Avalon slave signals (prefixed with **avs_s1**) are used by the processor to
communicate with the hardware accelerator

.. tabularcolumns:: |p{5cm}|p{10cm}|

==============================  =========================================================================================================================================================================
Avalon signal                   Description
==============================  =========================================================================================================================================================================
avs_s1_address                  address sent from processor to hardware accelerator. Determines which accelerator argument is being written or whether the processor is giving the start signal
avs_s1_read                     processor sets high to read return value from hardware accelerator
avs_s1_write                    processor sets high to write an argument or start the processor.
avs_s1_readdata                 accelerator sets this to the return data to send back to the processor
avs_s1_writedata                processor sets this to the value of the argument being written to the accelerator
==============================  =========================================================================================================================================================================

Avalon master signals (prefixed with **avm**) which talk to the on-chip data
cache.  These signals correspond to the memory-mapped address of the data
cache. 


.. tabularcolumns:: |p{5cm}|p{10cm}|

==============================  =========================================================================================================================================================================
Avalon signal                   Description
==============================  =========================================================================================================================================================================
avm_ACCEL_address               points to the memory-mapped address of the data cache
avm_ACCEL_read                  set high when accelerator is reading from memory
avm_ACCEL_write                 set high when accelerator is writing to memory
avm_ACCEL_readdata              data returned from memory when accelerator issues a read
avm_ACCEL_writedata             on a write, it sends the data to be written to memory, as well as the memory address and the size of the data (8bit, 16bit, 32bit, 64bit)
								on a read, it sends the memory address and the size of the data (8bit, 16bit, 32bit, 64bit)
avm_ACCEL_waitrequest           asserted until the read data is received
==============================  =========================================================================================================================================================================

The on-chip data cache is a write-through cache, hence when an accelerator or
the processor writes to the cache, the cache controller also sends the data to
the off-chip main memory. 

If a memory read results in a cache miss, the cache controller will access off-chip main
memory to get the data, which will be written to the cache and also returned to
the accelerator.

For parallel execution which uses either a mutex or a barrier, the following Avalon signals are also created. This Avalon master is used to communicate with the mutex
to either lock (pthread_mutex_lock) or unlock (pthread_mutex_unlock), and also used communicate with the barrier to initialize (pthread_barrier_init) 
and poll on the barrier (pthread_barrier_wait) until all threads have reached the barrier. 

.. tabularcolumns:: |p{5cm}|p{10cm}|

==============================  =============================
Avalon signal                   Description
==============================  =============================
avm_API_address                 points to the memory-mapped address of mutex, barrier
avm_API_read                    set high when accelerator is reading from mutex, barrier
avm_API_write                   set high when accelerator is writing to mutex, barrier
avm_API_readdata                data returned from mutex, barrier when accelerator issues a read
avm_API_writedata               data written to mutex, barrier when accelerator issues a read
avm_API_waitrequest             asserted until the read data is received
==============================  =============================

Multi-ported Caches
~~~~~~~~~~~~~~~~~~~

When multiple accelerators execute in parallel, the memory bandwidth easily becomes the bottleneck, especially since FPGAs have on-chip RAMs which only have up to two ports. 
To mitigate this, we created multi-ported caches which allow multiple memory accesses at the same time. There are two types of multi-ported caches, one of which is based
on the live-value table (LVT) memory, and the other which uses the multi-pumping (MP) memory. For more details on the hardware architecture, please refer to our paper, ``Impact of Cache Architecture and Interface on Performance and Area of FPGA-Based Processor/Parallel-Accelerator Systems``, on our publications page. 
Both the LVT cache and the MP cache are configured to have 4 ports, which means that 4 accelerators can access memory at the same time. When there are more than 4 parallel accelerators, arbitration is created for ports with more than one accelerator, and when multiple accelerators try to access the same port concurrently, the arbitor services the memory accesses in a round-robin manner. To use these multi-ported caches, one has to put the type of the multi-ported cache as well as the number of ports of the cache in the ``config.tcl`` file, as shown below::

	set_dcache_ports 4
	set_dcache_type LVT

This creates the LVT cache and automatically connects the accelerators to each port of the cache. To use the MP cache, put the following in the ``config.tcl`` file::

	set_dcache_ports 4
	set_dcache_type MP

Currently, only 4 ports are supported for both the LVT and the MP cache and they can only be used on the Stratix IV FPGA, as the Cyclone II FPGA has limited resources. These multi-ported caches are only used for the data cache, since the instruction cache is only accessed by the single MIPS processor. However, both the data cache and the instruction cache can be configured in terms of their total cache sizes, line sizes, and associativity by putting the following in the ``config.tcl`` file::

    set_dcache_size 	size in KB
    set_dcache_linesize size in bytes
    set_dcache_way 		associativity
    set_icache_size 	size in KB
    set_icache_linesize size in bytes
    set_icache_way 		associativity

Using these commands automatically configures the cache and generates the RAMs with the specified sizes. 
The data cache and the instruction cache can be configured independently and if they are not configured, a direct-mapped cache is used with the default sizes. 
