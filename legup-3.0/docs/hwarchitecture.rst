.. highlight:: c

.. _hwarch:

Hardware Architecture
======================

This section will explain the architecture of the hardware produced by LegUp when
synthesizing C into Verilog.

Modules
--------

Each C function corresponds to a Verilog module. For instance, the following C
prototype::

    int function(int a, int* b);

Would generate a module with the following interface:

.. code-block:: v

    module function
        input clk;
        input reset;
        input start;
        output reg finish;

        output reg [`MEMORY_CONTROLLER_ADDR_SIZE-1:0] memory_controller_address;
        output reg  memory_controller_enable;
        output reg  memory_controller_write_enable;
        input memory_controller_waitrequest;
        output reg [`MEMORY_CONTROLLER_DATA_SIZE-1:0] memory_controller_in;
        input [`MEMORY_CONTROLLER_DATA_SIZE-1:0] memory_controller_out;

        input [31:0] a;
        input [`MEMORY_CONTROLLER_ADDR_SIZE-1:0] b;

        output reg [31:0] return_val;
    endmodule

The start/reset signals are used by the first state of the state machine:

.. image:: /images/first_state.*

The finish signal is kept low until the last state of the state machine, where
finish is set to 1 when waitrequest is low.

==============================  =============================
Memory signal                   Description
==============================  =============================
memory_controller_address       32-bit address of memory                          
memory_controller_enable        enable reading/writing this cycle                 
memory_controller_write_enable  if 1 then write, else read                        
memory_controller_waitrequest   if this is 1 then hold the state machine constant 
memory_controller_in            data being read from memory                       
memory_controller_out           data to write into memory                         
==============================  =============================


Function parameters are provided by ports a (integer), and b (pointer). The
return_val port passes back the function return value.

The module instantiation hierarchy is dependent on the call graph of the C
code. For instance, with the function call graph shown by:

.. image:: /images/call_graph.*

Module instantiation hierarchy is shown by:

.. image:: /images/call_hier.*

Note that module **c** is instantiated twice.

Memory architecture
--------------------

LLVM has three types of memory: stack, globals, and the heap. We can ignore the
heap because Legup does not support dynamically allocated memory. The stack is
used for local variables but there is no equivalent of a stack in hardware.

In Legup, each variable that uses memory is stored in a separate altsyncram and
identified by a unique number called a tag. There are a few benefits of storing
each variable in a separate ram rather than grouping memory into one large ram,
as typical in a traditional computer architecture. First, we are not limited by
a single processor that can only perform operations in serial; we have the
flexibility to generate hardware with vast parallelism. Splitting variables
into separate altsyncrams avoids the bottleneck of waiting for a central memory
when multiple functional units are running in parallel. Another advantage is
debugging, it is easier for the hardware designer to debug if he sees
individual arrays from his C program in separate rams rather than buried in a
large ram. The main disadvantage of this memory architecture is the need for
tags to uniquely identify the block ram of each variable.

32-bit Address Format:

.. image:: /images/memory_architecture.*

The upper 8 bits of all memory addresses are reserved for a tag bit, allowing
255 memory locations. Tag 0x0 is reserved for null pointers. Tag 0x1 is
reserved for processor memory. The 24 bit address allows a 16MB
byte-addressable address space. Because the lower bits are used for the
pointer address, this scheme allows pointer arithmetic, incrementing the
address won't affect the tag bits.

For instance:

Inside the top level module the tag bits are used to steer the memory accesses
to either local memory or processor memory. The following figure shows memory
accesses from top-level module:

.. image:: /images/top_level.*

Memory Controller
------------------

Memory controller block diagram:

.. image:: /images/mem_ctrl.*

The memory controller is a ram composed of smaller rams. We need a memory
controller to share memory between modules and to handle pointer aliasing
within the same module. We need the tag bits because at compile time you can't
always calculate exactly which pointers point to the memory and that no other
pointer ever points to that piece of memory. So the memory controller is a
central place to handle aliasing. mem_data_out width is the max data width of
all rams in the memory controller. The size of pointers is currently fixed at
32 bits. If we need this to go larger we could move to 64 bit pointers.

There is only one memory controller module which instantiates the altsyncrams
required for the program. Each module must communicate through its parent
module to get to the memory controller. Hence, there are muxes at each level of
the hierarchy as shown in the figure:

.. image:: /images/call_graph_mux.*

For instance, in the main module we are either in the body of the main
function, in 'a', or in 'b', so we need a 3-1 mux. Since we do not allow
recursion, the call graph will always be a tree. Note that the further down on
the call graph there is more delay to the memory controller.

Function calls are handled with two states. In the first state, the input
parameters are passed to the called module and the start signal is set to 1.
The first state immediately transitions to the second state which waits until
the finish signal is asserted. The memory signals going into/out of this
function are tied to the called function in the second state. After the called
function asserts the finish signal, return value is stored into the local
register.

The memory controller (shown in figure) uses the upper 8 tag bits of the
address to determine which altsyncram to enable. The latency of reading from an
altsyncram is one cycle, so we must use the previous tag to determine which
altsyncram is outputting the data requested in the previous cycle. We
registered the output of the memory controller to improve fmax as the steering
mux can become large. Note that for tags 0 and 1, mem_dat_out keeps its old
value.

The mem_waitrequest signal is not shown here and for local memory is always
given a 0 value. If mem_waitrequest equals 1 then the memory controller is
indicating it will take longer to retrieve the memory. As long as
mem_waitrequest is high the memory is not ready. After mem_waitrequest goes low
then the data will be available on the next cycle. This is important for the
processor memory which can take many cycles if there is a cache miss. In every
state machine that legup generates the state will not change if mem_waitrequest
is high.

Lets give an example. Given::

    int global;
    int function() {
        char a[10];
        int b[15];
    }

There are three variables that will be stored in memory: global, a, b. The
memory controller will instantiate three altsyncrams: a 1-row 32-bit wide ram
for global, a 10 row 8-bit wide ram for a, and a 15 row 32-bit wide ram for b.
They will be assigned unique tags for instance 2, 3, 4 for global, a, and b
respectively. The address of a[5] is 0x03000005. The address of global is
0x20000000. You may consider it inefficient that we store the integer global in
a ram. We do this because LLVM treats all global variables as memory,
as oppose to a registers. However, Quartus synthesis seems to handle these
small rams gracefully. Any time a variable has its address taken it cannot be
stored in a register and must be stored in a ram. Without a central memory
controller we would have to pass the altsyncram signals for every variable into
each module, which would quickly become unwieldy. So the memory controller
serves to abstract the ram accesses and reduce memory signals passed between
modules.

We have a different memory controller to handle structs. In a struct, the
individual elements can have non-uniform size. Also structs must be byte
addressable. To handle this we need an additional 2-bit input **mem_size** which
indicates the size of the struct element we are accessing. mem_size is 0 for
byte, 1 for short, 2 for integer, 3 for long. For each struct a 64-bit wide ram
is instantiated. Using the mem_addr and mem_size we can use the byte enable of
the ram to only write the correct section of the ram. When reading data, we
must steer the correct bits of the 64-bit word to the lowermost bits of
mem_data_out.

A MIF, memory initialization file, is generated for each altsyncram.

Only one load or store from memory can occur in the same state. Since variables
are in separate rams we could potentially allow concurrent load/stores if they
are to different variables. Also we could use dual port rams in the future.

If a memory location is only used inside one module then we don't need to store
the location in the global memory controller. We could instantiate a local
altsyncram directly inside the module. This is not currently implemented.

When passing a pointer to a function the actual pointer is always passed, even
if it points to a single scalar. GAUT and xPilot both pass by value in this
case.

LLVM handles volatiles by making registers a read/write from memory.

All load/stores have 2 cycle latency to improve Fmax.

Function Calls
---------------

Every function call requires two states. An initial state to set start=1 for
the called function, then a second state that loops until receiving a finish=1
from the called function. Function calls are not allowed in the same state as a
memory load/store.

Signed/Unsigned
---------------

In LLVM, all integers are assumed to be unsigned unless passed to a signed
instruction (sdiv, srem). Since integers are unsigned, before being passed to
an add operation they must be appropriately sign or zero extended. To deal with
sign extension LLVM has two instructions: sign extend (sext) and zero extend
(zext), which both result in an unsigned integer. However, Verilog operations
such as +/- depend on the type of the operands, which can be 'signed' or
'unsigned'.

In LegUp, we declare every Verilog variable as unsigned and use the $signed()
Verilog command when required by an instruction such as sdiv, srem, or sext.

Mult-dimensional Arrays
------------------------

Multi-dimensional arrays are stored in row-major order, the same convention
used by C. For instance given an array::

    int array[2][2][2] = {{{0, 1}, {2, 3}}, {{4, 5}, {7, 8}}}

If we assign variables for the size of each dimension of the array[A][B][C]
where A=2, B=2, C=2. Then to access the element array[a][b][c] the memory
offset is given by::

     offset = c + C*b + C*B*a = c + C*(b + B*a)

This supports storing an array of arbitrary dimension in a ram the same width
as an element with A*B*C rows.

Functional Units
-----------------

To keep Fmax high, we pipelined dividers/remainders and multipliers. In all
cases we choose a pipeline depth equal to the bit width of the operation.

We only share dividers/modulus functional units to save area.
The divider clock enable is set to 0 when the memory controller's wait_request
signal is high or when we're calling a function.

Structs
--------

Structs are supported by LegUp including pointers, arrays, structs and
primitives as elements. Pointers to structs are also supported, for example
linked lists can be synthesized.

LLVM's TargetData is used to specify alignment for structs. For instance for a
32-bit machine, pointers are 32-bits and 32-bit aligned. LLVM integers of type
i64 are 64-bit aligned. Structs are 64-bit aligned.

