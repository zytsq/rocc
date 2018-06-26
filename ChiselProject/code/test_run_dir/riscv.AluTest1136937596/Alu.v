`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif

module Alu(
  input         clock,
  input         reset,
  input  [31:0] io_A,
  input  [31:0] io_B,
  input  [3:0]  io_Op,
  output [31:0] io_Out,
  output [31:0] io_Sum
);
  wire [4:0] shamt; // @[Alu.scala 34:19]
  wire [32:0] _T_20; // @[Alu.scala 37:25]
  wire [31:0] _T_21; // @[Alu.scala 37:25]
  wire [32:0] _T_22; // @[Alu.scala 38:25]
  wire [32:0] _T_23; // @[Alu.scala 38:25]
  wire [31:0] _T_24; // @[Alu.scala 38:25]
  wire [31:0] _T_25; // @[Alu.scala 39:25]
  wire [31:0] _T_26; // @[Alu.scala 40:25]
  wire [31:0] _T_27; // @[Alu.scala 41:25]
  wire [31:0] _T_28; // @[Alu.scala 42:25]
  wire [31:0] _T_29; // @[Alu.scala 42:39]
  wire  _T_30; // @[Alu.scala 42:32]
  wire [62:0] _GEN_0; // @[Alu.scala 43:25]
  wire [62:0] _T_31; // @[Alu.scala 43:25]
  wire  _T_32; // @[Alu.scala 44:25]
  wire [31:0] _T_33; // @[Alu.scala 45:25]
  wire [31:0] _T_35; // @[Alu.scala 46:32]
  wire [31:0] _T_36; // @[Alu.scala 46:42]
  wire  _T_39; // @[Mux.scala 46:19]
  wire [31:0] _T_40; // @[Mux.scala 46:16]
  wire  _T_41; // @[Mux.scala 46:19]
  wire [31:0] _T_42; // @[Mux.scala 46:16]
  wire  _T_43; // @[Mux.scala 46:19]
  wire [31:0] _T_44; // @[Mux.scala 46:16]
  wire  _T_45; // @[Mux.scala 46:19]
  wire [31:0] _T_46; // @[Mux.scala 46:16]
  wire  _T_47; // @[Mux.scala 46:19]
  wire [62:0] _T_48; // @[Mux.scala 46:16]
  wire  _T_49; // @[Mux.scala 46:19]
  wire [62:0] _T_50; // @[Mux.scala 46:16]
  wire  _T_51; // @[Mux.scala 46:19]
  wire [62:0] _T_52; // @[Mux.scala 46:16]
  wire  _T_53; // @[Mux.scala 46:19]
  wire [62:0] _T_54; // @[Mux.scala 46:16]
  wire  _T_55; // @[Mux.scala 46:19]
  wire [62:0] _T_56; // @[Mux.scala 46:16]
  wire  _T_57; // @[Mux.scala 46:19]
  wire [62:0] _T_58; // @[Mux.scala 46:16]
  wire  _T_59; // @[Mux.scala 46:19]
  wire [62:0] _T_60; // @[Mux.scala 46:16]
  wire  _T_61; // @[Alu.scala 49:29]
  wire [32:0] _T_63; // @[Alu.scala 49:33]
  wire [32:0] _T_64; // @[Alu.scala 49:33]
  wire [31:0] _T_65; // @[Alu.scala 49:33]
  wire [31:0] _T_66; // @[Alu.scala 49:23]
  wire [32:0] _T_67; // @[Alu.scala 49:18]
  wire [31:0] _T_68; // @[Alu.scala 49:18]
  assign shamt = io_B[4:0]; // @[Alu.scala 34:19]
  assign _T_20 = io_A + io_B; // @[Alu.scala 37:25]
  assign _T_21 = _T_20[31:0]; // @[Alu.scala 37:25]
  assign _T_22 = io_A - io_B; // @[Alu.scala 38:25]
  assign _T_23 = $unsigned(_T_22); // @[Alu.scala 38:25]
  assign _T_24 = _T_23[31:0]; // @[Alu.scala 38:25]
  assign _T_25 = io_A & io_B; // @[Alu.scala 39:25]
  assign _T_26 = io_A | io_B; // @[Alu.scala 40:25]
  assign _T_27 = io_A ^ io_B; // @[Alu.scala 41:25]
  assign _T_28 = $signed(io_A); // @[Alu.scala 42:25]
  assign _T_29 = $signed(io_B); // @[Alu.scala 42:39]
  assign _T_30 = $signed(_T_28) < $signed(_T_29); // @[Alu.scala 42:32]
  assign _GEN_0 = {{31'd0}, io_A}; // @[Alu.scala 43:25]
  assign _T_31 = _GEN_0 << shamt; // @[Alu.scala 43:25]
  assign _T_32 = io_A < io_B; // @[Alu.scala 44:25]
  assign _T_33 = io_A >> shamt; // @[Alu.scala 45:25]
  assign _T_35 = $signed(_T_28) >>> shamt; // @[Alu.scala 46:32]
  assign _T_36 = $unsigned(_T_35); // @[Alu.scala 46:42]
  assign _T_39 = 4'ha == io_Op; // @[Mux.scala 46:19]
  assign _T_40 = _T_39 ? io_A : io_B; // @[Mux.scala 46:16]
  assign _T_41 = 4'h9 == io_Op; // @[Mux.scala 46:19]
  assign _T_42 = _T_41 ? _T_36 : _T_40; // @[Mux.scala 46:16]
  assign _T_43 = 4'h8 == io_Op; // @[Mux.scala 46:19]
  assign _T_44 = _T_43 ? _T_33 : _T_42; // @[Mux.scala 46:16]
  assign _T_45 = 4'h7 == io_Op; // @[Mux.scala 46:19]
  assign _T_46 = _T_45 ? {{31'd0}, _T_32} : _T_44; // @[Mux.scala 46:16]
  assign _T_47 = 4'h6 == io_Op; // @[Mux.scala 46:19]
  assign _T_48 = _T_47 ? _T_31 : {{31'd0}, _T_46}; // @[Mux.scala 46:16]
  assign _T_49 = 4'h5 == io_Op; // @[Mux.scala 46:19]
  assign _T_50 = _T_49 ? {{62'd0}, _T_30} : _T_48; // @[Mux.scala 46:16]
  assign _T_51 = 4'h4 == io_Op; // @[Mux.scala 46:19]
  assign _T_52 = _T_51 ? {{31'd0}, _T_27} : _T_50; // @[Mux.scala 46:16]
  assign _T_53 = 4'h3 == io_Op; // @[Mux.scala 46:19]
  assign _T_54 = _T_53 ? {{31'd0}, _T_26} : _T_52; // @[Mux.scala 46:16]
  assign _T_55 = 4'h2 == io_Op; // @[Mux.scala 46:19]
  assign _T_56 = _T_55 ? {{31'd0}, _T_25} : _T_54; // @[Mux.scala 46:16]
  assign _T_57 = 4'h1 == io_Op; // @[Mux.scala 46:19]
  assign _T_58 = _T_57 ? {{31'd0}, _T_24} : _T_56; // @[Mux.scala 46:16]
  assign _T_59 = 4'h0 == io_Op; // @[Mux.scala 46:19]
  assign _T_60 = _T_59 ? {{31'd0}, _T_21} : _T_58; // @[Mux.scala 46:16]
  assign _T_61 = io_Op[0]; // @[Alu.scala 49:29]
  assign _T_63 = 32'h0 - io_B; // @[Alu.scala 49:33]
  assign _T_64 = $unsigned(_T_63); // @[Alu.scala 49:33]
  assign _T_65 = _T_64[31:0]; // @[Alu.scala 49:33]
  assign _T_66 = _T_61 ? _T_65 : io_B; // @[Alu.scala 49:23]
  assign _T_67 = io_A + _T_66; // @[Alu.scala 49:18]
  assign _T_68 = _T_67[31:0]; // @[Alu.scala 49:18]
  assign io_Out = _T_60[31:0];
  assign io_Sum = _T_68;
endmodule
