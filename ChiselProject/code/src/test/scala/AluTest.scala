
package riscv

import chisel3._
import chisel3.iotesters.{PeekPokeTester, Driver, ChiselFlatSpec}

object AluTest extends App {
  iotesters.Driver.execute(args, () => new Alu) {
    c => new AluTester(c)
  }
}

class AluTester(c: Alu) extends PeekPokeTester(c) {
  val s = UInt(4.W)
  val A = "h1".U(32.W)
  val B = "h1".U(32.W)
  for (s <- 0 until 11) {
    poke(c.io.A, A)
    poke(c.io.B, B)
    poke(c.io.Op,s)
    step(1)
    peek(c.io.Out)
    peek(c.io.Sum)
  }
}
