load_system pcie_tutorial/qsys_system.qsys
#add the accelerators
add_instance ByRef_0 ByRef
add_instance ByRef_1 ByRef
add_instance ByRef_2 ByRef
add_instance ByRef_3 ByRef

#add the onchip memory
add_instance onchip_memory altera_avalon_onchip_memory2 

#add the accel_mem bridge
add_instance accel_mem_bridge accel_to_mem_bridge

#connect clock to accelerators
add_connection pcie_ip.pcie_core_clk ByRef_0.clockreset
add_connection pcie_ip.pcie_core_reset ByRef_0.clockreset_reset
add_connection pcie_ip.pcie_core_clk ByRef_1.clockreset
add_connection pcie_ip.pcie_core_reset ByRef_1.clockreset_reset
add_connection pcie_ip.pcie_core_clk ByRef_2.clockreset
add_connection pcie_ip.pcie_core_reset ByRef_2.clockreset_reset
add_connection pcie_ip.pcie_core_clk ByRef_3.clockreset
add_connection pcie_ip.pcie_core_reset ByRef_3.clockreset_reset

#connect clock to bridge
add_connection pcie_ip.pcie_core_clk accel_mem_bridge.clock 
add_connection pcie_ip.pcie_core_reset accel_mem_bridge.reset  

#connect dma to each accelerator
add_connection sgdma.m_read ByRef_0.s1
add_connection sgdma.m_write ByRef_0.s1
add_connection pcie_ip.bar1_0 ByRef_0.s1
add_connection sgdma.m_read ByRef_1.s1
add_connection sgdma.m_write ByRef_1.s1
add_connection pcie_ip.bar1_0 ByRef_1.s1
add_connection sgdma.m_read ByRef_2.s1
add_connection sgdma.m_write ByRef_2.s1
add_connection pcie_ip.bar1_0 ByRef_2.s1
add_connection sgdma.m_read ByRef_3.s1
add_connection sgdma.m_write ByRef_3.s1
add_connection pcie_ip.bar1_0 ByRef_3.s1
set_connection_parameter_value sgdma.m_read/ByRef_0.s1 baseAddress "0x0"
set_connection_parameter_value sgdma.m_write/ByRef_0.s1 baseAddress "0x0"
set_connection_parameter_value pcie_ip.bar1_0/ByRef_0.s1 baseAddress "0x0"
set_connection_parameter_value sgdma.m_read/ByRef_1.s1 baseAddress "0x20"
set_connection_parameter_value sgdma.m_write/ByRef_1.s1 baseAddress "0x20"
set_connection_parameter_value pcie_ip.bar1_0/ByRef_1.s1 baseAddress "0x20"
set_connection_parameter_value sgdma.m_read/ByRef_2.s1 baseAddress "0x40"
set_connection_parameter_value sgdma.m_write/ByRef_2.s1 baseAddress "0x40"
set_connection_parameter_value pcie_ip.bar1_0/ByRef_2.s1 baseAddress "0x40"
set_connection_parameter_value sgdma.m_read/ByRef_3.s1 baseAddress "0x60"
set_connection_parameter_value sgdma.m_write/ByRef_3.s1 baseAddress "0x60"
set_connection_parameter_value pcie_ip.bar1_0/ByRef_3.s1 baseAddress "0x60"


#connect the onchip memory to sgdma controller
add_connection pcie_ip.pcie_core_clk onchip_memory.clk1
add_connection pcie_ip.pcie_core_reset onchip_memory.reset1 
add_connection sgdma.m_read onchip_memory.s1
add_connection sgdma.m_write onchip_memory.s1

#configure the onchip memory
set_instance_parameter_value onchip_memory dualPort "true"
set_instance_parameter_value onchip_memory dataWidth "64" 
set_instance_parameter_value onchip_memory memorySize "750000"
set_instance_parameter_value onchip_memory singleClockOperation "true"
set_connection_parameter_value sgdma.m_read/onchip_memory.s1 baseAddress "0x40000000"
set_connection_parameter_value sgdma.m_write/onchip_memory.s1 baseAddress "0x40000000"

#connect each accelerator to the bridge
add_connection ByRef_0.ACCEL accel_mem_bridge.accel
set_connection_parameter_value ByRef_0.ACCEL/accel_mem_bridge.accel baseAddress "0x0"
add_connection ByRef_1.ACCEL accel_mem_bridge.accel
set_connection_parameter_value ByRef_1.ACCEL/accel_mem_bridge.accel baseAddress "0x20"
add_connection ByRef_2.ACCEL accel_mem_bridge.accel
set_connection_parameter_value ByRef_2.ACCEL/accel_mem_bridge.accel baseAddress "0x40"
add_connection ByRef_3.ACCEL accel_mem_bridge.accel
set_connection_parameter_value ByRef_3.ACCEL/accel_mem_bridge.accel baseAddress "0x60"

#connect the bridge to mem
add_connection accel_mem_bridge.memory onchip_memory.s2
set_connection_parameter_value accel_mem_bridge.memory/onchip_memory.s2 baseAddress "0x0"

save_system
