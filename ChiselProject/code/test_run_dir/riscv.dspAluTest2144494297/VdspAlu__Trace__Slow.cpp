// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VdspAlu__Syms.h"


//======================

void VdspAlu::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VdspAlu::traceInit, &VdspAlu::traceFull, &VdspAlu::traceChg, this);
}
void VdspAlu::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VdspAlu* t=(VdspAlu*)userthis;
    VdspAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VdspAlu::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VdspAlu* t=(VdspAlu*)userthis;
    VdspAlu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VdspAlu::traceInitThis(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VdspAlu::traceFullThis(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VdspAlu::traceInitThis__1(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+11,"clock",-1);
	vcdp->declBit  (c+12,"reset",-1);
	vcdp->declBus  (c+13,"io_opcode",-1,6,0);
	vcdp->declBus  (c+14,"io_in_rs1",-1,31,0);
	vcdp->declBus  (c+15,"io_in_rs2",-1,31,0);
	vcdp->declBus  (c+16,"io_out",-1,31,0);
	vcdp->declBit  (c+11,"v clock",-1);
	vcdp->declBit  (c+12,"v reset",-1);
	vcdp->declBus  (c+13,"v io_opcode",-1,6,0);
	vcdp->declBus  (c+14,"v io_in_rs1",-1,31,0);
	vcdp->declBus  (c+15,"v io_in_rs2",-1,31,0);
	vcdp->declBus  (c+16,"v io_out",-1,31,0);
	vcdp->declBus  (c+6,"v add1_r",-1,8,0);
	// Tracing: v _RAND_0 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:23
	vcdp->declBus  (c+7,"v add2_r",-1,16,0);
	// Tracing: v _RAND_1 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:25
	vcdp->declBus  (c+8,"v add3_r",-1,24,0);
	// Tracing: v _RAND_2 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:27
	vcdp->declQuad (c+9,"v add4_r",-1,32,0);
	// Tracing: v _RAND_3 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:29
	// Tracing: v _T_7 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:30
	vcdp->declBus  (c+17,"v rs1_7d0",-1,8,0);
	// Tracing: v _T_9 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:32
	vcdp->declBus  (c+18,"v rs2_7d0",-1,8,0);
	// Tracing: v _T_11 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:34
	vcdp->declBus  (c+19,"v rs1_15d8",-1,8,0);
	// Tracing: v _T_13 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:36
	vcdp->declBus  (c+20,"v rs2_15d8",-1,8,0);
	// Tracing: v _T_15 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:38
	vcdp->declBus  (c+21,"v rs1_23d16",-1,8,0);
	// Tracing: v _T_17 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:40
	vcdp->declBus  (c+22,"v rs2_23d16",-1,8,0);
	// Tracing: v _T_19 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:42
	vcdp->declBus  (c+23,"v rs1_31d24",-1,8,0);
	// Tracing: v _T_21 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:44
	vcdp->declBus  (c+24,"v rs2_31d24",-1,8,0);
	// Tracing: v _T_33 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:46
	// Tracing: v _T_34 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:47
	// Tracing: v _T_35 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:48
	// Tracing: v _T_36 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:49
	// Tracing: v _T_37 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:50
	// Tracing: v _T_38 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:51
	// Tracing: v _T_39 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:52
	// Tracing: v _T_40 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:53
	// Tracing: v _T_53 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:54
	// Tracing: v _T_54 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:55
	// Tracing: v _T_55 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:56
	// Tracing: v _T_56 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:57
	// Tracing: v _T_57 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:58
	// Tracing: v _T_58 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:59
	// Tracing: v _T_59 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:60
	// Tracing: v _T_60 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:61
	// Tracing: v _T_61 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:62
	// Tracing: v _T_62 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:63
	// Tracing: v _T_63 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:64
	vcdp->declBus  (c+1,"v add1",-1,8,0);
	// Tracing: v _T_65 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:66
	// Tracing: v _T_66 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:67
	// Tracing: v _T_67 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:68
	// Tracing: v _T_68 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:69
	// Tracing: v _T_69 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:70
	// Tracing: v _T_70 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:71
	// Tracing: v _T_72 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:72
	// Tracing: v _T_73 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:73
	// Tracing: v _T_74 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:74
	// Tracing: v _T_76 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:75
	// Tracing: v _T_98 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:76
	// Tracing: v _T_100 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:77
	// Tracing: v _T_102 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:78
	// Tracing: v _T_104 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:79
	// Tracing: v _T_106 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:80
	vcdp->declBus  (c+2,"v add2",-1,16,0);
	// Tracing: v _T_109 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:82
	// Tracing: v _T_110 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:83
	// Tracing: v _T_111 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:84
	// Tracing: v _T_112 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:85
	// Tracing: v _T_113 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:86
	// Tracing: v _T_114 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:87
	// Tracing: v _T_116 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:88
	// Tracing: v _T_117 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:89
	// Tracing: v _T_118 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:90
	// Tracing: v _T_120 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:91
	// Tracing: v _T_142 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:92
	// Tracing: v _T_144 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:93
	// Tracing: v _T_146 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:94
	// Tracing: v _T_148 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:95
	// Tracing: v _T_150 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:96
	vcdp->declBus  (c+3,"v add3",-1,24,0);
	// Tracing: v _T_153 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:98
	// Tracing: v _T_154 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:99
	// Tracing: v _T_155 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:100
	// Tracing: v _T_156 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:101
	// Tracing: v _T_157 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:102
	// Tracing: v _T_158 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:103
	// Tracing: v _T_160 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:104
	// Tracing: v _T_161 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:105
	// Tracing: v _T_162 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:106
	// Tracing: v _T_164 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:107
	// Tracing: v _T_186 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:108
	// Tracing: v _T_188 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:109
	// Tracing: v _T_190 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:110
	// Tracing: v _T_192 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:111
	// Tracing: v _T_194 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:112
	vcdp->declQuad (c+4,"v add4",-1,32,0);
	// Tracing: v _T_198 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:114
	// Tracing: v _T_199 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:115
	// Tracing: v _T_200 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:116
	// Tracing: v _T_201 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:117
	// Tracing: v _T_202 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:118
	// Tracing: v _T_204 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:119
	// Tracing: v _T_205 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:120
	// Tracing: v _T_208 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:121
	// Tracing: v _GEN_0 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:122
	// Tracing: v _GEN_1 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:123
	// Tracing: v _T_211 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:124
	// Tracing: v _T_212 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:125
	// Tracing: v _GEN_2 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:126
	// Tracing: v _GEN_3 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:127
	// Tracing: v _GEN_4 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:128
	// Tracing: v _T_221 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:129
	// Tracing: v _T_222 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:130
	// Tracing: v _T_223 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:131
	// Tracing: v _T_224 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:132
	// Tracing: v _T_226 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:133
	// Tracing: v _T_227 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:134
	// Tracing: v _T_230 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:135
	// Tracing: v _GEN_5 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:136
	// Tracing: v _GEN_6 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:137
	// Tracing: v _T_238 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:138
	// Tracing: v _GEN_7 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:139
	// Tracing: v _GEN_8 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:140
	// Tracing: v _GEN_9 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:141
	// Tracing: v _T_247 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:142
	// Tracing: v _T_248 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:143
	// Tracing: v _T_249 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:144
	// Tracing: v _T_250 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:145
	// Tracing: v _T_252 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:146
	// Tracing: v _T_253 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:147
	// Tracing: v _T_256 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:148
	// Tracing: v _GEN_10 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:149
	// Tracing: v _GEN_11 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:150
	// Tracing: v _T_264 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:151
	// Tracing: v _GEN_12 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:152
	// Tracing: v _GEN_13 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:153
	// Tracing: v _GEN_14 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:154
	// Tracing: v _T_273 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:155
	// Tracing: v _T_274 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:156
	// Tracing: v _T_275 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:157
	// Tracing: v _T_276 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:158
	// Tracing: v _T_278 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:159
	// Tracing: v _T_279 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:160
	// Tracing: v _T_282 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:161
	// Tracing: v _GEN_15 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:162
	// Tracing: v _GEN_16 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:163
	// Tracing: v _T_290 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:164
	// Tracing: v _GEN_17 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:165
	// Tracing: v _GEN_18 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:166
	// Tracing: v _GEN_19 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:167
	// Tracing: v _T_297 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:168
	// Tracing: v _T_298 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:169
	// Tracing: v _T_299 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:170
	// Tracing: v _T_300 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:171
	// Tracing: v _T_301 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:172
	// Tracing: v _T_302 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:173
	// Tracing: v _T_303 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:174
	// Tracing: v _T_304 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:175
	// Tracing: v _T_305 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:176
	// Tracing: v _T_306 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:177
	// Tracing: v _T_307 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:178
	// Tracing: v _T_308 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:179
	// Tracing: v _T_309 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:180
	// Tracing: v _T_310 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:181
	// Tracing: v _T_311 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:182
	// Tracing: v _T_312 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:183
	// Tracing: v _T_313 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:184
	// Tracing: v _T_314 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:185
	// Tracing: v _T_315 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:186
	// Tracing: v _T_316 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:187
	// Tracing: v _T_317 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:188
	// Tracing: v _T_340 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:189
	// Tracing: v _T_342 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:190
	// Tracing: v _T_344 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:191
	// Tracing: v _T_346 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:192
	// Tracing: v _T_348 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:193
	// Tracing: v _T_350 // Ignored: Inlined leading underscore at /root/ChiselProject/code/test_run_dir/riscv.dspAluTest2144494297/dspAlu.v:194
    }
}

void VdspAlu::traceFullThis__1(VdspAlu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VdspAlu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->v__DOT__add1),9);
	vcdp->fullBus  (c+2,(vlTOPp->v__DOT__add2),17);
	vcdp->fullBus  (c+3,(vlTOPp->v__DOT__add3),25);
	vcdp->fullQuad (c+4,(vlTOPp->v__DOT__add4),33);
	vcdp->fullBus  (c+6,(vlTOPp->v__DOT__add1_r),9);
	vcdp->fullBus  (c+7,(vlTOPp->v__DOT__add2_r),17);
	vcdp->fullBus  (c+8,(vlTOPp->v__DOT__add3_r),25);
	vcdp->fullQuad (c+9,(vlTOPp->v__DOT__add4_r),33);
	vcdp->fullBit  (c+11,(vlTOPp->clock));
	vcdp->fullBit  (c+12,(vlTOPp->reset));
	vcdp->fullBus  (c+13,(vlTOPp->io_opcode),7);
	vcdp->fullBus  (c+14,(vlTOPp->io_in_rs1),32);
	vcdp->fullBus  (c+15,(vlTOPp->io_in_rs2),32);
	vcdp->fullBus  (c+16,(vlTOPp->io_out),32);
	vcdp->fullBus  (c+17,((0xffU & vlTOPp->io_in_rs1)),9);
	vcdp->fullBus  (c+18,((0xffU & vlTOPp->io_in_rs2)),9);
	vcdp->fullBus  (c+19,((0xffU & (vlTOPp->io_in_rs1 
					>> 8U))),9);
	vcdp->fullBus  (c+20,((0xffU & (vlTOPp->io_in_rs2 
					>> 8U))),9);
	vcdp->fullBus  (c+21,((0xffU & (vlTOPp->io_in_rs1 
					>> 0x10U))),9);
	vcdp->fullBus  (c+22,((0xffU & (vlTOPp->io_in_rs2 
					>> 0x10U))),9);
	vcdp->fullBus  (c+23,((0xffU & (vlTOPp->io_in_rs1 
					>> 0x18U))),9);
	vcdp->fullBus  (c+24,((0xffU & (vlTOPp->io_in_rs2 
					>> 0x18U))),9);
    }
}
