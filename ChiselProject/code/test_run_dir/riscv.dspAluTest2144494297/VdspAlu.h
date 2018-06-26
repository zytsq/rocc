// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VdspAlu_H_
#define _VdspAlu_H_

#include "verilated.h"
class VdspAlu__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VdspAlu) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_opcode,6,0);
    //char	__VpadToAlign3[1];
    VL_IN(io_in_rs1,31,0);
    VL_IN(io_in_rs2,31,0);
    VL_OUT(io_out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT___T_205,0,0);
    VL_SIG8(v__DOT___T_227,0,0);
    VL_SIG8(v__DOT___T_253,0,0);
    VL_SIG8(v__DOT___T_279,0,0);
    VL_SIG16(v__DOT__add1_r,8,0);
    VL_SIG16(v__DOT___T_35,9,0);
    VL_SIG16(v__DOT___T_39,9,0);
    VL_SIG16(v__DOT__add1,8,0);
    VL_SIG16(v__DOT___T_67,9,0);
    VL_SIG16(v__DOT___T_73,9,0);
    VL_SIG16(v__DOT___T_111,9,0);
    VL_SIG16(v__DOT___T_117,9,0);
    VL_SIG16(v__DOT___T_155,9,0);
    VL_SIG16(v__DOT___T_161,9,0);
    VL_SIG(v__DOT__add2_r,16,0);
    VL_SIG(v__DOT__add3_r,24,0);
    VL_SIG(v__DOT__add2,16,0);
    VL_SIG(v__DOT__add3,24,0);
    VL_SIG(v__DOT___T_303,31,0);
    VL_SIG(v__DOT___T_310,31,0);
    VL_SIG(v__DOT___T_317,31,0);
    VL_SIG64(v__DOT__add4_r,32,0);
    VL_SIG64(v__DOT__add4,32,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign93[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VdspAlu__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VdspAlu& operator= (const VdspAlu&);	///< Copying not allowed
    VdspAlu(const VdspAlu&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VdspAlu(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VdspAlu();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VdspAlu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VdspAlu__Syms* symsp, bool first);
  private:
    static QData	_change_request(VdspAlu__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(VdspAlu__Syms* __restrict vlSymsp);
    static void	_combo__TOP__4(VdspAlu__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(VdspAlu__Syms* __restrict vlSymsp);
    static void	_eval(VdspAlu__Syms* __restrict vlSymsp);
    static void	_eval_initial(VdspAlu__Syms* __restrict vlSymsp);
    static void	_eval_settle(VdspAlu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VdspAlu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VdspAlu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VdspAlu__Syms* __restrict vlSymsp);
    static void	traceChgThis(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
