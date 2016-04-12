create_clock -period 2 -name clk [get_ports clk]
create_clock -period 1 -name clk2x [get_ports clk2x]
derive_pll_clocks
derive_clock_uncertainty
