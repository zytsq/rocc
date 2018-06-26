// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VdspAlu__Syms.h"


//======================

void VdspAlu::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VdspAlu* t=(VdspAlu*)userthis;
    VdspAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VdspAlu::traceChgThis(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VdspAlu::traceChgThis__2(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->v__DOT__add1),9);
	vcdp->chgBus  (c+2,(vlTOPp->v__DOT__add2),17);
	vcdp->chgBus  (c+3,(vlTOPp->v__DOT__add3),25);
	vcdp->chgQuad (c+4,(vlTOPp->v__DOT__add4),33);
    }
}

void VdspAlu::traceChgThis__3(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+6,(vlTOPp->v__DOT__add1_r),9);
	vcdp->chgBus  (c+7,(vlTOPp->v__DOT__add2_r),17);
	vcdp->chgBus  (c+8,(vlTOPp->v__DOT__add3_r),25);
	vcdp->chgQuad (c+9,(vlTOPp->v__DOT__add4_r),33);
    }
}

void VdspAlu::traceChgThis__4(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+11,(vlTOPp->clock));
	vcdp->chgBit  (c+12,(vlTOPp->reset));
	vcdp->chgBus  (c+13,(vlTOPp->io_opcode),7);
	vcdp->chgBus  (c+14,(vlTOPp->io_in_rs1),32);
	vcdp->chgBus  (c+15,(vlTOPp->io_in_rs2),32);
	vcdp->chgBus  (c+16,(vlTOPp->io_out),32);
	vcdp->chgBus  (c+17,((0xffU & vlTOPp->io_in_rs1)),9);
	vcdp->chgBus  (c+18,((0xffU & vlTOPp->io_in_rs2)),9);
	vcdp->chgBus  (c+19,((0xffU & (vlTOPp->io_in_rs1 
				       >> 8U))),9);
	vcdp->chgBus  (c+20,((0xffU & (vlTOPp->io_in_rs2 
				       >> 8U))),9);
	vcdp->chgBus  (c+21,((0xffU & (vlTOPp->io_in_rs1 
				       >> 0x10U))),9);
	vcdp->chgBus  (c+22,((0xffU & (vlTOPp->io_in_rs2 
				       >> 0x10U))),9);
	vcdp->chgBus  (c+23,((0xffU & (vlTOPp->io_in_rs1 
				       >> 0x18U))),9);
	vcdp->chgBus  (c+24,((0xffU & (vlTOPp->io_in_rs2 
				       >> 0x18U))),9);
    }
}
