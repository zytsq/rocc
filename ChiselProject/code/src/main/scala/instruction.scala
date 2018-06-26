package riscv

import chisel3._

object instruction{
val SADD8	=0.U(7.W)
val QADD8	=1.U(7.W)
val SHADD8	=2.U(7.W)
val UADD8	=3.U(7.W)
val UQADD8	=4.U(7.W)
val UHADD8	=5.U(7.W)
val QADD	=6.U(7.W)
val QDADD	=7.U(7.W)
val QSUB	=8.U(7.W)
val QDSUB	=9.U(7.W)
}

