`timescale 1 ns / 1 ns

module mandel_tb(
    output [31:0] avm_ACCEL_address,
    output [127:0] avm_ACCEL_writedata,
    output avm_ACCEL_write,
    output avm_ACCEL_read,
    output [7:0]avm_ACCEL_byteenable
);

reg clk;
reg reset;
reg [3:0] addr;
reg [31:0] writedata;
reg write;

wire [127:0]avm_ACCEL_readdata;

initial
    clk <= 0;
always @ (clk)
    clk <= #10 ~clk;

initial begin
@(negedge clk);
reset <= 1;
@(negedge clk);
reset <= 0;
@(negedge clk);
addr <= 12;
writedata <= 32'h40000000; // ptr
write <= 1;
@(negedge clk);
addr <= 3;
writedata <= 0; // xstart
write <= 1;
@(negedge clk);
addr <= 4;
writedata <= 1; // xend
write <= 1;
@(negedge clk);
addr <= 5;
writedata <= 32'h00000020;
write <= 1;
@(negedge clk);
addr <= 6;
writedata <= 32'hffffc000;
write <= 1;
@(negedge clk);
addr <= 7;
writedata <= 32'h00000020;
write <= 1;
@(negedge clk);
addr <= 8;
writedata <= 32'hffffc000;
write <= 1;
@(negedge clk);
addr <= 9;
writedata <= 32'h000003e8;
write <= 1;
@(negedge clk);
addr <= 10;
writedata <= 32'h000003e8;
write <= 1;
@(negedge clk);
addr <= 11;
writedata <= 32'h000007d0;
write <= 1;
@(negedge clk);
addr <= 2;
writedata <= 1; // status (start)
write <= 1;
end

generate_set_top generate_set_inst(
    .csi_clockreset_clk (clk),
    .csi_clockreset_reset (reset), 
    /* stimulated by us */
    .avs_s1_address(addr),
    .avs_s1_read(1'b0),
    .avs_s1_write(write),
    .avs_s1_writedata(writedata),
    //Outputs
    .avs_s1_readdata (),

    //Master interface to talk to onchip memory
    .avm_ACCEL_readdata (avm_ACCEL_readdata),
    .avm_ACCEL_waitrequest (1'b0),
    .avm_ACCEL_address (avm_ACCEL_address),
    .avm_ACCEL_writedata (avm_ACCEL_writedata),
    .avm_ACCEL_write (avm_ACCEL_write),
    .avm_ACCEL_read (avm_ACCEL_read)
);

endmodule
