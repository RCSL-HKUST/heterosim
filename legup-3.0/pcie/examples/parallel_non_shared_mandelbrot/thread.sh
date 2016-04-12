#!/bin/sh

file='legup_qsys_pcie.tcl'
c=0
addr=0

if [ $# -lt 1 ]; then
  echo "Usage: <# of threads>"
  exit
fi

echo "# INFO
#
# To run this: qsys-script --package-version=12.0 --script=legup_qsys_pcie.tcl
# in the directory of the example
# We need to make legup spit out this script

load_system pcie_tutorial/qsys_system.qsys" > $file

while [ $c -lt $1 ]; do
  echo "
add_instance generate_set_hw_$c generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_$c.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_$c.clockreset_reset
add_connection sgdma.m_read generate_set_hw_$c.s1
add_connection sgdma.m_write generate_set_hw_$c.s1
add_connection pcie_ip.bar1_0 generate_set_hw_$c.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_$c.s1 baseAddress \"$addr\"
set_connection_parameter_value sgdma.m_write/generate_set_hw_$c.s1 baseAddress \"$addr\"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_$c.s1 baseAddress \"$addr\"
" >> $file
  c=`expr $c + 1`
  addr=`expr $addr + 64`
done

echo "save_system" >> $file
