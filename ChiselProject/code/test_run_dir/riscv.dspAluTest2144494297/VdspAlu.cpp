// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VdspAlu.h for the primary calling header

#include "VdspAlu.h"           // For This
#include "VdspAlu__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VdspAlu) {
    VdspAlu__Syms* __restrict vlSymsp = __VlSymsp = new VdspAlu__Syms(this, name());
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_opcode = VL_RAND_RESET_I(7);
    io_in_rs1 = VL_RAND_RESET_I(32);
    io_in_rs2 = VL_RAND_RESET_I(32);
    io_out = VL_RAND_RESET_I(32);
    v__DOT__add1_r = VL_RAND_RESET_I(9);
    v__DOT__add2_r = VL_RAND_RESET_I(17);
    v__DOT__add3_r = VL_RAND_RESET_I(25);
    v__DOT__add4_r = VL_RAND_RESET_Q(33);
    v__DOT___T_35 = VL_RAND_RESET_I(10);
    v__DOT___T_39 = VL_RAND_RESET_I(10);
    v__DOT__add1 = VL_RAND_RESET_I(9);
    v__DOT___T_67 = VL_RAND_RESET_I(10);
    v__DOT___T_73 = VL_RAND_RESET_I(10);
    v__DOT__add2 = VL_RAND_RESET_I(17);
    v__DOT___T_111 = VL_RAND_RESET_I(10);
    v__DOT___T_117 = VL_RAND_RESET_I(10);
    v__DOT__add3 = VL_RAND_RESET_I(25);
    v__DOT___T_155 = VL_RAND_RESET_I(10);
    v__DOT___T_161 = VL_RAND_RESET_I(10);
    v__DOT__add4 = VL_RAND_RESET_Q(33);
    v__DOT___T_205 = VL_RAND_RESET_I(1);
    v__DOT___T_227 = VL_RAND_RESET_I(1);
    v__DOT___T_253 = VL_RAND_RESET_I(1);
    v__DOT___T_279 = VL_RAND_RESET_I(1);
    v__DOT___T_303 = VL_RAND_RESET_I(32);
    v__DOT___T_310 = VL_RAND_RESET_I(32);
    v__DOT___T_317 = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VdspAlu::__Vconfigure(VdspAlu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VdspAlu::~VdspAlu() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VdspAlu::eval() {
    VdspAlu__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VdspAlu::eval\n"); );
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

void VdspAlu::_eval_initial_loop(VdspAlu__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VdspAlu::_sequent__TOP__1(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_sequent__TOP__1\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:385
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__add1_r = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->io_opcode))) {
	    if (vlTOPp->v__DOT___T_205) {
		vlTOPp->v__DOT__add1_r = ((0x80U & vlTOPp->io_in_rs1)
					   ? 0x80U : 0x7fU);
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->io_opcode))) {
		if ((0x100U & (IData)(vlTOPp->v__DOT__add1))) {
		    vlTOPp->v__DOT__add1_r = 0xffU;
		}
	    } else {
		vlTOPp->v__DOT__add1_r = (0x1ffU & 
					  ((0U == (IData)(vlTOPp->io_opcode))
					    ? (IData)(vlTOPp->v__DOT___T_35)
					    : ((1U 
						== (IData)(vlTOPp->io_opcode))
					        ? (IData)(vlTOPp->v__DOT___T_39)
					        : (
						   (2U 
						    == (IData)(vlTOPp->io_opcode))
						    ? (IData)(vlTOPp->v__DOT___T_35)
						    : 
						   ((3U 
						     == (IData)(vlTOPp->io_opcode))
						     ? (IData)(vlTOPp->v__DOT___T_39)
						     : 
						    ((4U 
						      == (IData)(vlTOPp->io_opcode))
						      ? (IData)(vlTOPp->v__DOT___T_39)
						      : 
						     ((5U 
						       == (IData)(vlTOPp->io_opcode))
						       ? (IData)(vlTOPp->v__DOT___T_39)
						       : 0U)))))));
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__add2_r = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->io_opcode))) {
	    if (vlTOPp->v__DOT___T_227) {
		vlTOPp->v__DOT__add2_r = ((0x8000U 
					   & vlTOPp->io_in_rs1)
					   ? 0x8000U
					   : 0x7f00U);
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->io_opcode))) {
		if ((0x10000U & vlTOPp->v__DOT__add2)) {
		    vlTOPp->v__DOT__add2_r = 0xff00U;
		}
	    } else {
		vlTOPp->v__DOT__add2_r = ((0U == (IData)(vlTOPp->io_opcode))
					   ? (0x1ff00U 
					      & ((IData)(vlTOPp->v__DOT___T_67) 
						 << 8U))
					   : ((1U == (IData)(vlTOPp->io_opcode))
					       ? (0x1ff00U 
						  & ((IData)(vlTOPp->v__DOT___T_73) 
						     << 8U))
					       : ((2U 
						   == (IData)(vlTOPp->io_opcode))
						   ? 
						  (0x1ff00U 
						   & ((IData)(vlTOPp->v__DOT___T_67) 
						      << 8U))
						   : 
						  ((3U 
						    == (IData)(vlTOPp->io_opcode))
						    ? 
						   (0x1ff00U 
						    & ((IData)(vlTOPp->v__DOT___T_73) 
						       << 8U))
						    : 
						   ((4U 
						     == (IData)(vlTOPp->io_opcode))
						     ? 
						    (0x1ff00U 
						     & ((IData)(vlTOPp->v__DOT___T_73) 
							<< 8U))
						     : 
						    ((5U 
						      == (IData)(vlTOPp->io_opcode))
						      ? 
						     (0x1ff00U 
						      & ((IData)(vlTOPp->v__DOT___T_73) 
							 << 8U))
						      : 0U))))));
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__add3_r = 0U;
    } else {
	if ((1U == (IData)(vlTOPp->io_opcode))) {
	    if (vlTOPp->v__DOT___T_253) {
		vlTOPp->v__DOT__add3_r = ((0x800000U 
					   & vlTOPp->io_in_rs1)
					   ? 0x800000U
					   : 0x7f0000U);
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->io_opcode))) {
		if ((0x1000000U & vlTOPp->v__DOT__add3)) {
		    vlTOPp->v__DOT__add3_r = 0xff0000U;
		}
	    } else {
		vlTOPp->v__DOT__add3_r = ((0U == (IData)(vlTOPp->io_opcode))
					   ? (0x1ff0000U 
					      & ((IData)(vlTOPp->v__DOT___T_111) 
						 << 0x10U))
					   : ((1U == (IData)(vlTOPp->io_opcode))
					       ? (0x1ff0000U 
						  & ((IData)(vlTOPp->v__DOT___T_117) 
						     << 0x10U))
					       : ((2U 
						   == (IData)(vlTOPp->io_opcode))
						   ? 
						  (0x1ff0000U 
						   & ((IData)(vlTOPp->v__DOT___T_111) 
						      << 0x10U))
						   : 
						  ((3U 
						    == (IData)(vlTOPp->io_opcode))
						    ? 
						   (0x1ff0000U 
						    & ((IData)(vlTOPp->v__DOT___T_117) 
						       << 0x10U))
						    : 
						   ((4U 
						     == (IData)(vlTOPp->io_opcode))
						     ? 
						    (0x1ff0000U 
						     & ((IData)(vlTOPp->v__DOT___T_117) 
							<< 0x10U))
						     : 
						    ((5U 
						      == (IData)(vlTOPp->io_opcode))
						      ? 
						     (0x1ff0000U 
						      & ((IData)(vlTOPp->v__DOT___T_117) 
							 << 0x10U))
						      : 0U))))));
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->v__DOT__add4_r = VL_ULL(0);
    } else {
	if ((1U == (IData)(vlTOPp->io_opcode))) {
	    if (vlTOPp->v__DOT___T_279) {
		vlTOPp->v__DOT__add4_r = ((0x80000000U 
					   & vlTOPp->io_in_rs1)
					   ? VL_ULL(0x80000000)
					   : VL_ULL(0x7f000000));
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->io_opcode))) {
		if ((1U & (IData)((vlTOPp->v__DOT__add4 
				   >> 0x20U)))) {
		    vlTOPp->v__DOT__add4_r = VL_ULL(0xff000000);
		}
	    } else {
		vlTOPp->v__DOT__add4_r = ((0U == (IData)(vlTOPp->io_opcode))
					   ? ((QData)((IData)(
							      (0x1ffU 
							       & (IData)(vlTOPp->v__DOT___T_155)))) 
					      << 0x18U)
					   : ((1U == (IData)(vlTOPp->io_opcode))
					       ? ((QData)((IData)(
								  (0x1ffU 
								   & (IData)(vlTOPp->v__DOT___T_161)))) 
						  << 0x18U)
					       : ((2U 
						   == (IData)(vlTOPp->io_opcode))
						   ? 
						  ((QData)((IData)(
								   (0x1ffU 
								    & (IData)(vlTOPp->v__DOT___T_155)))) 
						   << 0x18U)
						   : 
						  ((3U 
						    == (IData)(vlTOPp->io_opcode))
						    ? 
						   ((QData)((IData)(
								    (0x1ffU 
								     & (IData)(vlTOPp->v__DOT___T_161)))) 
						    << 0x18U)
						    : 
						   ((4U 
						     == (IData)(vlTOPp->io_opcode))
						     ? 
						    ((QData)((IData)(
								     (0x1ffU 
								      & (IData)(vlTOPp->v__DOT___T_161)))) 
						     << 0x18U)
						     : 
						    ((5U 
						      == (IData)(vlTOPp->io_opcode))
						      ? 
						     ((QData)((IData)(
								      (0x1ffU 
								       & (IData)(vlTOPp->v__DOT___T_161)))) 
						      << 0x18U)
						      : VL_ULL(0)))))));
	    }
	}
    }
    vlTOPp->v__DOT___T_310 = (((0xff000000U & ((IData)(
						       (vlTOPp->v__DOT__add4_r 
							>> 0x18U)) 
					       << 0x18U)) 
			       | (0xff0000U & vlTOPp->v__DOT__add3_r)) 
			      | ((0xff00U & vlTOPp->v__DOT__add2_r) 
				 | (0xffU & (IData)(vlTOPp->v__DOT__add1_r))));
}

VL_INLINE_OPT void VdspAlu::_combo__TOP__2(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_combo__TOP__2\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT___T_35 = (0x3ffU & (VL_EXTENDS_II(10,9, 
						     (0xffU 
						      & vlTOPp->io_in_rs1)) 
				       + VL_EXTENDS_II(10,9, 
						       (0xffU 
							& vlTOPp->io_in_rs2))));
    vlTOPp->v__DOT___T_39 = (0x3ffU & ((0xffU & vlTOPp->io_in_rs1) 
				       + (0xffU & vlTOPp->io_in_rs2)));
    vlTOPp->v__DOT___T_67 = (0x3ffU & (VL_EXTENDS_II(10,9, 
						     (0xffU 
						      & (vlTOPp->io_in_rs1 
							 >> 8U))) 
				       + VL_EXTENDS_II(10,9, 
						       (0xffU 
							& (vlTOPp->io_in_rs2 
							   >> 8U)))));
    vlTOPp->v__DOT___T_73 = (0x3ffU & ((0xffU & (vlTOPp->io_in_rs1 
						 >> 8U)) 
				       + (0xffU & (vlTOPp->io_in_rs2 
						   >> 8U))));
    vlTOPp->v__DOT___T_111 = (0x3ffU & (VL_EXTENDS_II(10,9, 
						      (0xffU 
						       & (vlTOPp->io_in_rs1 
							  >> 0x10U))) 
					+ VL_EXTENDS_II(10,9, 
							(0xffU 
							 & (vlTOPp->io_in_rs2 
							    >> 0x10U)))));
    vlTOPp->v__DOT___T_117 = (0x3ffU & ((0xffU & (vlTOPp->io_in_rs1 
						  >> 0x10U)) 
					+ (0xffU & 
					   (vlTOPp->io_in_rs2 
					    >> 0x10U))));
    vlTOPp->v__DOT___T_155 = (0x3ffU & (VL_EXTENDS_II(10,9, 
						      (0xffU 
						       & (vlTOPp->io_in_rs1 
							  >> 0x18U))) 
					+ VL_EXTENDS_II(10,9, 
							(0xffU 
							 & (vlTOPp->io_in_rs2 
							    >> 0x18U)))));
    vlTOPp->v__DOT___T_161 = (0x3ffU & ((0xffU & (vlTOPp->io_in_rs1 
						  >> 0x18U)) 
					+ (0xffU & 
					   (vlTOPp->io_in_rs2 
					    >> 0x18U))));
}

void VdspAlu::_settle__TOP__3(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_settle__TOP__3\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT___T_35 = (0x3ffU & (VL_EXTENDS_II(10,9, 
						     (0xffU 
						      & vlTOPp->io_in_rs1)) 
				       + VL_EXTENDS_II(10,9, 
						       (0xffU 
							& vlTOPp->io_in_rs2))));
    vlTOPp->v__DOT___T_39 = (0x3ffU & ((0xffU & vlTOPp->io_in_rs1) 
				       + (0xffU & vlTOPp->io_in_rs2)));
    vlTOPp->v__DOT___T_67 = (0x3ffU & (VL_EXTENDS_II(10,9, 
						     (0xffU 
						      & (vlTOPp->io_in_rs1 
							 >> 8U))) 
				       + VL_EXTENDS_II(10,9, 
						       (0xffU 
							& (vlTOPp->io_in_rs2 
							   >> 8U)))));
    vlTOPp->v__DOT___T_73 = (0x3ffU & ((0xffU & (vlTOPp->io_in_rs1 
						 >> 8U)) 
				       + (0xffU & (vlTOPp->io_in_rs2 
						   >> 8U))));
    vlTOPp->v__DOT___T_111 = (0x3ffU & (VL_EXTENDS_II(10,9, 
						      (0xffU 
						       & (vlTOPp->io_in_rs1 
							  >> 0x10U))) 
					+ VL_EXTENDS_II(10,9, 
							(0xffU 
							 & (vlTOPp->io_in_rs2 
							    >> 0x10U)))));
    vlTOPp->v__DOT___T_117 = (0x3ffU & ((0xffU & (vlTOPp->io_in_rs1 
						  >> 0x10U)) 
					+ (0xffU & 
					   (vlTOPp->io_in_rs2 
					    >> 0x10U))));
    vlTOPp->v__DOT___T_155 = (0x3ffU & (VL_EXTENDS_II(10,9, 
						      (0xffU 
						       & (vlTOPp->io_in_rs1 
							  >> 0x18U))) 
					+ VL_EXTENDS_II(10,9, 
							(0xffU 
							 & (vlTOPp->io_in_rs2 
							    >> 0x18U)))));
    vlTOPp->v__DOT___T_161 = (0x3ffU & ((0xffU & (vlTOPp->io_in_rs1 
						  >> 0x18U)) 
					+ (0xffU & 
					   (vlTOPp->io_in_rs2 
					    >> 0x18U))));
    vlTOPp->v__DOT___T_310 = (((0xff000000U & ((IData)(
						       (vlTOPp->v__DOT__add4_r 
							>> 0x18U)) 
					       << 0x18U)) 
			       | (0xff0000U & vlTOPp->v__DOT__add3_r)) 
			      | ((0xff00U & vlTOPp->v__DOT__add2_r) 
				 | (0xffU & (IData)(vlTOPp->v__DOT__add1_r))));
    vlTOPp->v__DOT__add1 = (0x1ffU & ((0U == (IData)(vlTOPp->io_opcode))
				       ? (IData)(vlTOPp->v__DOT___T_35)
				       : ((1U == (IData)(vlTOPp->io_opcode))
					   ? (IData)(vlTOPp->v__DOT___T_39)
					   : ((2U == (IData)(vlTOPp->io_opcode))
					       ? (IData)(vlTOPp->v__DOT___T_35)
					       : ((3U 
						   == (IData)(vlTOPp->io_opcode))
						   ? (IData)(vlTOPp->v__DOT___T_39)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->io_opcode))
						    ? (IData)(vlTOPp->v__DOT___T_39)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->io_opcode))
						     ? (IData)(vlTOPp->v__DOT___T_39)
						     : 0U)))))));
    vlTOPp->v__DOT__add2 = ((0U == (IData)(vlTOPp->io_opcode))
			     ? (0x1ff00U & ((IData)(vlTOPp->v__DOT___T_67) 
					    << 8U))
			     : ((1U == (IData)(vlTOPp->io_opcode))
				 ? (0x1ff00U & ((IData)(vlTOPp->v__DOT___T_73) 
						<< 8U))
				 : ((2U == (IData)(vlTOPp->io_opcode))
				     ? (0x1ff00U & 
					((IData)(vlTOPp->v__DOT___T_67) 
					 << 8U)) : 
				    ((3U == (IData)(vlTOPp->io_opcode))
				      ? (0x1ff00U & 
					 ((IData)(vlTOPp->v__DOT___T_73) 
					  << 8U)) : 
				     ((4U == (IData)(vlTOPp->io_opcode))
				       ? (0x1ff00U 
					  & ((IData)(vlTOPp->v__DOT___T_73) 
					     << 8U))
				       : ((5U == (IData)(vlTOPp->io_opcode))
					   ? (0x1ff00U 
					      & ((IData)(vlTOPp->v__DOT___T_73) 
						 << 8U))
					   : 0U))))));
    vlTOPp->v__DOT__add3 = ((0U == (IData)(vlTOPp->io_opcode))
			     ? (0x1ff0000U & ((IData)(vlTOPp->v__DOT___T_111) 
					      << 0x10U))
			     : ((1U == (IData)(vlTOPp->io_opcode))
				 ? (0x1ff0000U & ((IData)(vlTOPp->v__DOT___T_117) 
						  << 0x10U))
				 : ((2U == (IData)(vlTOPp->io_opcode))
				     ? (0x1ff0000U 
					& ((IData)(vlTOPp->v__DOT___T_111) 
					   << 0x10U))
				     : ((3U == (IData)(vlTOPp->io_opcode))
					 ? (0x1ff0000U 
					    & ((IData)(vlTOPp->v__DOT___T_117) 
					       << 0x10U))
					 : ((4U == (IData)(vlTOPp->io_opcode))
					     ? (0x1ff0000U 
						& ((IData)(vlTOPp->v__DOT___T_117) 
						   << 0x10U))
					     : ((5U 
						 == (IData)(vlTOPp->io_opcode))
						 ? 
						(0x1ff0000U 
						 & ((IData)(vlTOPp->v__DOT___T_117) 
						    << 0x10U))
						 : 0U))))));
    vlTOPp->v__DOT__add4 = ((0U == (IData)(vlTOPp->io_opcode))
			     ? ((QData)((IData)((0x1ffU 
						 & (IData)(vlTOPp->v__DOT___T_155)))) 
				<< 0x18U) : ((1U == (IData)(vlTOPp->io_opcode))
					      ? ((QData)((IData)(
								 (0x1ffU 
								  & (IData)(vlTOPp->v__DOT___T_161)))) 
						 << 0x18U)
					      : ((2U 
						  == (IData)(vlTOPp->io_opcode))
						  ? 
						 ((QData)((IData)(
								  (0x1ffU 
								   & (IData)(vlTOPp->v__DOT___T_155)))) 
						  << 0x18U)
						  : 
						 ((3U 
						   == (IData)(vlTOPp->io_opcode))
						   ? 
						  ((QData)((IData)(
								   (0x1ffU 
								    & (IData)(vlTOPp->v__DOT___T_161)))) 
						   << 0x18U)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->io_opcode))
						    ? 
						   ((QData)((IData)(
								    (0x1ffU 
								     & (IData)(vlTOPp->v__DOT___T_161)))) 
						    << 0x18U)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->io_opcode))
						     ? 
						    ((QData)((IData)(
								     (0x1ffU 
								      & (IData)(vlTOPp->v__DOT___T_161)))) 
						     << 0x18U)
						     : VL_ULL(0)))))));
}

VL_INLINE_OPT void VdspAlu::_combo__TOP__4(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_combo__TOP__4\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__add1 = (0x1ffU & ((0U == (IData)(vlTOPp->io_opcode))
				       ? (IData)(vlTOPp->v__DOT___T_35)
				       : ((1U == (IData)(vlTOPp->io_opcode))
					   ? (IData)(vlTOPp->v__DOT___T_39)
					   : ((2U == (IData)(vlTOPp->io_opcode))
					       ? (IData)(vlTOPp->v__DOT___T_35)
					       : ((3U 
						   == (IData)(vlTOPp->io_opcode))
						   ? (IData)(vlTOPp->v__DOT___T_39)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->io_opcode))
						    ? (IData)(vlTOPp->v__DOT___T_39)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->io_opcode))
						     ? (IData)(vlTOPp->v__DOT___T_39)
						     : 0U)))))));
    vlTOPp->v__DOT__add2 = ((0U == (IData)(vlTOPp->io_opcode))
			     ? (0x1ff00U & ((IData)(vlTOPp->v__DOT___T_67) 
					    << 8U))
			     : ((1U == (IData)(vlTOPp->io_opcode))
				 ? (0x1ff00U & ((IData)(vlTOPp->v__DOT___T_73) 
						<< 8U))
				 : ((2U == (IData)(vlTOPp->io_opcode))
				     ? (0x1ff00U & 
					((IData)(vlTOPp->v__DOT___T_67) 
					 << 8U)) : 
				    ((3U == (IData)(vlTOPp->io_opcode))
				      ? (0x1ff00U & 
					 ((IData)(vlTOPp->v__DOT___T_73) 
					  << 8U)) : 
				     ((4U == (IData)(vlTOPp->io_opcode))
				       ? (0x1ff00U 
					  & ((IData)(vlTOPp->v__DOT___T_73) 
					     << 8U))
				       : ((5U == (IData)(vlTOPp->io_opcode))
					   ? (0x1ff00U 
					      & ((IData)(vlTOPp->v__DOT___T_73) 
						 << 8U))
					   : 0U))))));
    vlTOPp->v__DOT__add3 = ((0U == (IData)(vlTOPp->io_opcode))
			     ? (0x1ff0000U & ((IData)(vlTOPp->v__DOT___T_111) 
					      << 0x10U))
			     : ((1U == (IData)(vlTOPp->io_opcode))
				 ? (0x1ff0000U & ((IData)(vlTOPp->v__DOT___T_117) 
						  << 0x10U))
				 : ((2U == (IData)(vlTOPp->io_opcode))
				     ? (0x1ff0000U 
					& ((IData)(vlTOPp->v__DOT___T_111) 
					   << 0x10U))
				     : ((3U == (IData)(vlTOPp->io_opcode))
					 ? (0x1ff0000U 
					    & ((IData)(vlTOPp->v__DOT___T_117) 
					       << 0x10U))
					 : ((4U == (IData)(vlTOPp->io_opcode))
					     ? (0x1ff0000U 
						& ((IData)(vlTOPp->v__DOT___T_117) 
						   << 0x10U))
					     : ((5U 
						 == (IData)(vlTOPp->io_opcode))
						 ? 
						(0x1ff0000U 
						 & ((IData)(vlTOPp->v__DOT___T_117) 
						    << 0x10U))
						 : 0U))))));
    vlTOPp->v__DOT__add4 = ((0U == (IData)(vlTOPp->io_opcode))
			     ? ((QData)((IData)((0x1ffU 
						 & (IData)(vlTOPp->v__DOT___T_155)))) 
				<< 0x18U) : ((1U == (IData)(vlTOPp->io_opcode))
					      ? ((QData)((IData)(
								 (0x1ffU 
								  & (IData)(vlTOPp->v__DOT___T_161)))) 
						 << 0x18U)
					      : ((2U 
						  == (IData)(vlTOPp->io_opcode))
						  ? 
						 ((QData)((IData)(
								  (0x1ffU 
								   & (IData)(vlTOPp->v__DOT___T_155)))) 
						  << 0x18U)
						  : 
						 ((3U 
						   == (IData)(vlTOPp->io_opcode))
						   ? 
						  ((QData)((IData)(
								   (0x1ffU 
								    & (IData)(vlTOPp->v__DOT___T_161)))) 
						   << 0x18U)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->io_opcode))
						    ? 
						   ((QData)((IData)(
								    (0x1ffU 
								     & (IData)(vlTOPp->v__DOT___T_161)))) 
						    << 0x18U)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->io_opcode))
						     ? 
						    ((QData)((IData)(
								     (0x1ffU 
								      & (IData)(vlTOPp->v__DOT___T_161)))) 
						     << 0x18U)
						     : VL_ULL(0)))))));
    vlTOPp->v__DOT___T_205 = (((1U & (vlTOPp->io_in_rs1 
				      >> 7U)) == (1U 
						  & (vlTOPp->io_in_rs2 
						     >> 7U))) 
			      & ((1U & ((IData)(vlTOPp->v__DOT__add1) 
					>> 7U)) != 
				 (1U & (vlTOPp->io_in_rs1 
					>> 7U))));
    vlTOPp->v__DOT___T_227 = (((1U & (vlTOPp->io_in_rs1 
				      >> 0xfU)) == 
			       (1U & (vlTOPp->io_in_rs2 
				      >> 0xfU))) & 
			      ((1U & (vlTOPp->v__DOT__add2 
				      >> 0xfU)) != 
			       (1U & (vlTOPp->io_in_rs1 
				      >> 0xfU))));
    vlTOPp->v__DOT___T_253 = (((1U & (vlTOPp->io_in_rs1 
				      >> 0x17U)) == 
			       (1U & (vlTOPp->io_in_rs2 
				      >> 0x17U))) & 
			      ((1U & (vlTOPp->v__DOT__add3 
				      >> 0x17U)) != 
			       (1U & (vlTOPp->io_in_rs1 
				      >> 0x17U))));
    vlTOPp->v__DOT___T_279 = (((1U & (vlTOPp->io_in_rs1 
				      >> 0x1fU)) == 
			       (1U & (vlTOPp->io_in_rs2 
				      >> 0x1fU))) & 
			      ((1U & (IData)((vlTOPp->v__DOT__add4 
					      >> 0x1fU))) 
			       != (1U & (vlTOPp->io_in_rs1 
					 >> 0x1fU))));
    vlTOPp->v__DOT___T_303 = (((0xff000000U & ((IData)(
						       (vlTOPp->v__DOT__add4 
							>> 0x18U)) 
					       << 0x18U)) 
			       | (0xff0000U & vlTOPp->v__DOT__add3)) 
			      | ((0xff00U & vlTOPp->v__DOT__add2) 
				 | (0xffU & (IData)(vlTOPp->v__DOT__add1))));
    vlTOPp->v__DOT___T_317 = (((0xff000000U & ((IData)(
						       (vlTOPp->v__DOT__add4 
							>> 0x19U)) 
					       << 0x18U)) 
			       | (0xff0000U & (vlTOPp->v__DOT__add3 
					       >> 1U))) 
			      | ((0xff00U & (vlTOPp->v__DOT__add2 
					     >> 1U)) 
				 | (0xffU & ((IData)(vlTOPp->v__DOT__add1) 
					     >> 1U))));
}

void VdspAlu::_settle__TOP__5(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_settle__TOP__5\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT___T_205 = (((1U & (vlTOPp->io_in_rs1 
				      >> 7U)) == (1U 
						  & (vlTOPp->io_in_rs2 
						     >> 7U))) 
			      & ((1U & ((IData)(vlTOPp->v__DOT__add1) 
					>> 7U)) != 
				 (1U & (vlTOPp->io_in_rs1 
					>> 7U))));
    vlTOPp->v__DOT___T_227 = (((1U & (vlTOPp->io_in_rs1 
				      >> 0xfU)) == 
			       (1U & (vlTOPp->io_in_rs2 
				      >> 0xfU))) & 
			      ((1U & (vlTOPp->v__DOT__add2 
				      >> 0xfU)) != 
			       (1U & (vlTOPp->io_in_rs1 
				      >> 0xfU))));
    vlTOPp->v__DOT___T_253 = (((1U & (vlTOPp->io_in_rs1 
				      >> 0x17U)) == 
			       (1U & (vlTOPp->io_in_rs2 
				      >> 0x17U))) & 
			      ((1U & (vlTOPp->v__DOT__add3 
				      >> 0x17U)) != 
			       (1U & (vlTOPp->io_in_rs1 
				      >> 0x17U))));
    vlTOPp->v__DOT___T_279 = (((1U & (vlTOPp->io_in_rs1 
				      >> 0x1fU)) == 
			       (1U & (vlTOPp->io_in_rs2 
				      >> 0x1fU))) & 
			      ((1U & (IData)((vlTOPp->v__DOT__add4 
					      >> 0x1fU))) 
			       != (1U & (vlTOPp->io_in_rs1 
					 >> 0x1fU))));
    vlTOPp->v__DOT___T_303 = (((0xff000000U & ((IData)(
						       (vlTOPp->v__DOT__add4 
							>> 0x18U)) 
					       << 0x18U)) 
			       | (0xff0000U & vlTOPp->v__DOT__add3)) 
			      | ((0xff00U & vlTOPp->v__DOT__add2) 
				 | (0xffU & (IData)(vlTOPp->v__DOT__add1))));
    vlTOPp->v__DOT___T_317 = (((0xff000000U & ((IData)(
						       (vlTOPp->v__DOT__add4 
							>> 0x19U)) 
					       << 0x18U)) 
			       | (0xff0000U & (vlTOPp->v__DOT__add3 
					       >> 1U))) 
			      | ((0xff00U & (vlTOPp->v__DOT__add2 
					     >> 1U)) 
				 | (0xffU & ((IData)(vlTOPp->v__DOT__add1) 
					     >> 1U))));
    vlTOPp->io_out = (IData)(((0U == (IData)(vlTOPp->io_opcode))
			       ? (QData)((IData)(vlTOPp->v__DOT___T_303))
			       : ((1U == (IData)(vlTOPp->io_opcode))
				   ? (QData)((IData)(vlTOPp->v__DOT___T_310))
				   : ((2U == (IData)(vlTOPp->io_opcode))
				       ? (QData)((IData)(vlTOPp->v__DOT___T_317))
				       : ((3U == (IData)(vlTOPp->io_opcode))
					   ? (QData)((IData)(vlTOPp->v__DOT___T_303))
					   : ((4U == (IData)(vlTOPp->io_opcode))
					       ? (QData)((IData)(vlTOPp->v__DOT___T_310))
					       : ((5U 
						   == (IData)(vlTOPp->io_opcode))
						   ? (QData)((IData)(vlTOPp->v__DOT___T_317))
						   : VL_ULL(0))))))));
}

VL_INLINE_OPT void VdspAlu::_combo__TOP__6(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_combo__TOP__6\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_out = (IData)(((0U == (IData)(vlTOPp->io_opcode))
			       ? (QData)((IData)(vlTOPp->v__DOT___T_303))
			       : ((1U == (IData)(vlTOPp->io_opcode))
				   ? (QData)((IData)(vlTOPp->v__DOT___T_310))
				   : ((2U == (IData)(vlTOPp->io_opcode))
				       ? (QData)((IData)(vlTOPp->v__DOT___T_317))
				       : ((3U == (IData)(vlTOPp->io_opcode))
					   ? (QData)((IData)(vlTOPp->v__DOT___T_303))
					   : ((4U == (IData)(vlTOPp->io_opcode))
					       ? (QData)((IData)(vlTOPp->v__DOT___T_310))
					       : ((5U 
						   == (IData)(vlTOPp->io_opcode))
						   ? (QData)((IData)(vlTOPp->v__DOT___T_317))
						   : VL_ULL(0))))))));
}

void VdspAlu::_eval(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_eval\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VdspAlu::_eval_initial(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_eval_initial\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdspAlu::final() {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::final\n"); );
    // Variables
    VdspAlu__Syms* __restrict vlSymsp = this->__VlSymsp;
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VdspAlu::_eval_settle(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_eval_settle\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

VL_INLINE_OPT QData VdspAlu::_change_request(VdspAlu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VdspAlu::_change_request\n"); );
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
