module accel_to_mem_bridge (
    //qsys inputs
    input clk,
    input reset,
    //accel inputs
    input [127:0] writedata_from_accel,
    input address_from_accel,
    input write_from_accel,
    input read_from_accel,
    output [127:0]readdata_to_accel,
    output waitrequest_to_accel,

    //mem outputs
    //ignore the upper bit of the address so that the s2 interface
    //of on chip memory can sit at 0x0 
    input waitrequest_from_mem,
    output [30:0] address_to_mem,
    input [63:0] readdata_from_mem,
    output read_to_mem,
    output write_to_mem,
    output [63:0] writedata_to_mem,
    output [7:0] byteenable_to_mem
);

wire        mem8, mem16, mem32, mem64;
wire [2:0]  atm_byteSel_32bit;

assign mem8 = writedata_from_accel[96];
assign mem16 = writedata_from_accel[97];
assign mem64 = writedata_from_accel[98];
assign mem32 = ~(mem8 & mem16 & mem64);

assign atm_byteSel_32bit = writedata_from_accel[2:0];
assign write_to_mem = write_from_accel;
assign read_to_mem = read_from_accel;
//assign chipselect_to_mem = read_from_accel | write_from_accel;
//set byteenable according to appropiate byte enable signals
assign byteenable_to_mem = ({{4{mem64}}, {2{mem32|mem64}}, {mem16|mem32|mem64}, {1'b1}}) << atm_byteSel_32bit;
//set address to least significant 31 bits of writedata
assign address_to_mem = writedata_from_accel[30:0];
//concatenate readdata with byteenable shifted version 
assign readdata_to_accel = {64'd0, readdata_from_mem} >> (atm_byteSel_32bit * 8);
//set actual writedata to middle 64 bits
assign writedata_to_mem = writedata_from_accel[95:32] << (atm_byteSel_32bit * 8);

endmodule
