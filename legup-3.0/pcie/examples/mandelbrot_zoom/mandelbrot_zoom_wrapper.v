`define MEMORY_CONTROLLER_ADDR_SIZE 32
module mandelbrot_zoom_wrapper (
    //Clocks
    input csi_clockreset_clk,
    input csi_clockreset_reset,

    //Slave interface to talk to DMA 
    //Inputs
    input [3:0]avs_s1_address,
    input avs_s1_read,
    input avs_s1_write,
    input [31:0] avs_s1_writedata,
    //Outputs
    output [31:0] avs_s1_readdata,

    //Master interface to talk to onchip memory
    input [63:0] avm_ACCEL_readdata,
    input avm_ACCEL_waitrequest,
    output [`MEMORY_CONTROLLER_ADDR_SIZE-1:0] avm_ACCEL_address,
    output [63:0] avm_ACCEL_writedata,
    output avm_ACCEL_write,
    output avm_ACCEL_read,
    output [7:0]avm_ACCEL_byteenable
);

wire [127:0] accelerator_writedata;
wire [31:0] accelerator_address_hanging;
wire mem8, mem16, mem32, mem64;
wire accelerator_waitrequest, accelerator_write, accelerator_read;
wire [127:0] accelerator_readdata;
wire [2:0] byteSel_32bits;

//set address to least significant 32 bits of writedata
assign avm_ACCEL_address = accelerator_writedata[31:0];
//set actual writedata to middle 64 bits
assign avm_ACCEL_writedata = accelerator_writedata[95:32] << (byteSel_32bits * 8);
//concatenate readdata signal with byteenable shifted version (readdata_reg)
assign accelerator_readdata = {64'd0, avm_ACCEL_readdata}  >> (byteSel_32bits * 8);
//write and read signals
assign avm_ACCEL_write = accelerator_write;
assign avm_ACCEL_read = accelerator_read;
//define byteenable signals
assign mem8 = accelerator_writedata[96];
assign mem16 = accelerator_writedata[97];
assign mem64 = accelerator_writedata[98];
assign mem32 = ~(mem8 & mem16 & mem64);
//assign waitrequest
assign accelerator_waitrequest = avm_ACCEL_waitrequest;
//byte addressing
assign avm_ACCEL_byteenable = ({{4{mem64}}, {2{mem32|mem64}}, {mem16|mem32|mem64}, {1'b1}}) << byteSel_32bits;
assign byteSel_32bits = accelerator_writedata[2:0];

calc_mandel_top accelerator(
    csi_clockreset_clk,
    csi_clockreset_reset,
    //Slave interface to talk to DMA controller
    //Inputs
    avs_s1_address,
    avs_s1_read,
    avs_s1_write,
    avs_s1_writedata,
    avs_s1_readdata,
    //Master interface to talk to on-chip memory
    accelerator_readdata,
    accelerator_waitrequest,
    accelerator_address_hanging,
    accelerator_writedata,
    accelerator_write,
    accelerator_read
);

endmodule

