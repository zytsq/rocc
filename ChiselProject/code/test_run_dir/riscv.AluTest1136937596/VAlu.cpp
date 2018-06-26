// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAlu.h for the primary calling header

#include "VAlu.h"              // For This
#include "VAlu__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VAlu) {
    VAlu__Syms* __restrict vlSymsp = __VlSymsp = new VAlu__Syms(this, name());
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_A = VL_RAND_RESET_I(32);
    io_B = VL_RAND_RESET_I(32);
    io_Op = VL_RAND_RESET_I(4);
    io_Out = VL_RAND_RESET_I(32);
    io_Sum = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VAlu::__Vconfigure(VAlu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VAlu::~VAlu() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VAlu::eval() {
    VAlu__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VAlu::eval\n"); );
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

void VAlu::_eval_initial_loop(VAlu__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VAlu::_combo__TOP__1(VAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAlu::_combo__TOP__1\n"); );
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_Out = (IData)((VL_ULL(0x7fffffffffffffff) 
			      & ((0U == (IData)(vlTOPp->io_Op))
				  ? (QData)((IData)(
						    (vlTOPp->io_A 
						     + vlTOPp->io_B)))
				  : ((1U == (IData)(vlTOPp->io_Op))
				      ? (QData)((IData)(
							(vlTOPp->io_A 
							 - vlTOPp->io_B)))
				      : ((2U == (IData)(vlTOPp->io_Op))
					  ? (QData)((IData)(
							    (vlTOPp->io_A 
							     & vlTOPp->io_B)))
					  : ((3U == (IData)(vlTOPp->io_Op))
					      ? (QData)((IData)(
								(vlTOPp->io_A 
								 | vlTOPp->io_B)))
					      : ((4U 
						  == (IData)(vlTOPp->io_Op))
						  ? (QData)((IData)(
								    (vlTOPp->io_A 
								     ^ vlTOPp->io_B)))
						  : 
						 ((5U 
						   == (IData)(vlTOPp->io_Op))
						   ? (QData)((IData)(
								     VL_LTS_III(1,32,32, vlTOPp->io_A, vlTOPp->io_B)))
						   : 
						  ((6U 
						    == (IData)(vlTOPp->io_Op))
						    ? 
						   ((QData)((IData)(vlTOPp->io_A)) 
						    << 
						    (0x1fU 
						     & vlTOPp->io_B))
						    : (QData)((IData)(
								      ((7U 
									== (IData)(vlTOPp->io_Op))
								        ? 
								       (vlTOPp->io_A 
									< vlTOPp->io_B)
								        : 
								       ((8U 
									 == (IData)(vlTOPp->io_Op))
									 ? 
									(vlTOPp->io_A 
									 >> 
									 (0x1fU 
									  & vlTOPp->io_B))
									 : 
									((9U 
									  == (IData)(vlTOPp->io_Op))
									  ? 
									 VL_SHIFTRS_III(32,32,5, vlTOPp->io_A, 
										(0x1fU 
										& vlTOPp->io_B))
									  : 
									 ((0xaU 
									   == (IData)(vlTOPp->io_Op))
									   ? vlTOPp->io_A
									   : vlTOPp->io_B)))))))))))))));
    vlTOPp->io_Sum = (vlTOPp->io_A + ((1U & (IData)(vlTOPp->io_Op))
				       ? (IData)((VL_ULL(0x1ffffffff) 
						  & VL_NEGATE_Q((QData)((IData)(vlTOPp->io_B)))))
				       : vlTOPp->io_B));
}

void VAlu::_eval(VAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAlu::_eval\n"); );
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VAlu::_eval_initial(VAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAlu::_eval_initial\n"); );
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAlu::final() {
    VL_DEBUG_IF(VL_PRINTF("    VAlu::final\n"); );
    // Variables
    VAlu__Syms* __restrict vlSymsp = this->__VlSymsp;
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VAlu::_eval_settle(VAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAlu::_eval_settle\n"); );
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VAlu::_change_request(VAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VAlu::_change_request\n"); );
    VAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
