// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VdAlu_r__Syms.h"


//======================

void VdAlu_r::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VdAlu_r::traceInit, &VdAlu_r::traceFull, &VdAlu_r::traceChg, this);
}
void VdAlu_r::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VdAlu_r* t=(VdAlu_r*)userthis;
    VdAlu_r__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VdAlu_r::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VdAlu_r* t=(VdAlu_r*)userthis;
    VdAlu_r__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VdAlu_r::traceInitThis(VdAlu_r__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VdAlu_r::traceFullThis(VdAlu_r__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VdAlu_r::traceInitThis__1(VdAlu_r__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_data_rs1",-1,31,0);
	vcdp->declBus  (c+4,"io_data_rs2",-1,31,0);
	vcdp->declBus  (c+5,"io_ctrl_signal",-1,1,0);
	vcdp->declBus  (c+6,"io_out_8bit1_rs1",-1,7,0);
	vcdp->declBus  (c+7,"io_out_8bit1_rs2",-1,7,0);
	vcdp->declBus  (c+8,"io_out_8bit2_rs1",-1,7,0);
	vcdp->declBus  (c+9,"io_out_8bit2_rs2",-1,7,0);
	vcdp->declBus  (c+10,"io_out_16bit_rs1",-1,15,0);
	vcdp->declBus  (c+11,"io_out_16bit_rs2",-1,15,0);
	vcdp->declBus  (c+12,"io_out_32bit_rs1",-1,31,0);
	vcdp->declBus  (c+13,"io_out_32bit_rs2",-1,31,0);
	vcdp->declBit  (c+1,"v clock",-1);
	vcdp->declBit  (c+2,"v reset",-1);
	vcdp->declBus  (c+3,"v io_data_rs1",-1,31,0);
	vcdp->declBus  (c+4,"v io_data_rs2",-1,31,0);
	vcdp->declBus  (c+5,"v io_ctrl_signal",-1,1,0);
	vcdp->declBus  (c+6,"v io_out_8bit1_rs1",-1,7,0);
	vcdp->declBus  (c+7,"v io_out_8bit1_rs2",-1,7,0);
	vcdp->declBus  (c+8,"v io_out_8bit2_rs1",-1,7,0);
	vcdp->declBus  (c+9,"v io_out_8bit2_rs2",-1,7,0);
	vcdp->declBus  (c+10,"v io_out_16bit_rs1",-1,15,0);
	vcdp->declBus  (c+11,"v io_out_16bit_rs2",-1,15,0);
	vcdp->declBus  (c+12,"v io_out_32bit_rs1",-1,31,0);
	vcdp->declBus  (c+13,"v io_out_32bit_rs2",-1,31,0);
	// Tracing: v _T_26 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:29
	// Tracing: v _T_27 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:30
	// Tracing: v _T_28 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:31
	// Tracing: v _T_29 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:32
	// Tracing: v _T_30 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:33
	// Tracing: v _T_31 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:34
	// Tracing: v _T_33 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:35
	// Tracing: v _T_34 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:36
	// Tracing: v _T_36 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:37
	// Tracing: v _T_37 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:38
	// Tracing: v _T_39 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:39
	// Tracing: v _T_40 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:40
	// Tracing: v _T_42 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:41
	// Tracing: v _GEN_0 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:42
	// Tracing: v _GEN_1 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:43
	// Tracing: v _GEN_2 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:44
	// Tracing: v _GEN_3 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:45
	// Tracing: v _GEN_4 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:46
	// Tracing: v _GEN_5 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:47
	// Tracing: v _GEN_6 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:48
	// Tracing: v _GEN_7 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:49
	// Tracing: v _T_43 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:50
	// Tracing: v _T_44 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:51
	// Tracing: v _T_45 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:52
	// Tracing: v _T_46 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:53
	// Tracing: v _T_48 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:54
	// Tracing: v _T_49 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:55
	// Tracing: v _T_51 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:56
	// Tracing: v _GEN_8 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:57
	// Tracing: v _GEN_9 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:58
	// Tracing: v _GEN_10 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:59
	// Tracing: v _GEN_11 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:60
	// Tracing: v _T_52 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:61
	// Tracing: v _GEN_12 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:62
	// Tracing: v _GEN_13 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dAluTest1728764234/dAlu_r.v:63
    }
}

void VdAlu_r::traceFullThis__1(VdAlu_r__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_data_rs1),32);
	vcdp->fullBus  (c+4,(vlTOPp->io_data_rs2),32);
	vcdp->fullBus  (c+5,(vlTOPp->io_ctrl_signal),2);
	vcdp->fullBus  (c+6,(vlTOPp->io_out_8bit1_rs1),8);
	vcdp->fullBus  (c+7,(vlTOPp->io_out_8bit1_rs2),8);
	vcdp->fullBus  (c+8,(vlTOPp->io_out_8bit2_rs1),8);
	vcdp->fullBus  (c+9,(vlTOPp->io_out_8bit2_rs2),8);
	vcdp->fullBus  (c+10,(vlTOPp->io_out_16bit_rs1),16);
	vcdp->fullBus  (c+11,(vlTOPp->io_out_16bit_rs2),16);
	vcdp->fullBus  (c+12,(vlTOPp->io_out_32bit_rs1),32);
	vcdp->fullBus  (c+13,(vlTOPp->io_out_32bit_rs2),32);
    }
}
