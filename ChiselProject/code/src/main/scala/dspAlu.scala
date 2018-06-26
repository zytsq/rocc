package riscv

import chisel3._
import chisel3.util._
import riscv.instruction._

class io_Alu extends Bundle {
val opcode	=Input(UInt(7.W))

val in_rs1	=Input(UInt(32.W))
val in_rs2	=Input(UInt(32.W))

val out		=Output(UInt(32.W))
}

class dspAlu extends Module {
val io		=IO(new io_Alu)
val rs1_7d0	=Cat(0.U(1.W),io.in_rs1(7,0))
val rs2_7d0	=Cat(0.U(1.W),io.in_rs2(7,0))
val rs1_15d8	=Cat(0.U(1.W),io.in_rs1(15,8))
val rs2_15d8	=Cat(0.U(1.W),io.in_rs2(15,8))
val rs1_23d16	=Cat(0.U(1.W),io.in_rs1(23,16))
val rs2_23d16	=Cat(0.U(1.W),io.in_rs2(23,16))
val rs1_31d24	=Cat(0.U(1.W),io.in_rs1(31,24))
val rs2_31d24	=Cat(0.U(1.W),io.in_rs2(31,24))
//val rs1_32d0	=Cat(0.U(1.W),io.in_rs1)
//val rs2_32d0	=Cat(0.U(1.W),io.in_rs2)
val add1	=MuxLookup(io.opcode,0.U(9.W),Seq(
			SADD8	-> (rs1_7d0.asSInt+rs2_7d0.asSInt).asUInt,
			QADD8	-> (rs1_7d0+rs2_7d0),
			SHADD8	-> (rs1_7d0.asSInt+rs2_7d0.asSInt).asUInt,
			UADD8	-> (rs1_7d0+rs2_7d0),
			UQADD8	-> (rs1_7d0+rs2_7d0),
			UHADD8	-> (rs1_7d0+rs2_7d0)
//			QADD	->
//			QDADD	->
//			QSUB	->
//			QDSUB	->
		))
val add2	=MuxLookup(io.opcode,0.U(17.W),Seq(
			SADD8	-> Cat((rs1_15d8.asSInt+rs2_15d8.asSInt).asUInt,0.U(8.W)),
			QADD8	-> Cat(rs1_15d8+rs2_15d8,0.U(8.W)),
			SHADD8	-> Cat((rs1_15d8.asSInt+rs2_15d8.asSInt).asUInt,0.U(8.W)),
			UADD8	-> Cat(rs1_15d8+rs2_15d8,0.U(8.W)),
			UQADD8	-> Cat(rs1_15d8+rs2_15d8,0.U(8.W)),
			UHADD8	-> Cat(rs1_15d8+rs2_15d8,0.U(8.W))
//			QADD	->
//			QDADD	->
//			QSUB	->
//			QDSUB	->
		))

val add3	=MuxLookup(io.opcode,0.U(25.W),Seq(
			SADD8	-> Cat((rs1_23d16.asSInt+rs2_23d16.asSInt).asUInt,0.U(16.W)),
			QADD8	-> Cat(rs1_23d16+rs2_23d16,0.U(16.W)),
			SHADD8	-> Cat((rs1_23d16.asSInt+rs2_23d16.asSInt).asUInt,0.U(16.W)),
			UADD8	-> Cat(rs1_23d16+rs2_23d16,0.U(16.W)),
			UQADD8	-> Cat(rs1_23d16+rs2_23d16,0.U(16.W)),
			UHADD8	-> Cat(rs1_23d16+rs2_23d16,0.U(16.W))
//			QADD	->
//			QDADD	->
//			QSUB	->
//			QDSUB	->
		))
val add4	=MuxLookup(io.opcode,0.U(33.W),Seq(
			SADD8	-> Cat((rs1_31d24.asSInt+rs2_31d24.asSInt).asUInt,0.U(24.W)),
			QADD8	-> Cat(rs1_31d24+rs2_31d24,0.U(24.W)),
			SHADD8	-> Cat((rs1_31d24.asSInt+rs2_31d24.asSInt).asUInt,0.U(24.W)),
			UADD8	-> Cat(rs1_31d24+rs2_31d24,0.U(24.W)),
			UQADD8	-> Cat(rs1_31d24+rs2_31d24,0.U(24.W)),
			UHADD8	-> Cat(rs1_31d24+rs2_31d24,0.U(24.W))
//			QADD	->
//			QDADD	->
//			QSUB	->
//			QDSUB	->
		))
val add1_r	=Reg(init=0.U(9.W))
when (io.opcode === QADD8) {
when (io.in_rs1(7) === io.in_rs2(7) && add1(7) =/= io.in_rs1(7)){
when (io.in_rs1(7) === 0.U){add1_r:="b001111111".U}
.otherwise{add1_r:="b010000000".U}
}
}
.elsewhen (io.opcode === UQADD8) {
when (add1(8) === 1.U){add1_r:=Cat(0.U(1.W),"hFF".U)}
}
.otherwise{add1_r:=add1}
val add2_r	=Reg(init=0.U(17.W))
when (io.opcode === QADD8) {
when (io.in_rs1(15) === io.in_rs2(15) && add2(15) =/= io.in_rs1(15)){
when (io.in_rs1(15) === 0.U){add2_r:=Cat(0.U(1.W),"h7F00".U)}
.otherwise{add2_r:=Cat(0.U(1.W),"h8000".U)}
}
}
.elsewhen (io.opcode === UQADD8) {
when (add2(16) === 1.U){add2_r:=Cat(0.U(1.W),"hFF00".U)}
}
.otherwise{add2_r:=add2}
val add3_r	=Reg(init=0.U(25.W))
when (io.opcode === QADD8) {
when (io.in_rs1(23) === io.in_rs2(23) && add3(23) =/= io.in_rs1(23)){
when (io.in_rs1(23) === 0.U){add3_r:=Cat(0.U(1.W),"h7F0000".U)}
.otherwise{add3_r:=Cat(0.U(1.W),"h800000".U)}
}
}
.elsewhen (io.opcode === UQADD8) {
when (add3(24) === 1.U){add3_r:=Cat(0.U(1.W),"hFF0000".U)}
}
.otherwise{add3_r:=add3}
val add4_r	=Reg(init=0.U(33.W))
when (io.opcode === QADD8) {
when (io.in_rs1(31) === io.in_rs2(31) && add4(31) =/= io.in_rs1(31)){
when (io.in_rs1(31) === 0.U){add4_r:=Cat(0.U(1.W),"h7F000000".U)}
.otherwise{add4_r:=Cat(0.U(1.W),"h80000000".U)}
}
}
.elsewhen (io.opcode === UQADD8) {
when (add4(32) === 1.U){add4_r:=Cat(0.U(1.W),"hFF000000".U)}
}
.otherwise{add4_r:=add4}
io.out			:=MuxLookup(io.opcode,0.U(33.W),Seq(
			SADD8	-> Cat(add4(31,24),add3(23,16),add2(15,8),add1(7,0)),
			QADD8	-> Cat(add4_r(31,24),add3_r(23,16),add2_r(15,8),add1_r(7,0)),
			SHADD8	-> Cat(add4(32,25),add3(24,17),add2(16,9),add1(8,1)),
			UADD8	-> Cat(add4(31,24),add3(23,16),add2(15,8),add1(7,0)),
			UQADD8	-> Cat(add4_r(31,24),add3_r(23,16),add2_r(15,8),add1_r(7,0)),
			UHADD8	-> Cat(add4(32,25),add3(24,17),add2(16,9),add1(8,1))
//			QADD	-> (rs1_32d0+rs2_32d0).
//			QDADD	->
//			QSUB	->
//			QDSUB	->
		))
}

