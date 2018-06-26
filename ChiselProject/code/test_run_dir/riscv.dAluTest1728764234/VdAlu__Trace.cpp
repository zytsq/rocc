// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VdAlu__Syms.h"


//======================

void VdAlu::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VdAlu* t=(VdAlu*)userthis;
    VdAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VdAlu::traceChgThis(VdAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VdAlu::traceChgThis__2(VdAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBus  (c+3,(vlTOPp->io_opcode),7);
	vcdp->chgBus  (c+4,(vlTOPp->io_in_8bit1_rs1),8);
	vcdp->chgBus  (c+5,(vlTOPp->io_in_8bit1_rs2),8);
	vcdp->chgBus  (c+6,(vlTOPp->io_in_8bit2_rs1),8);
	vcdp->chgBus  (c+7,(vlTOPp->io_in_8bit2_rs2),8);
	vcdp->chgBus  (c+8,(vlTOPp->io_in_16bit_rs1),16);
	vcdp->chgBus  (c+9,(vlTOPp->io_in_16bit_rs2),16);
	vcdp->chgBus  (c+10,(vlTOPp->io_in_32bit_rs1),32);
	vcdp->chgBus  (c+11,(vlTOPp->io_in_32bit_rs2),32);
	vcdp->chgBus  (c+12,(vlTOPp->io_out),32);
	vcdp->chgBus  (c+13,((0xffU & ((0U == (IData)(vlTOPp->io_opcode))
				        ? ((0x1ffU 
					    & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit1_rs1))) 
					   + (0x1ffU 
					      & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit1_rs2))))
				        : ((3U == (IData)(vlTOPp->io_opcode))
					    ? ((IData)(vlTOPp->io_in_8bit1_rs1) 
					       + (IData)(vlTOPp->io_in_8bit1_rs2))
					    : 0U)))),8);
	vcdp->chgBus  (c+14,((0xffU & ((0U == (IData)(vlTOPp->io_opcode))
				        ? ((0x1ffU 
					    & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit2_rs1))) 
					   + (0x1ffU 
					      & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit2_rs2))))
				        : ((3U == (IData)(vlTOPp->io_opcode))
					    ? ((IData)(vlTOPp->io_in_8bit2_rs1) 
					       + (IData)(vlTOPp->io_in_8bit2_rs2))
					    : 0U)))),8);
	vcdp->chgBus  (c+15,((0xffffU & ((0U == (IData)(vlTOPp->io_opcode))
					  ? ((0x1ffffU 
					      & VL_EXTENDS_II(17,16, (IData)(vlTOPp->io_in_16bit_rs1))) 
					     + (0x1ffffU 
						& VL_EXTENDS_II(17,16, (IData)(vlTOPp->io_in_16bit_rs2))))
					  : ((3U == (IData)(vlTOPp->io_opcode))
					      ? ((IData)(vlTOPp->io_in_16bit_rs1) 
						 + (IData)(vlTOPp->io_in_16bit_rs2))
					      : 0U)))),16);
	vcdp->chgBus  (c+16,(((0U == (IData)(vlTOPp->io_opcode))
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
