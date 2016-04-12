.. _FAQ:

Frequently Asked Questions 
==================================

**How is LegUp different from other high-level synthesis tools?**

   The source code is available and
   we include a test suite to verify circuit correctness using simulations

**What are the goals of the LegUp project?**

 - To make FPGAs easier to program
 - To help researchers develop new high-level synthesis algorithms

**What is the input high-level lanagage?**

   ANSI C without recursive functions, dynamic memory, or floating point.
   Functions, arrays, structs, global variables, and pointers are supported

**What is the output?**

   Verilog that can be simulated with Modelsim and synthesized using Quartus II
   The synthesized circuits have been verified in hardware using an Altera DE2 (Cyclone II FPGA)
   or Altera DE4 (Stratix IV FPGA)

**Does LegUp support software/hardware partitioning?**

  Yes. We call this the LegUp hybrid flow. You can specify a list of functions
  to synthesize into hardware accelerators. The rest of the program is left
  running on a soft MIPS processor and hardware/software communication
  interfaces are generated automatically.

**What high-level synthesis algorithms are supported?**

 - SDC scheduling with operator chaining and pipelined functional units
 - Binding using bipartite weighted matching
 - Pattern-based resource sharing

**How are the quality of results?**

 - Cyclone II hardware metrics are given on our quality of results page.
 - We've found that the area-delay product over our benchmarks is compariable
   to eXCite, a commercial high-level synthesis tool.

**Do you support VHDL output?**

    No. We only support Verilog.

**Do you support Xilinx FPGAs?**

    No. But this would only require minor modifications to swap the
    lpm_divide and altsyncram modules with Xilinx equivalents.

**Do you support having a NiosII or Microblaze processor?**

    No. Swapping the Tiger MIPS processor with a Microblaze/NiosII processor
    would be non-trivial.

**How can I see the CDFG from legup? Can you display a gantt chart?**

    No unfortunately we don't have any way of visualizing the CDFG yet. 
    Instead, look in the ``scheduling.legup.rpt`` log file to see the
    instruction state assignments.

**Does legup support scheduling constraints? e.g., the number of
operators, the time a certain operation should be used?**

    Right now the number of functional units is hardcoded to be unlimited
    for simple operations (add, sub, etc) and limited to the minimum
    number needed for dividers/remainder operations.
    We limit the multipliers to use only the number of DSP units available on
    the target FPGA.

**How often do you release?**

   Every 6-12 months

**Why use the LLVM compiler infrastructure over GCC?**

    When we compared LLVM to GCC we found that the benefits outweighed the
    disadvantages.

    GCC Pros:

      * Mature and very popular
      * Supports auto-vectorization
      * Compiles faster code than LLVM (5-10%)
      * Support for adding new optimization passes using a shared library  (plug-in)

    GCC Cons:

      * Very little documentation
      * Large complex C codebase with heavy use of globals and macros.
      * Only have access to single static assignment form (GIMPLE) in the optimization phase

    LLVM Pros:

      * Great Documentation
      * Very modular C++ design. Easy to add compiler passes and targets
      * Code is very easy to work with and understand
      * Access to SSA in every stage of the compiler
      * Permissive BSD license
      * Fairly mature. Uses gcc as front-end, so llvm is a drop in replacement for gcc.

    LLVM Cons:

      * No auto-vectorization

**Why did you write a new high-level synthesis tool when there are so many out there?**

   None of the existing high-level synthesis tools have source code available
   for researchers.
   `GAUT <http://www-labsticc.univ-ubs.fr/www-gaut/>`_ claims to be open-source
   but the code is not available for download.
   `xPilot <http://cadlab.cs.ucla.edu/soc/>`_ from UCLA is an advanced research
   tool but only the binary is available and it hasn't been updated since 2007.
   `ROCCC <http://www.jacquardcomputing.com/roccc/>`_ provides an open source
   eclipse plugin based on SUIF and LLVM but only supports small C programs.
   Standard C code must be rewritten to work with ROCCC because all function
   parameters must be structs. 
   `Trident <http://trident.sourceforge.net/>`_ uses a very old version of LLVM
   to interface with an extensive amount of Java code, but unfortunately no
   longer compiles with the latest version of LLVM.

