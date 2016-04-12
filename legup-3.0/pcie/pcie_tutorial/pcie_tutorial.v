module pcie_tutorial(
  input OSC_50_BANK2,
  input PCIE_PREST_n,
  input PCIE_REFCLK_p,
  input [3:0] PCIE_RX_p,
  output [3:0] PCIE_TX_p
);

wire clk50, clk125;
my_pll pll_inst(
  .inclk0(OSC_50_BANK2),
  .c0(clk50),
  .c1(clk125)
);

qsys_system system_inst(
  .clk_clk(clk50),
  .pcie_ip_refclk_export(PCIE_REFCLK_p),
  .pcie_ip_fixedclk_clk(clk125),
  .reset_reset_n(1'b1),
  .pcie_ip_pcie_rstn_export(PCIE_PREST_n),
  .pcie_ip_rx_in_rx_datain_0(PCIE_RX_p[0]),
  .pcie_ip_rx_in_rx_datain_1(PCIE_RX_p[1]),
  .pcie_ip_rx_in_rx_datain_2(PCIE_RX_p[2]),
  .pcie_ip_rx_in_rx_datain_3(PCIE_RX_p[3]),
  .pcie_ip_tx_out_tx_dataout_0(PCIE_TX_p[0]),
  .pcie_ip_tx_out_tx_dataout_1(PCIE_TX_p[1]),
  .pcie_ip_tx_out_tx_dataout_2(PCIE_TX_p[2]),
  .pcie_ip_tx_out_tx_dataout_3(PCIE_TX_p[3])
);

endmodule
