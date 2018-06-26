package riscv

import chisel3._
import chisel3.util._

object opcode_id {
val uni_code_id	=0.U(7.W)
val c_xxx	=0.U(2.W)
val c_8bit	=1.U(2.W)
val c_16bit	=2.U(2.W)
val c_32bit	=3.U(2.W)
}

import opcode_id._

class D_io extends Bundle {
// cmd contrl signal 
val func	=Input(UInt(7.W))
val xd		=Input(Bool())
val xs1		=Input(Bool())
val xs2		=Input(Bool())
val opcode	=Input(UInt(7.W))
// contrl signal output
val ctrl_out	=Output(UInt(2.W))
}

class decode extends Module {
val io=IO(new D_io)

io.ctrl_out	:=c_xxx
when (io.xd && io.xs1 && io.xs2 && io.opcode === uni_code_id){
when (io.func.asUInt > 0.U && io.func.asUInt <16.U){
io.ctrl_out	:=c_8bit
}
when (io.func.asUInt > 15.U && io.func.asUInt <32.U){
io.ctrl_out	:=c_16bit
}
when (io.func.asUInt > 31.U && io.func.asUInt <48.U){
io.ctrl_out	:=c_32bit
}
}
}
