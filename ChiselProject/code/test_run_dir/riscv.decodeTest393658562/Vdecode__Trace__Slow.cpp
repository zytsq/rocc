// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode__Syms.h"


//======================

void Vdecode::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vdecode::traceInit, &Vdecode::traceFull, &Vdecode::traceChg, this);
}
void Vdecode::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vdecode* t=(Vdecode*)userthis;
    Vdecode__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vdecode::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vdecode* t=(Vdecode*)userthis;
    Vdecode__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vdecode::traceInitThis(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vdecode::traceFullThis(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vdecode::traceInitThis__1(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_func",-1,6,0);
	vcdp->declBit  (c+4,"io_xd",-1);
	vcdp->declBit  (c+5,"io_xs1",-1);
	vcdp->declBit  (c+6,"io_xs2",-1);
	vcdp->declBus  (c+7,"io_opcode",-1,6,0);
	vcdp->declBus  (c+8,"io_ctrl_out",-1,1,0);
	vcdp->declBit  (c+1,"v clock",-1);
	vcdp->declBit  (c+2,"v reset",-1);
	vcdp->declBus  (c+3,"v io_func",-1,6,0);
	vcdp->declBit  (c+4,"v io_xd",-1);
	vcdp->declBit  (c+5,"v io_xs1",-1);
	vcdp->declBit  (c+6,"v io_xs2",-1);
	vcdp->declBus  (c+7,"v io_opcode",-1,6,0);
	vcdp->declBus  (c+8,"v io_ctrl_out",-1,1,0);
	// Tracing: v _T_13 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:24
	// Tracing: v _T_14 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:25
	// Tracing: v _T_15 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:26
	// Tracing: v _T_16 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:27
	// Tracing: v _T_18 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:28
	// Tracing: v _T_20 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:29
	// Tracing: v _T_21 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:30
	// Tracing: v _GEN_0 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:31
	// Tracing: v _T_23 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:32
	// Tracing: v _T_25 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:33
	// Tracing: v _T_26 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:34
	// Tracing: v _GEN_1 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:35
	// Tracing: v _T_28 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:36
	// Tracing: v _T_30 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:37
	// Tracing: v _T_31 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:38
	// Tracing: v _GEN_2 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:39
	// Tracing: v _GEN_3 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.decodeTest393658562/decode.v:40
    }
}

void Vdecode::traceFullThis__1(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_func),7);
	vcdp->fullBit  (c+4,(vlTOPp->io_xd));
	vcdp->fullBit  (c+5,(vlTOPp->io_xs1));
	vcdp->fullBit  (c+6,(vlTOPp->io_xs2));
	vcdp->fullBus  (c+7,(vlTOPp->io_opcode),7);
	vcdp->fullBus  (c+8,(vlTOPp->io_ctrl_out),2);
    }
}
