// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode.h for the primary calling header

#include "Vdecode.h"           // For This
#include "Vdecode__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vdecode) {
    Vdecode__Syms* __restrict vlSymsp = __VlSymsp = new Vdecode__Syms(this, name());
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_func = VL_RAND_RESET_I(7);
    io_xd = VL_RAND_RESET_I(1);
    io_xs1 = VL_RAND_RESET_I(1);
    io_xs2 = VL_RAND_RESET_I(1);
    io_opcode = VL_RAND_RESET_I(7);
    io_ctrl_out = VL_RAND_RESET_I(2);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void Vdecode::__Vconfigure(Vdecode__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vdecode::~Vdecode() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vdecode::eval() {
    Vdecode__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vdecode::eval\n"); );
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

void Vdecode::_eval_initial_loop(Vdecode__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void Vdecode::_combo__TOP__1(Vdecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode::_combo__TOP__1\n"); );
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_ctrl_out = (((((IData)(vlTOPp->io_xd) 
			      & (IData)(vlTOPp->io_xs1)) 
			     & (IData)(vlTOPp->io_xs2)) 
			    & (0U == (IData)(vlTOPp->io_opcode)))
			    ? (((0x1fU < (IData)(vlTOPp->io_func)) 
				& (0x30U > (IData)(vlTOPp->io_func)))
			        ? 3U : (((0xfU < (IData)(vlTOPp->io_func)) 
					 & (0x20U > (IData)(vlTOPp->io_func)))
					 ? 2U : (((0U 
						   < (IData)(vlTOPp->io_func)) 
						  & (0x10U 
						     > (IData)(vlTOPp->io_func)))
						  ? 1U
						  : 0U)))
			    : 0U);
}

void Vdecode::_eval(Vdecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode::_eval\n"); );
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vdecode::_eval_initial(Vdecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode::_eval_initial\n"); );
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdecode::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode::final\n"); );
    // Variables
    Vdecode__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vdecode::_eval_settle(Vdecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode::_eval_settle\n"); );
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vdecode::_change_request(Vdecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vdecode::_change_request\n"); );
    Vdecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
