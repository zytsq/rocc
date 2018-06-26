// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAlu__Syms.h"


//======================

void VAlu::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAlu::traceInit, &VAlu::traceFull, &VAlu::traceChg, this);
}
void VAlu::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAlu* t=(VAlu*)userthis;
    VAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAlu::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAlu* t=(VAlu*)userthis;
    VAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAlu::traceInitThis(VAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAlu::traceFullThis(VAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAlu::traceInitThis__1(VAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_A",-1,31,0);
	vcdp->declBus  (c+4,"io_B",-1,31,0);
	vcdp->declBus  (c+5,"io_Op",-1,3,0);
	vcdp->declBus  (c+6,"io_Out",-1,31,0);
	vcdp->declBus  (c+7,"io_Sum",-1,31,0);
	vcdp->declBit  (c+1,"v clock",-1);
	vcdp->declBit  (c+2,"v reset",-1);
	vcdp->declBus  (c+3,"v io_A",-1,31,0);
	vcdp->declBus  (c+4,"v io_B",-1,31,0);
	vcdp->declBus  (c+5,"v io_Op",-1,3,0);
	vcdp->declBus  (c+6,"v io_Out",-1,31,0);
	vcdp->declBus  (c+7,"v io_Sum",-1,31,0);
	vcdp->declBus  (c+8,"v shamt",-1,4,0);
	// Tracing: v _T_20 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:24
	// Tracing: v _T_21 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:25
	// Tracing: v _T_22 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:26
	// Tracing: v _T_23 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:27
	// Tracing: v _T_24 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:28
	// Tracing: v _T_25 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:29
	// Tracing: v _T_26 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:30
	// Tracing: v _T_27 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:31
	// Tracing: v _T_28 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:32
	// Tracing: v _T_29 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:33
	// Tracing: v _T_30 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:34
	// Tracing: v _GEN_0 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:35
	// Tracing: v _T_31 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:36
	// Tracing: v _T_32 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:37
	// Tracing: v _T_33 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:38
	// Tracing: v _T_35 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:39
	// Tracing: v _T_36 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:40
	// Tracing: v _T_39 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:41
	// Tracing: v _T_40 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:42
	// Tracing: v _T_41 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:43
	// Tracing: v _T_42 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:44
	// Tracing: v _T_43 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:45
	// Tracing: v _T_44 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:46
	// Tracing: v _T_45 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:47
	// Tracing: v _T_46 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:48
	// Tracing: v _T_47 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:49
	// Tracing: v _T_48 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:50
	// Tracing: v _T_49 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:51
	// Tracing: v _T_50 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:52
	// Tracing: v _T_51 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:53
	// Tracing: v _T_52 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:54
	// Tracing: v _T_53 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:55
	// Tracing: v _T_54 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:56
	// Tracing: v _T_55 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:57
	// Tracing: v _T_56 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:58
	// Tracing: v _T_57 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:59
	// Tracing: v _T_58 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:60
	// Tracing: v _T_59 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:61
	// Tracing: v _T_60 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:62
	// Tracing: v _T_61 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:63
	// Tracing: v _T_63 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:64
	// Tracing: v _T_64 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:65
	// Tracing: v _T_65 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:66
	// Tracing: v _T_66 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:67
	// Tracing: v _T_67 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:68
	// Tracing: v _T_68 // Ignored: Inlined leading underscore at /root/ChiselProject/DSPProject/test_run_dir/riscv.AluTest1136937596/Alu.v:69
    }
}

void VAlu::traceFullThis__1(VAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_A),32);
	vcdp->fullBus  (c+4,(vlTOPp->io_B),32);
	vcdp->fullBus  (c+5,(vlTOPp->io_Op),4);
	vcdp->fullBus  (c+6,(vlTOPp->io_Out),32);
	vcdp->fullBus  (c+7,(vlTOPp->io_Sum),32);
	vcdp->fullBus  (c+8,((0x1fU & vlTOPp->io_B)),5);
    }
}
