// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdAlu.h for the primary calling header

#include "VdAlu.h"             // For This
#include "VdAlu__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VdAlu) {
    VdAlu__Syms* __restrict vlSymsp = __VlSymsp = new VdAlu__Syms(this, name());
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_opcode = VL_RAND_RESET_I(7);
    io_in_8bit1_rs1 = VL_RAND_RESET_I(8);
    io_in_8bit1_rs2 = VL_RAND_RESET_I(8);
    io_in_8bit2_rs1 = VL_RAND_RESET_I(8);
    io_in_8bit2_rs2 = VL_RAND_RESET_I(8);
    io_in_16bit_rs1 = VL_RAND_RESET_I(16);
    io_in_16bit_rs2 = VL_RAND_RESET_I(16);
    io_in_32bit_rs1 = VL_RAND_RESET_I(32);
    io_in_32bit_rs2 = VL_RAND_RESET_I(32);
    io_out = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VdAlu::__Vconfigure(VdAlu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VdAlu::~VdAlu() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VdAlu::eval() {
    VdAlu__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VdAlu::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VdAlu::_eval_initial_loop(VdAlu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VdAlu::_combo__TOP__1(VdAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu::_combo__TOP__1\n"); );
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_out = ((IData)((QData)((IData)((0xffffffU 
					       & ((0xffffU 
						   & ((0xffU 
						       & ((0U 
							   == (IData)(vlTOPp->io_opcode))
							   ? 
							  ((0x1ffU 
							    & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit1_rs1))) 
							   + 
							   (0x1ffU 
							    & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit1_rs2))))
							   : 
							  ((3U 
							    == (IData)(vlTOPp->io_opcode))
							    ? 
							   ((IData)(vlTOPp->io_in_8bit1_rs1) 
							    + (IData)(vlTOPp->io_in_8bit1_rs2))
							    : 0U))) 
						      + 
						      (0xff00U 
						       & (((0U 
							    == (IData)(vlTOPp->io_opcode))
							    ? 
							   ((0x1ffU 
							     & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit2_rs1))) 
							    + 
							    (0x1ffU 
							     & VL_EXTENDS_II(9,8, (IData)(vlTOPp->io_in_8bit2_rs2))))
							    : 
							   ((3U 
							     == (IData)(vlTOPp->io_opcode))
							     ? 
							    ((IData)(vlTOPp->io_in_8bit2_rs1) 
							     + (IData)(vlTOPp->io_in_8bit2_rs2))
							     : 0U)) 
							  << 8U)))) 
						  + 
						  (0xffff00U 
						   & (((0U 
							== (IData)(vlTOPp->io_opcode))
						        ? 
						       ((0x1ffffU 
							 & VL_EXTENDS_II(17,16, (IData)(vlTOPp->io_in_16bit_rs1))) 
							+ 
							(0x1ffffU 
							 & VL_EXTENDS_II(17,16, (IData)(vlTOPp->io_in_16bit_rs2))))
						        : 
						       ((3U 
							 == (IData)(vlTOPp->io_opcode))
							 ? 
							((IData)(vlTOPp->io_in_16bit_rs1) 
							 + (IData)(vlTOPp->io_in_16bit_rs2))
							 : 0U)) 
						      << 8U))))))) 
		      + ((0U == (IData)(vlTOPp->io_opcode))
			  ? ((IData)((VL_ULL(0x1ffffffff) 
				      & VL_EXTENDS_QI(33,32, vlTOPp->io_in_32bit_rs1))) 
			     + (IData)((VL_ULL(0x1ffffffff) 
					& VL_EXTENDS_QI(33,32, vlTOPp->io_in_32bit_rs2))))
			  : ((3U == (IData)(vlTOPp->io_opcode))
			      ? (vlTOPp->io_in_32bit_rs1 
				 + vlTOPp->io_in_32bit_rs2)
			      : 0U)));
}

void VdAlu::_eval(VdAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu::_eval\n"); );
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VdAlu::_eval_initial(VdAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu::_eval_initial\n"); );
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdAlu::final() {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu::final\n"); );
    // Variables
    VdAlu__Syms* __restrict vlSymsp = this->__VlSymsp;
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdAlu::_eval_settle(VdAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu::_eval_settle\n"); );
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VdAlu::_change_request(VdAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu::_change_request\n"); );
    VdAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
