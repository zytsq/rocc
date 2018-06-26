// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VdAlu_r__Syms.h"


//======================

void VdAlu_r::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VdAlu_r* t=(VdAlu_r*)userthis;
    VdAlu_r__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VdAlu_r::traceChgThis(VdAlu_r__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VdAlu_r::traceChgThis__2(VdAlu_r__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBus  (c+3,(vlTOPp->io_data_rs1),32);
	vcdp->chgBus  (c+4,(vlTOPp->io_data_rs2),32);
	vcdp->chgBus  (c+5,(vlTOPp->io_ctrl_signal),2);
	vcdp->chgBus  (c+6,(vlTOPp->io_out_8bit1_rs1),8);
	vcdp->chgBus  (c+7,(vlTOPp->io_out_8bit1_rs2),8);
	vcdp->chgBus  (c+8,(vlTOPp->io_out_8bit2_rs1),8);
	vcdp->chgBus  (c+9,(vlTOPp->io_out_8bit2_rs2),8);
	vcdp->chgBus  (c+10,(vlTOPp->io_out_16bit_rs1),16);
	vcdp->chgBus  (c+11,(vlTOPp->io_out_16bit_rs2),16);
	vcdp->chgBus  (c+12,(vlTOPp->io_out_32bit_rs1),32);
	vcdp->chgBus  (c+13,(vlTOPp->io_out_32bit_rs2),32);
    }
}
