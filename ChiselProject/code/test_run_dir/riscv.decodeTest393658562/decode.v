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

module decode(
  input        clock,
  input        reset,
  input  [6:0] io_func,
  input        io_xd,
  input        io_xs1,
  input        io_xs2,
  input  [6:0] io_opcode,
  output [1:0] io_ctrl_out
);
  wire  _T_13; // @[decode.scala 31:13]
  wire  _T_14; // @[decode.scala 31:23]
  wire  _T_15; // @[decode.scala 31:46]
  wire  _T_16; // @[decode.scala 31:33]
  wire  _T_18; // @[decode.scala 32:22]
  wire  _T_20; // @[decode.scala 32:46]
  wire  _T_21; // @[decode.scala 32:28]
  wire [1:0] _GEN_0; // @[decode.scala 32:52]
  wire  _T_23; // @[decode.scala 35:22]
  wire  _T_25; // @[decode.scala 35:47]
  wire  _T_26; // @[decode.scala 35:29]
  wire [1:0] _GEN_1; // @[decode.scala 35:53]
  wire  _T_28; // @[decode.scala 38:22]
  wire  _T_30; // @[decode.scala 38:47]
  wire  _T_31; // @[decode.scala 38:29]
  wire [1:0] _GEN_2; // @[decode.scala 38:53]
  wire [1:0] _GEN_3; // @[decode.scala 31:62]
  assign _T_13 = io_xd & io_xs1; // @[decode.scala 31:13]
  assign _T_14 = _T_13 & io_xs2; // @[decode.scala 31:23]
  assign _T_15 = io_opcode == 7'h0; // @[decode.scala 31:46]
  assign _T_16 = _T_14 & _T_15; // @[decode.scala 31:33]
  assign _T_18 = io_func > 7'h0; // @[decode.scala 32:22]
  assign _T_20 = io_func < 7'h10; // @[decode.scala 32:46]
  assign _T_21 = _T_18 & _T_20; // @[decode.scala 32:28]
  assign _GEN_0 = _T_21 ? 2'h1 : 2'h0; // @[decode.scala 32:52]
  assign _T_23 = io_func > 7'hf; // @[decode.scala 35:22]
  assign _T_25 = io_func < 7'h20; // @[decode.scala 35:47]
  assign _T_26 = _T_23 & _T_25; // @[decode.scala 35:29]
  assign _GEN_1 = _T_26 ? 2'h2 : _GEN_0; // @[decode.scala 35:53]
  assign _T_28 = io_func > 7'h1f; // @[decode.scala 38:22]
  assign _T_30 = io_func < 7'h30; // @[decode.scala 38:47]
  assign _T_31 = _T_28 & _T_30; // @[decode.scala 38:29]
  assign _GEN_2 = _T_31 ? 2'h3 : _GEN_1; // @[decode.scala 38:53]
  assign _GEN_3 = _T_16 ? _GEN_2 : 2'h0; // @[decode.scala 31:62]
  assign io_ctrl_out = _GEN_3;
endmodule
