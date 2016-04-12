# INFO
#
# To run this: qsys-script --package-version=12.0 --script=legup_qsys_pcie.tcl
# in the directory of the example
# We need to make legup spit out this script

load_system pcie_tutorial/qsys_system.qsys

add_instance generate_set_hw_0 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_0.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_0.clockreset_reset
add_connection sgdma.m_read generate_set_hw_0.s1
add_connection sgdma.m_write generate_set_hw_0.s1
add_connection pcie_ip.bar1_0 generate_set_hw_0.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_0.s1 baseAddress "0"
set_connection_parameter_value sgdma.m_write/generate_set_hw_0.s1 baseAddress "0"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_0.s1 baseAddress "0"


add_instance generate_set_hw_1 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_1.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_1.clockreset_reset
add_connection sgdma.m_read generate_set_hw_1.s1
add_connection sgdma.m_write generate_set_hw_1.s1
add_connection pcie_ip.bar1_0 generate_set_hw_1.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_1.s1 baseAddress "64"
set_connection_parameter_value sgdma.m_write/generate_set_hw_1.s1 baseAddress "64"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_1.s1 baseAddress "64"


add_instance generate_set_hw_2 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_2.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_2.clockreset_reset
add_connection sgdma.m_read generate_set_hw_2.s1
add_connection sgdma.m_write generate_set_hw_2.s1
add_connection pcie_ip.bar1_0 generate_set_hw_2.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_2.s1 baseAddress "128"
set_connection_parameter_value sgdma.m_write/generate_set_hw_2.s1 baseAddress "128"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_2.s1 baseAddress "128"


add_instance generate_set_hw_3 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_3.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_3.clockreset_reset
add_connection sgdma.m_read generate_set_hw_3.s1
add_connection sgdma.m_write generate_set_hw_3.s1
add_connection pcie_ip.bar1_0 generate_set_hw_3.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_3.s1 baseAddress "192"
set_connection_parameter_value sgdma.m_write/generate_set_hw_3.s1 baseAddress "192"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_3.s1 baseAddress "192"


add_instance generate_set_hw_4 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_4.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_4.clockreset_reset
add_connection sgdma.m_read generate_set_hw_4.s1
add_connection sgdma.m_write generate_set_hw_4.s1
add_connection pcie_ip.bar1_0 generate_set_hw_4.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_4.s1 baseAddress "256"
set_connection_parameter_value sgdma.m_write/generate_set_hw_4.s1 baseAddress "256"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_4.s1 baseAddress "256"


add_instance generate_set_hw_5 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_5.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_5.clockreset_reset
add_connection sgdma.m_read generate_set_hw_5.s1
add_connection sgdma.m_write generate_set_hw_5.s1
add_connection pcie_ip.bar1_0 generate_set_hw_5.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_5.s1 baseAddress "320"
set_connection_parameter_value sgdma.m_write/generate_set_hw_5.s1 baseAddress "320"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_5.s1 baseAddress "320"


add_instance generate_set_hw_6 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_6.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_6.clockreset_reset
add_connection sgdma.m_read generate_set_hw_6.s1
add_connection sgdma.m_write generate_set_hw_6.s1
add_connection pcie_ip.bar1_0 generate_set_hw_6.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_6.s1 baseAddress "384"
set_connection_parameter_value sgdma.m_write/generate_set_hw_6.s1 baseAddress "384"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_6.s1 baseAddress "384"


add_instance generate_set_hw_7 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_7.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_7.clockreset_reset
add_connection sgdma.m_read generate_set_hw_7.s1
add_connection sgdma.m_write generate_set_hw_7.s1
add_connection pcie_ip.bar1_0 generate_set_hw_7.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_7.s1 baseAddress "448"
set_connection_parameter_value sgdma.m_write/generate_set_hw_7.s1 baseAddress "448"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_7.s1 baseAddress "448"


add_instance generate_set_hw_8 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_8.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_8.clockreset_reset
add_connection sgdma.m_read generate_set_hw_8.s1
add_connection sgdma.m_write generate_set_hw_8.s1
add_connection pcie_ip.bar1_0 generate_set_hw_8.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_8.s1 baseAddress "512"
set_connection_parameter_value sgdma.m_write/generate_set_hw_8.s1 baseAddress "512"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_8.s1 baseAddress "512"


add_instance generate_set_hw_9 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_9.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_9.clockreset_reset
add_connection sgdma.m_read generate_set_hw_9.s1
add_connection sgdma.m_write generate_set_hw_9.s1
add_connection pcie_ip.bar1_0 generate_set_hw_9.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_9.s1 baseAddress "576"
set_connection_parameter_value sgdma.m_write/generate_set_hw_9.s1 baseAddress "576"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_9.s1 baseAddress "576"


add_instance generate_set_hw_10 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_10.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_10.clockreset_reset
add_connection sgdma.m_read generate_set_hw_10.s1
add_connection sgdma.m_write generate_set_hw_10.s1
add_connection pcie_ip.bar1_0 generate_set_hw_10.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_10.s1 baseAddress "640"
set_connection_parameter_value sgdma.m_write/generate_set_hw_10.s1 baseAddress "640"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_10.s1 baseAddress "640"


add_instance generate_set_hw_11 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_11.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_11.clockreset_reset
add_connection sgdma.m_read generate_set_hw_11.s1
add_connection sgdma.m_write generate_set_hw_11.s1
add_connection pcie_ip.bar1_0 generate_set_hw_11.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_11.s1 baseAddress "704"
set_connection_parameter_value sgdma.m_write/generate_set_hw_11.s1 baseAddress "704"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_11.s1 baseAddress "704"


add_instance generate_set_hw_12 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_12.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_12.clockreset_reset
add_connection sgdma.m_read generate_set_hw_12.s1
add_connection sgdma.m_write generate_set_hw_12.s1
add_connection pcie_ip.bar1_0 generate_set_hw_12.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_12.s1 baseAddress "768"
set_connection_parameter_value sgdma.m_write/generate_set_hw_12.s1 baseAddress "768"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_12.s1 baseAddress "768"


add_instance generate_set_hw_13 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_13.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_13.clockreset_reset
add_connection sgdma.m_read generate_set_hw_13.s1
add_connection sgdma.m_write generate_set_hw_13.s1
add_connection pcie_ip.bar1_0 generate_set_hw_13.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_13.s1 baseAddress "832"
set_connection_parameter_value sgdma.m_write/generate_set_hw_13.s1 baseAddress "832"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_13.s1 baseAddress "832"


add_instance generate_set_hw_14 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_14.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_14.clockreset_reset
add_connection sgdma.m_read generate_set_hw_14.s1
add_connection sgdma.m_write generate_set_hw_14.s1
add_connection pcie_ip.bar1_0 generate_set_hw_14.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_14.s1 baseAddress "896"
set_connection_parameter_value sgdma.m_write/generate_set_hw_14.s1 baseAddress "896"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_14.s1 baseAddress "896"


add_instance generate_set_hw_15 generate_set_hw

add_connection pcie_ip.pcie_core_clk generate_set_hw_15.clockreset
add_connection pcie_ip.pcie_core_reset generate_set_hw_15.clockreset_reset
add_connection sgdma.m_read generate_set_hw_15.s1
add_connection sgdma.m_write generate_set_hw_15.s1
add_connection pcie_ip.bar1_0 generate_set_hw_15.s1

set_connection_parameter_value sgdma.m_read/generate_set_hw_15.s1 baseAddress "960"
set_connection_parameter_value sgdma.m_write/generate_set_hw_15.s1 baseAddress "960"
set_connection_parameter_value pcie_ip.bar1_0/generate_set_hw_15.s1 baseAddress "960"

save_system
