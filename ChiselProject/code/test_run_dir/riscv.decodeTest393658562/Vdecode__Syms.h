// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vdecode__Syms_H_
#define _Vdecode__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vdecode.h"

// SYMS CLASS
class Vdecode__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    Vdecode*                       TOPp;
    
    // COVERAGE
    
    // SCOPE NAMES
    
    // CREATORS
    Vdecode__Syms(Vdecode* topp, const char* namep);
    ~Vdecode__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
