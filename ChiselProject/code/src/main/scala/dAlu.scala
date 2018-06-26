package riscv

import chisel3._
import chisel3.util._
import riscv.instruction._

class ioAlu extends Bundle {
val opcode		=Input(UInt(7.W))

val in_8bit1_rs1	=Input(UInt(8.W))
val in_8bit1_rs2	=Input(UInt(8.W))
val in_8bit2_rs1	=Input(UInt(8.W))
val in_8bit2_rs2	=Input(UInt(8.W))
val in_16bit_rs1	=Input(UInt(16.W))
val in_16bit_rs2	=Input(UInt(16.W))
val in_32bit_rs1	=Input(UInt(32.W))
val in_32bit_rs2	=Input(UInt(32.W))

val out			=Output(UInt(32.W))
}

class dAlu extends Module {
val io	=IO(new ioAlu)
val out_8bit1=MuxLookup(io.opcode,0.U(8.W),Seq(
	SADD8 -> (io.in_8bit1_rs1.asSInt + io.in_8bit1_rs2.asSInt).asUInt,
	UADD8 -> (io.in_8bit1_rs1 + io.in_8bit1_rs2)))
val out_8bit2=MuxLookup(io.opcode,0.U(8.W),Seq(
	SADD8 -> (io.in_8bit2_rs1.asSInt+io.in_8bit2_rs2.asSInt).asUInt,
	UADD8 -> (io.in_8bit2_rs1+io.in_8bit2_rs2)))
val out_16bit=MuxLookup(io.opcode,0.U(8.W),Seq(
	SADD8 -> (io.in_16bit_rs1.asSInt+io.in_16bit_rs2.asSInt).asUInt,
	UADD8 -> (io.in_16bit_rs1+io.in_16bit_rs2)))
val out_32bit=MuxLookup(io.opcode,0.U(8.W),Seq(
	SADD8 -> (io.in_32bit_rs1.asSInt+io.in_32bit_rs2.asSInt).asUInt,
	UADD8 -> (io.in_32bit_rs1+io.in_32bit_rs2)))

io.out:=out_8bit1+Cat(out_8bit2,0.U(8.W))+Cat(out_16bit,0.U(8.W))+out_32bit
}

