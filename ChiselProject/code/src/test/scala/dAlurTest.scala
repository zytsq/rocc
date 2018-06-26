
package riscv

import chisel3._
import chisel3.iotesters.{PeekPokeTester, Driver, ChiselFlatSpec}

object dAlurTest extends App {
  iotesters.Driver.execute(args, () => new dAlu_r) {
    c => new dAlurTester(c)
  }
}

class dAlurTester(c: dAlu_r) extends PeekPokeTester(c) {

  val s 	= UInt(2.W)
  val data_rs1	= "h01020304".U
  val data_rs2	= "h01020304".U
  for (s <- 0 until 4) {
    poke(c.io.ctrl_signal, s)
    poke(c.io.data_rs1,data_rs1)
    poke(c.io.data_rs2,data_rs2)
    step(1)
    peek(c.io.out_8bit1_rs1)
    peek(c.io.out_8bit1_rs2)
    peek(c.io.out_8bit2_rs1)
    peek(c.io.out_8bit2_rs2)
    peek(c.io.out_16bit_rs1)
    peek(c.io.out_16bit_rs2)
    peek(c.io.out_32bit_rs1)
    peek(c.io.out_32bit_rs2)
  }
}
