package riscv

import chisel3._
import chisel3.util._

object Alu_Op {
  val ALU_ADD    = 0.U(4.W)
  val ALU_SUB    = 1.U(4.W)
  val ALU_AND    = 2.U(4.W)
  val ALU_OR     = 3.U(4.W)
  val ALU_XOR    = 4.U(4.W)
  val ALU_SLT    = 5.U(4.W)
  val ALU_SLL    = 6.U(4.W)
  val ALU_SLTU   = 7.U(4.W)
  val ALU_SRL    = 8.U(4.W)
  val ALU_SRA    = 9.U(4.W)
  val ALU_COPY_A = 10.U(4.W)
  val ALU_COPY_B = 11.U(4.W)
  val ALU_XXX    = 15.U(4.W)
}

class AluIO extends Bundle {
  val A = Input(UInt(32.W))
  val B = Input(UInt(32.W))
  val Op = Input(UInt(4.W))
  val Out = Output(UInt(32.W))
  val Sum = Output(UInt(32.W))
}

import Alu_Op._

class Alu extends Module {
  val io = IO(new AluIO)
  val shamt = io.B(4,0).asUInt

  io.Out := MuxLookup(io.Op, io.B, Seq(
      ALU_ADD  -> (io.A + io.B),
      ALU_SUB  -> (io.A - io.B),
      ALU_AND  -> (io.A & io.B),
      ALU_OR   -> (io.A | io.B),
      ALU_XOR  -> (io.A ^ io.B),
      ALU_SLT  -> (io.A.asSInt < io.B.asSInt),
      ALU_SLL  -> (io.A << shamt),
      ALU_SLTU -> (io.A < io.B),
      ALU_SRL  -> (io.A >> shamt),
      ALU_SRA  -> (io.A.asSInt >> shamt).asUInt,
      ALU_COPY_A -> io.A,
      ALU_COPY_B -> io.B))
  io.Sum := io.A + Mux(io.Op(0),-io.B, io.B)
}

