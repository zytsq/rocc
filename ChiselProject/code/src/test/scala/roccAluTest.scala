
package riscv

import chisel3._
import chisel3.iotesters.{PeekPokeTester, Driver, ChiselFlatSpec}

object roccAluTest extends App {
  iotesters.Driver.execute(args, () => new RoccAlu) {
    c => new roccAluTester(c)
  }
}

class roccAluTester(c: RoccAlu) extends PeekPokeTester(c) {

  val func 	= 0.U(7.W)
  val opcode	= 0.U(7.W)
  val data_rs1	= "h01020304".U(32.W)
  val data_rs2	= "h01020304".U(32.W)
    poke(c.io.func, func)
    poke(c.io.opcode,opcode)
    poke(c.io.data_rs1,data_rs1)
    poke(c.io.data_rs2,data_rs2)
    step(1)
    peek(c.io.out)
  
}
