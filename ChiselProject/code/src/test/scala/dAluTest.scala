
package riscv

import chisel3._
import chisel3.iotesters.{PeekPokeTester, Driver, ChiselFlatSpec}

object dAluTest extends App {
  iotesters.Driver.execute(args, () => new dAlu) {
    c => new dAluTester(c)
  }
}

class dAluTester(c: dAlu) extends PeekPokeTester(c) {
val s			=UInt(7.W)
val in_8bit1_rs1	=4.U(8.W)
val in_8bit1_rs2	=4.U(8.W)
val in_8bit2_rs1	=3.U(8.W)
val in_8bit2_rs2	=3.U(8.W)
val in_16bit_rs1	="hFF00".U
val in_16bit_rs2	="h0F00".U
val in_32bit_rs1	="h01000000".U
val in_32bit_rs2	="h01000000".U
  for (s <- 0 until 9) {
    poke(c.io.opcode,s)
    poke(c.io.in_8bit1_rs1,in_8bit1_rs1)
    poke(c.io.in_8bit1_rs2,in_8bit1_rs2)
    poke(c.io.in_8bit2_rs1,in_8bit2_rs1)
    poke(c.io.in_8bit2_rs2,in_8bit2_rs2)
    poke(c.io.in_16bit_rs1,in_16bit_rs1)
    poke(c.io.in_16bit_rs2,in_16bit_rs2)
    poke(c.io.in_32bit_rs1,in_32bit_rs1)
    poke(c.io.in_32bit_rs2,in_32bit_rs2)
    step(1)
    peek(c.io.out)
  }
}
