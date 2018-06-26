package riscv

import chisel3._
import chisel3.util._


class roccAluIO extends Bundle {
  val func=Input(UInt(7.W))
  val data_rs1 = Input(UInt(32.W))
  val data_rs2 = Input(UInt(32.W))
  val opcode = Input(UInt(7.W))
  val out = Output(UInt(32.W))
}

class RoccAlu extends Module {
  val io = IO(new roccAluIO)
  val r1 = io.data_rs1(15,0).asUInt
  val r2 = io.data_rs2(31,16).asUInt
  io.out:=Cat(r1,r2)
}

