load_system pcie_tutorial/qsys_system.qsys

add_instance calc_mandel_0 mandelbrot_zoom_wrapper
add_instance onchip_memory2_0 altera_avalon_onchip_memory2 

add_connection pcie_ip.pcie_core_clk calc_mandel_0.clockreset
add_connection pcie_ip.pcie_core_reset calc_mandel_0.clockreset_reset
add_connection sgdma.m_read calc_mandel_0.s1
add_connection sgdma.m_write calc_mandel_0.s1
add_connection pcie_ip.bar1_0 calc_mandel_0.s1

add_connection pcie_ip.pcie_core_clk onchip_memory2_0.clk1
add_connection pcie_ip.pcie_core_reset onchip_memory2_0.reset1 
add_connection sgdma.m_read onchip_memory2_0.s1
add_connection sgdma.m_write onchip_memory2_0.s1

set_instance_parameter_value onchip_memory2_0 dualPort "true"
set_instance_parameter_value onchip_memory2_0 dataWidth "64" 
set_instance_parameter_value onchip_memory2_0 memorySize "750000"
set_instance_parameter_value onchip_memory2_0 singleClockOperation "true"
set_connection_parameter_value sgdma.m_read/onchip_memory2_0.s1 baseAddress "0x40000000"
set_connection_parameter_value sgdma.m_write/onchip_memory2_0.s1 baseAddress "0x40000000"

add_connection calc_mandel_0.ACCEL onchip_memory2_0.s2
set_connection_parameter_value calc_mandel_0.ACCEL/onchip_memory2_0.s2 baseAddress "0x40000000"

set_connection_parameter_value sgdma.m_read/calc_mandel_0.s1 baseAddress "0x0"
set_connection_parameter_value sgdma.m_write/calc_mandel_0.s1 baseAddress "0x0"
set_connection_parameter_value pcie_ip.bar1_0/calc_mandel_0.s1 baseAddress "0x0"

save_system

