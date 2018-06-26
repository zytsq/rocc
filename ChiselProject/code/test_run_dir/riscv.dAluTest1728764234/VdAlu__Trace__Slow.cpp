// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VdAlu__Syms.h"


//======================

void VdAlu::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VdAlu::traceInit, &VdAlu::traceFull, &VdAlu::traceChg, this);
}
void VdAlu::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VdAlu* t=(VdAlu*)userthis;
    VdAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VdAlu::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VdAlu* t=(VdAlu*)userthis;
    VdAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VdAlu::traceInitThis(VdAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VdAlu::traceFullThis(VdAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VdAlu::traceInitThis__1(VdAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_opcode",-1,6,0);
	vcdp->declBus  (c+4,"io_in_8bit1_rs1",-1,7,0);
	vcdp->declBus  (c+5,"io_in_8bit1_rs2",-1,7,0);
	vcdp->declBus  (c+6,"io_in_8bit2_rs1",-1,7,0);
	vcdp->declBus  (c+7,"io_in_8bit2_rs2",-1,7,0);
	vcdp->declBus  (c+8,"io_in_16bit_rs1",-1,15,0);
	vcdp->declBus  (c+9,"io_in_16bit_rs2",-1,15,0);
	vcdp->declBus  (c+10,"io_in_32bit_rs1",-1,31,0);
	vcdp->declBus  (c+11,"io_in_32bit_rs2",-1,31,0);
	vcdp->declBus  (c+12,"io_out",-1,31,0);
	vcdp->declBit  (c+1,"v clock",-1);
	vcdp->declBit  (c+2,"v reset",-1);
	vcdp->declBus  (c+3,"v io_opcode",-1,6,0);
	vcdp->declBus  (c+4,"v io_in_8bit1_rs1",-1,7,0);
	vcdp->declBus  (c+5,"v io_in_8bit1_rs2",-1,7,0);
	vcdp->declBus  (c+6,"v io_in_8bit2_rs1",-1,7,0);
	vcdp->declBus  (c+7,"v io_in_8bit2_rs2",-1,7,0);
	vcdp->declBus  (c+8,"v io_in_16bit_rs1",-1,15,0);
	vcdp->declBus  (c+9,"v io_in_16bit_rs2",-1,15,0);
	vcdp->declBus  (c+10,"v io_in_32bit_rs1",-1,31,0);
	vcdp->declBus  (c+11,"v io_in_32bit_rs2",-1,31,0);
	vcdp->declBus  (c+12,"v io_out",-1,31,0);
	// Tracing: v _T_23 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:28
	// Tracing: v _T_24 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:29
	// Tracing: v _T_25 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:30
	// Tracing: v _T_26 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:31
	// Tracing: v _T_27 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:32
	// Tracing: v _T_28 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:33
	// Tracing: v _T_29 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:34
	// Tracing: v _T_30 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:35
	// Tracing: v _T_31 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:36
	// Tracing: v _T_32 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:37
	// Tracing: v _T_33 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:38
	vcdp->declBus  (c+13,"v out_8bit1",-1,7,0);
	// Tracing: v _T_35 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:40
	// Tracing: v _T_36 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:41
	// Tracing: v _T_37 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:42
	// Tracing: v _T_38 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:43
	// Tracing: v _T_39 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:44
	// Tracing: v _T_40 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:45
	// Tracing: v _T_41 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:46
	// Tracing: v _T_42 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:47
	// Tracing: v _T_44 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:48
	vcdp->declBus  (c+14,"v out_8bit2",-1,7,0);
	// Tracing: v _T_47 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:50
	// Tracing: v _T_48 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:51
	// Tracing: v _T_49 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:52
	// Tracing: v _T_50 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:53
	// Tracing: v _T_51 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:54
	// Tracing: v _T_52 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:55
	// Tracing: v _T_53 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:56
	// Tracing: v _T_54 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:57
	// Tracing: v _T_56 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:58
	vcdp->declBus  (c+15,"v out_16bit",-1,15,0);
	// Tracing: v _T_59 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:60
	// Tracing: v _T_60 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:61
	// Tracing: v _T_61 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:62
	// Tracing: v _T_62 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:63
	// Tracing: v _T_63 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:64
	// Tracing: v _T_64 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:65
	// Tracing: v _T_65 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:66
	// Tracing: v _T_66 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:67
	// Tracing: v _T_68 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:68
	vcdp->declBus  (c+16,"v out_32bit",-1,31,0);
	// Tracing: v _T_71 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:70
	// Tracing: v _GEN_0 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:71
	// Tracing: v _T_72 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:72
	// Tracing: v _T_73 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:73
	// Tracing: v _T_75 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:74
	// Tracing: v _GEN_1 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:75
	// Tracing: v _T_76 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:76
	// Tracing: v _T_77 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:77
	// Tracing: v _GEN_2 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:78
	// Tracing: v _T_78 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:79
	// Tracing: v _T_79 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu.v:80
    }
}

void VdAlu::traceFullThis__1(VdAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_opcode),7);
	vcdp->fullBus  (c+4,(vlTOPp->io_in_8bit1_rs1),8);
	vcdp->fullBus  (c+5,(vlTOPp->io_in_8bit1_rs2),8);
	vcdp->fullBus  (c+6,(vlTOPp->io_in_8bit2_rs1),8);
	vcdp->fullBus  (c+7,(vlTOPp->io_in_8bit2_rs2),8);
	vcdp->fullBus  (c+8,(vlTOPp->io_in_16bit_rs1),16);
	vcdp->fullBus  (c+9,(vlTOPp->io_in_16bit_rs2),16);
	vcdp->fullBus  (c+10,(vlTOPp->io_in_32bit_rs1),32);
	vcdp->fullBus  (c+11,(vlTOPp->io_in_32bit_rs2),32);
	vcdp->fullBus  (c+12,(vlTOPp->io_out),32);
	vcdp->fullBus  (c+13,((0xffU & ((0U == (IData)(vlTOPp->io_opcode))
					 ? ((0x1ffU 
					     & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit1_rs1))) 
					    + (0x1ffU 
					       & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit1_rs2))))
					 : ((3U == (IData)(vlTOPp->io_opcode))
					     ? ((IData)(vlTOPp->io_in_8bit1_rs1) 
						+ (IData)(vlTOPp->io_in_8bit1_rs2))
					     : 0U)))),8);
	vcdp->fullBus  (c+14,((0xffU & ((0U == (IData)(vlTOPp->io_opcode))
					 ? ((0x1ffU 
					     & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit2_rs1))) 
					    + (0x1ffU 
					       & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit2_rs2))))
					 : ((3U == (IData)(vlTOPp->io_opcode))
					     ? ((IData)(vlTOPp->io_in_8bit2_rs1) 
						+ (IData)(vlTOPp->io_in_8bit2_rs2))
					     : 0U)))),8);
	vcdp->fullBus  (c+15,((0xffffU & ((0U == (IData)(vlTOPp->io_opcode))
					   ? ((0x1ffffU 
					       & VL_EXTENDS_II(17,16, (IData)(vlTOPp->io_in_16bit_rs1))) 
					      + (0x1ffffU 
						 & VL_EXTENDS_II(17,16, (IData)(vlTOPp->io_in_16bit_rs2))))
					   : ((3U == (IData)(vlTOPp->io_opcode))
					       ? ((IData)(vlTOPp->io_in_16bit_rs1) 
						  + (IData)(vlTOPp->io_in_16bit_rs2))
					       : 0U)))),16);
	vcdp->fullBus  (c+16,(((0U == (IData)(vlTOPp->io_opcode))
			        ? ((IData)((VL_ULL(0x1ffffffff) 
					    & VL_EXTENDS_QI(33,32, vlTOPp->io_in_32bit_rs1))) 
				   + (IData)((VL_ULL(0x1ffffffff) 
					      & VL_EXTENDS_QI(33,32, vlTOPp->io_in_32bit_rs2))))
			        : ((3U == (IData)(vlTOPp->io_opcode))
				    ? (vlTOPp->io_in_32bit_rs1 
				       + vlTOPp->io_in_32bit_rs2)
				    : 0U))),32);
    }
}
