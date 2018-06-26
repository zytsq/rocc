// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAlu__Syms.h"


//======================

void VAlu::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAlu* t=(VAlu*)userthis;
    VAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAlu::traceChgThis(VAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAlu::traceChgThis__2(VAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBus  (c+3,(vlTOPp->io_A),32);
	vcdp->chgBus  (c+4,(vlTOPp->io_B),32);
	vcdp->chgBus  (c+5,(vlTOPp->io_Op),4);
	vcdp->chgBus  (c+6,(vlTOPp->io_Out),32);
	vcdp->chgBus  (c+7,(vlTOPp->io_Sum),32);
	vcdp->chgBus  (c+8,((0x1fU & vlTOPp->io_B)),5);
    }
}
