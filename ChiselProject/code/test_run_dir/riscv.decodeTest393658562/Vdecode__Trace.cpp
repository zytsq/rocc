// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdecode__Syms.h"


//======================

void Vdecode::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vdecode* t=(Vdecode*)userthis;
    Vdecode__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vdecode::traceChgThis(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vdecode::traceChgThis__2(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBus  (c+3,(vlTOPp->io_func),7);
	vcdp->chgBit  (c+4,(vlTOPp->io_xd));
	vcdp->chgBit  (c+5,(vlTOPp->io_xs1));
	vcdp->chgBit  (c+6,(vlTOPp->io_xs2));
	vcdp->chgBus  (c+7,(vlTOPp->io_opcode),7);
	vcdp->chgBus  (c+8,(vlTOPp->io_ctrl_out),2);
    }
}
