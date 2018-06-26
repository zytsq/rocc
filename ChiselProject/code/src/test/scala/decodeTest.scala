
package riscv

import chisel3._
import chisel3.iotesters.{PeekPokeTester, Driver, ChiselFlatSpec}

object decodeTest extends App {
  iotesters.Driver.execute(args, () => new decode) {
    c => new decodeTester(c)
  }
}

class decodeTester(c: decode) extends PeekPokeTester(c) {

  val s 	= UInt(7.W)
  val opcode	= 0.U(7.W)
  val xd	= true.B
  val xs1	= true.B
  val xs2	= true.B
  for (s <- 0 until 50) {
    poke(c.io.func, s)
    poke(c.io.opcode,opcode)
    poke(c.io.xd,xd)
    poke(c.io.xs1,xs1)
    poke(c.io.xs2,xs2)
    step(1)
    peek(c.io.ctrl_out)
  }
}
