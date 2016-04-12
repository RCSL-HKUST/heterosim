#!/bin/bash

benchmarks=( 
	'verilog_bs/binary_search.v'
	'verilog_bubblesort/bubblesort.v'
	'verilog_insertsort/insertsort.v'
	'verilog_prime/prime.v'
	'verilog_qsort_exam_int/sort.v'
)

for bench in "${benchmarks[@]}"
do
	verilog=$(basename $bench .v)
	dirname=$(dirname $bench)
	echo $verilog $dirname
	cd $dirname
	verilator -Wno-WIDTH --cc $verilog.v -exe sim_main.cpp
	cd obj_dir
	make -j -f V$verilog.mk V$verilog
        cp ./V$verilog ../../ 
	./V$verilog input.txt output.txt
	cd ../..
done
