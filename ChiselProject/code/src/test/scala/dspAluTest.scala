
package riscv

import chisel3._
import chisel3.iotesters.{PeekPokeTester, Driver, ChiselFlatSpec}

object dspAluTest extends App {
  iotesters.Driver.execute(args, () => new dspAlu) {
    c => new dspAluTester(c)
  }
}

class dspAluTester(c: dspAlu) extends PeekPokeTester(c) {
val s			=UInt(7.W)
val in_rs1		="h807F01FF".U
val in_rs2		="h807FFFFF".U
  for (s <- 0 until 9) {
    poke(c.io.opcode,s)
    poke(c.io.in_rs1,in_rs1)
    poke(c.io.in_rs2,in_rs2)
    step(1)
    step(1)
    peek(c.io.out)
  }
}
