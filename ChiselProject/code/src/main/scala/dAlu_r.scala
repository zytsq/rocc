package riscv

import chisel3._
import chisel3.util._
import riscv.opcode_id._

class ioAlu_r extends Bundle {
//data
val data_rs1	=Input(UInt(32.W))
val data_rs2	=Input(UInt(32.W))
//contrl
val ctrl_signal	=Input(UInt(2.W))
//output data
val out_8bit1_rs1	=Output(UInt(8.W))
val out_8bit1_rs2	=Output(UInt(8.W))
val out_8bit2_rs1	=Output(UInt(8.W))
val out_8bit2_rs2	=Output(UInt(8.W))
val out_16bit_rs1	=Output(UInt(16.W))
val out_16bit_rs2	=Output(UInt(16.W))
val out_32bit_rs1	=Output(UInt(32.W))
val out_32bit_rs2	=Output(UInt(32.W))
}

class dAlu_r extends Module {
val io			=IO(new ioAlu_r)
io.out_8bit1_rs1	:=0.U(8.W)
io.out_8bit1_rs2	:=0.U(8.W)
io.out_8bit2_rs1	:=0.U(8.W)
io.out_8bit2_rs2	:=0.U(8.W)
io.out_16bit_rs1	:=0.U(16.W)
io.out_16bit_rs2	:=0.U(16.W)
io.out_32bit_rs1	:=0.U(32.W)
io.out_32bit_rs2	:=0.U(32.W)
when (io.ctrl_signal.asUInt === c_8bit) {
io.out_8bit1_rs1	:=io.data_rs1(7,0)
io.out_8bit1_rs2	:=io.data_rs2(7,0)
io.out_8bit2_rs1	:=io.data_rs1(15,8)
io.out_8bit2_rs2	:=io.data_rs2(15,8)
io.out_16bit_rs1	:=Cat(io.data_rs1(23,16),0.U(8.W))
io.out_16bit_rs2	:=Cat(io.data_rs2(23,16),0.U(8.W))
io.out_32bit_rs1	:=Cat(io.data_rs1(31,24),0.U(24.W))
io.out_32bit_rs2	:=Cat(io.data_rs2(31,24),0.U(24.W))
}
when (io.ctrl_signal.asUInt === c_16bit) {
io.out_16bit_rs1	:=io.data_rs1(15,0)
io.out_16bit_rs2	:=io.data_rs2(15,0)
io.out_32bit_rs1	:=Cat(io.data_rs1(31,16),0.U(16.W))
io.out_32bit_rs2	:=Cat(io.data_rs2(31,16),0.U(16.W))
}
when (io.ctrl_signal.asUInt === c_32bit) {
io.out_32bit_rs1	:=io.data_rs1
io.out_32bit_rs2	:=io.data_rs1
}
}




