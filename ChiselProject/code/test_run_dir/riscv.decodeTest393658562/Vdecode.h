// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vdecode_H_
#define _Vdecode_H_

#include "verilated.h"
class Vdecode__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vdecode) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_func,6,0);
    VL_IN8(io_xd,0,0);
    VL_IN8(io_xs1,0,0);
    VL_IN8(io_xs2,0,0);
    VL_IN8(io_opcode,6,0);
    VL_OUT8(io_ctrl_out,1,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vdecode__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vdecode& operator= (const Vdecode&);	///< Copying not allowed
    Vdecode(const Vdecode&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vdecode(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vdecode();
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
    static void _eval_initial_loop(Vdecode__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vdecode__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vdecode__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(Vdecode__Syms* __restrict vlSymsp);
    static void	_eval(Vdecode__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vdecode__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vdecode__Syms* __restrict vlSymsp);
    static void	traceChgThis(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(Vdecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
