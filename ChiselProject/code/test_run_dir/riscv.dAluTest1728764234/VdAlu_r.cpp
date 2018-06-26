// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdAlu_r.h for the primary calling header

#include "VdAlu_r.h"           // For This
#include "VdAlu_r__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VdAlu_r) {
    VdAlu_r__Syms* __restrict vlSymsp = __VlSymsp = new VdAlu_r__Syms(this, name());
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_data_rs1 = VL_RAND_RESET_I(32);
    io_data_rs2 = VL_RAND_RESET_I(32);
    io_ctrl_signal = VL_RAND_RESET_I(2);
    io_out_8bit1_rs1 = VL_RAND_RESET_I(8);
    io_out_8bit1_rs2 = VL_RAND_RESET_I(8);
    io_out_8bit2_rs1 = VL_RAND_RESET_I(8);
    io_out_8bit2_rs2 = VL_RAND_RESET_I(8);
    io_out_16bit_rs1 = VL_RAND_RESET_I(16);
    io_out_16bit_rs2 = VL_RAND_RESET_I(16);
    io_out_32bit_rs1 = VL_RAND_RESET_I(32);
    io_out_32bit_rs2 = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VdAlu_r::__Vconfigure(VdAlu_r__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VdAlu_r::~VdAlu_r() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VdAlu_r::eval() {
    VdAlu_r__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VdAlu_r::eval\n"); );
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

void VdAlu_r::_eval_initial_loop(VdAlu_r__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VdAlu_r::_combo__TOP__1(VdAlu_r__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu_r::_combo__TOP__1\n"); );
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_out_8bit1_rs1 = (0xffU & ((1U == (IData)(vlTOPp->io_ctrl_signal))
					  ? vlTOPp->io_data_rs1
					  : 0U));
    vlTOPp->io_out_8bit1_rs2 = (0xffU & ((1U == (IData)(vlTOPp->io_ctrl_signal))
					  ? vlTOPp->io_data_rs2
					  : 0U));
    vlTOPp->io_out_8bit2_rs1 = (0xffU & ((1U == (IData)(vlTOPp->io_ctrl_signal))
					  ? (vlTOPp->io_data_rs1 
					     >> 8U)
					  : 0U));
    vlTOPp->io_out_8bit2_rs2 = (0xffU & ((1U == (IData)(vlTOPp->io_ctrl_signal))
					  ? (vlTOPp->io_data_rs2 
					     >> 8U)
					  : 0U));
    vlTOPp->io_out_16bit_rs1 = (0xffffU & ((2U == (IData)(vlTOPp->io_ctrl_signal))
					    ? vlTOPp->io_data_rs1
					    : ((1U 
						== (IData)(vlTOPp->io_ctrl_signal))
					        ? (0xff00U 
						   & (vlTOPp->io_data_rs1 
						      >> 8U))
					        : 0U)));
    vlTOPp->io_out_16bit_rs2 = (0xffffU & ((2U == (IData)(vlTOPp->io_ctrl_signal))
					    ? vlTOPp->io_data_rs2
					    : ((1U 
						== (IData)(vlTOPp->io_ctrl_signal))
					        ? (0xff00U 
						   & (vlTOPp->io_data_rs2 
						      >> 8U))
					        : 0U)));
    vlTOPp->io_out_32bit_rs1 = ((3U == (IData)(vlTOPp->io_ctrl_signal))
				 ? vlTOPp->io_data_rs1
				 : ((2U == (IData)(vlTOPp->io_ctrl_signal))
				     ? (0xffff0000U 
					& vlTOPp->io_data_rs1)
				     : ((1U == (IData)(vlTOPp->io_ctrl_signal))
					 ? (0xff000000U 
					    & vlTOPp->io_data_rs1)
					 : 0U)));
    vlTOPp->io_out_32bit_rs2 = ((3U == (IData)(vlTOPp->io_ctrl_signal))
				 ? vlTOPp->io_data_rs1
				 : ((2U == (IData)(vlTOPp->io_ctrl_signal))
				     ? (0xffff0000U 
					& vlTOPp->io_data_rs2)
				     : ((1U == (IData)(vlTOPp->io_ctrl_signal))
					 ? (0xff000000U 
					    & vlTOPp->io_data_rs2)
					 : 0U)));
}

void VdAlu_r::_eval(VdAlu_r__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu_r::_eval\n"); );
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VdAlu_r::_eval_initial(VdAlu_r__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu_r::_eval_initial\n"); );
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdAlu_r::final() {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu_r::final\n"); );
    // Variables
    VdAlu_r__Syms* __restrict vlSymsp = this->__VlSymsp;
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdAlu_r::_eval_settle(VdAlu_r__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu_r::_eval_settle\n"); );
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VdAlu_r::_change_request(VdAlu_r__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdAlu_r::_change_request\n"); );
    VdAlu_r* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
