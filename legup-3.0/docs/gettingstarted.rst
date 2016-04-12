.. highlight:: bash

.. _getstarted:

Getting Started
==================

This guide should quickly get you started using LegUp to synthesize C into
Verilog. We assume that you are using a Linux 32/64-bit environment, we have
not tested LegUp on Windows or Mac OS.

Installation
------------

Required Packages on Ubuntu
++++++++++++++++++++++++++++++++++++

To install the required packages on Ubuntu, run::

    sudo apt-get install tcl8.5-dev dejagnu expect texinfo \
    build-essential liblpsolve55-dev libgmp3-dev automake libtool

If you're running version 11.10 of Ubuntu or older, run::

    sudo apt-get install gxemul

If you're running version 12.04 of Ubuntu or newer, download and
install the appropriate gxemul_0.6.0.2 for your architecture from::

    http://archive.ubuntu.com/ubuntu/pool/universe/g/gxemul/

If you're on a 64-bit system, run::

    sudo apt-get install libc6-dev-i386 

Install clang
+++++++++++++++++

Manually download the ``clang`` version 2.9 from `<http://llvm.org>`_
and add it to your path.

For 32-bit machines::

    wget http://llvm.org/releases/2.9/clang+llvm-2.9-i686-linux.tgz
    tar xvzf clang+llvm-2.9-i686-linux.tgz 
    export PATH=$PWD/clang+llvm-2.9-i686-linux/bin:$PATH

For 64-bit machines::

    wget http://llvm.org/releases/2.9/clang+llvm-2.9-x86_64-linux.tgz
    tar xvjf clang+llvm-2.9-x86_64-linux.tar.bz2
    mv clang+llvm-2.9-x86_64-linux.tar clang+llvm-2.9-x86_64-linux
    export PATH=$PWD/clang+llvm-2.9-x86_64-linux/bin:$PATH

.. NOTE::
    LegUp 1.0 used ``llvm-gcc`` which has since been deprecated


Compile LegUp Source
+++++++++++++++++++++

`Download <http://legup.org/download.php>`_ and compile the LegUp source::

    tar xvzf legup-3.0.tar.gz
    cd legup-3.0
    make
    export PATH=$PWD/llvm/Release/bin:$PATH

.. NOTE::
    If you want to speed up the compilation run make using 4 parallel threads: ``make -j4``

Modelsim and Quartus
+++++++++++++++++++++

You will need Modelsim to simulate the Verilog and Quartus to synthesize the
Verilog for an FPGA. You can download Quartus Web Edition and Modelsim for free
from `Altera <https://www.altera.com/download/software/quartus-ii-we>`_.
We recommend using Quartus 11.1sp2 because the LegUp hybrid flow does not work
with Quartus 12.

After installing Quartus update your environment to add ``sopc_builder`` to your path::

    export QUARTUS_ROOTDIR=/opt/altera/11.1sp2/quartus/
    export PATH=/opt/altera/11.1sp2/quartus/sopc_builder/bin/:$PATH

.. NOTE::
    You must edit the path above to point to your particular Quartus
    installation location.  

Test Suite
+++++++++++++++++++++

Now you can run the test suite to verify your installation::

    cd examples
    runtest

The test suite uses LegUp to synthesize hardware for all of our examples and
then simulates the hardware in Modelsim to verify correctness.
You should see the following output after a few minutes:

.. code-block:: none

                ===  Summary ===

    # of expected passes		476

For further details see :ref:`testsuite`

Quick Start Tutorial
+++++++++++++++++++++

To get started with LegUp lets try synthesizing a simple square root approximation
into hardware.  This example is already provided in our test suite::

    cd examples/sra
    make

Take a look at ``sra.v``. You've just synthesized your first C program into hardware!

Let's try to simulate the hardware in Modelsim. To do this, run the following
inside the sra directory::

    make v

.. NOTE::

    Make sure you have :program:`vsim` (Modelsim) on your path::

         $ which vsim
         /opt/modelsim/install/modeltech/linux/vsim

Your simulation output should look something like:

.. code-block:: none

    # ...
    # Loading work.main_tb(fast)
    # Loading work.ALTERA_DEVICE_FAMILIES(fast)
    # Loading work.ALTERA_MF_MEMORY_INITIALIZATION(fast)
    # Loading work.ram_dual_port(fast__1)
    # run 7000000000000000ns 
    # Result:        100
    # RESULT: PASS
    # At t=             1310000 clk=1 finish=1 return_val=       100
    # Cycles:                   63
    # ** Note: $finish    : sra.v(4330)
    #    Time: 1310 ns  Iteration: 3  Instance: /main_tb

The circuit produced the expected result of 100 and took 63 clock cycles to complete.
Now try synthesizing sra.v with Quartus targeting a Cyclone II FPGA::

    make p
    make f

Quartus should have no errors:

.. code-block:: none

    ...
    Info: Quartus II Shell was successful. 0 errors, 6 warnings
    Info: Peak virtual memory: 83 megabytes
    Info: Processing ended: Thu Dec 15 21:00:15 2011
    Info: Elapsed time: 00:00:48
    Info: Total CPU time (on all processors): 00:00:52

.. NOTE::
    If you want to use sra as a template for another program make sure
    to remove the lines **NO_OPT** and **NO_INLINE** from the Makefile.
    See :ref:`userguide`


Hybrid Flow: Hardware/Software Partitioning
--------------------------------------------

LegUp can compile an entire C program to hardware as above, or it can compile
user designated functions to hardware while remaining program segments are
executed in software on the soft TigerMIPS processor. This is referred
to as the *hybrid* flow.

For example, let's accelerate the **float64_add** function of the ``dfadd``
CHStone benchmark::

    cd examples/chstone_hybrid/dfadd
    gedit config.tcl

To specify which functions should be in hardware, use
the **set_accelerator_function** tcl command.  Add the following to
``config.tcl``::

    set_accelerator_function "float64_add"

The **float64_add** function plus all of its descendants will now be compiled to a
hardware accelerator. The **set_accelerator_function** can be used more
than once to accelerate multiple functions.  Now, run::

    make hybridsim

.. NOTE::
    ``make hybridsim`` runs Altera's ``sopc_builder`` script which requires X11

LegUp will generate the hardware accelerator and simulate the system in
Modelsim. The output should look like:

.. code-block:: none

	# ...
	# Result: 46
	# 
	# RESULT: PASS
	# 
	# counter =                10651

The counter variable gives the total number of cycles for the complete execution of the
program, which in this case is 10651 cycles, and the circuit produced the expected result of 46. 
``# RESULT: PASS`` indicates that the test case passed. Each test runs a set of test vectors with known outputs, like a hardware built-in self test.
The test passes if the simulation output matches the expected output.


Readings 
----------

Now that you've tried out LegUp you should read these publications. They will
help you better understand our code:

  * `LegUp publications <http://legup.eecg.utoronto.ca/publications.php>`_
  * `LegUp paper in FPGA 2011 <http://legup.org/fpga60-legup.pdf>`_
  * `Introduction to High-Level Synthesis by Daniel Gajski <http://www.springerlink.com/content/x256j33043254102/?p=b94f6af24a7149a5b07e5d2d71783208&pi=5>`_
  * `CHStone benchmark paper <http://www.jstage.jst.go.jp/article/ipsjjip/17/0/242/_pdf>`_
  * `SDC Scheduling paper <http://cadlab.cs.ucla.edu/~cong/papers/28.1-cong.pdf>`_

