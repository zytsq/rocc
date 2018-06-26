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

module dAlu_r(
  input         clock,
  input         reset,
  input  [31:0] io_data_rs1,
  input  [31:0] io_data_rs2,
  input  [1:0]  io_ctrl_signal,
  output [7:0]  io_out_8bit1_rs1,
  output [7:0]  io_out_8bit1_rs2,
  output [7:0]  io_out_8bit2_rs1,
  output [7:0]  io_out_8bit2_rs2,
  output [15:0] io_out_16bit_rs1,
  output [15:0] io_out_16bit_rs2,
  output [31:0] io_out_32bit_rs1,
  output [31:0] io_out_32bit_rs2
);
  wire  _T_26; // @[dAlu_r.scala 34:29]
  wire [7:0] _T_27; // @[dAlu_r.scala 35:38]
  wire [7:0] _T_28; // @[dAlu_r.scala 36:38]
  wire [7:0] _T_29; // @[dAlu_r.scala 37:38]
  wire [7:0] _T_30; // @[dAlu_r.scala 38:38]
  wire [7:0] _T_31; // @[dAlu_r.scala 39:42]
  wire [15:0] _T_33; // @[Cat.scala 30:58]
  wire [7:0] _T_34; // @[dAlu_r.scala 40:42]
  wire [15:0] _T_36; // @[Cat.scala 30:58]
  wire [7:0] _T_37; // @[dAlu_r.scala 41:42]
  wire [31:0] _T_39; // @[Cat.scala 30:58]
  wire [7:0] _T_40; // @[dAlu_r.scala 42:42]
  wire [31:0] _T_42; // @[Cat.scala 30:58]
  wire [7:0] _GEN_0; // @[dAlu_r.scala 34:41]
  wire [7:0] _GEN_1; // @[dAlu_r.scala 34:41]
  wire [7:0] _GEN_2; // @[dAlu_r.scala 34:41]
  wire [7:0] _GEN_3; // @[dAlu_r.scala 34:41]
  wire [15:0] _GEN_4; // @[dAlu_r.scala 34:41]
  wire [15:0] _GEN_5; // @[dAlu_r.scala 34:41]
  wire [31:0] _GEN_6; // @[dAlu_r.scala 34:41]
  wire [31:0] _GEN_7; // @[dAlu_r.scala 34:41]
  wire  _T_43; // @[dAlu_r.scala 44:29]
  wire [15:0] _T_44; // @[dAlu_r.scala 45:38]
  wire [15:0] _T_45; // @[dAlu_r.scala 46:38]
  wire [15:0] _T_46; // @[dAlu_r.scala 47:42]
  wire [31:0] _T_48; // @[Cat.scala 30:58]
  wire [15:0] _T_49; // @[dAlu_r.scala 48:42]
  wire [31:0] _T_51; // @[Cat.scala 30:58]
  wire [15:0] _GEN_8; // @[dAlu_r.scala 44:42]
  wire [15:0] _GEN_9; // @[dAlu_r.scala 44:42]
  wire [31:0] _GEN_10; // @[dAlu_r.scala 44:42]
  wire [31:0] _GEN_11; // @[dAlu_r.scala 44:42]
  wire  _T_52; // @[dAlu_r.scala 50:29]
  wire [31:0] _GEN_12; // @[dAlu_r.scala 50:42]
  wire [31:0] _GEN_13; // @[dAlu_r.scala 50:42]
  assign _T_26 = io_ctrl_signal == 2'h1; // @[dAlu_r.scala 34:29]
  assign _T_27 = io_data_rs1[7:0]; // @[dAlu_r.scala 35:38]
  assign _T_28 = io_data_rs2[7:0]; // @[dAlu_r.scala 36:38]
  assign _T_29 = io_data_rs1[15:8]; // @[dAlu_r.scala 37:38]
  assign _T_30 = io_data_rs2[15:8]; // @[dAlu_r.scala 38:38]
  assign _T_31 = io_data_rs1[23:16]; // @[dAlu_r.scala 39:42]
  assign _T_33 = {_T_31,8'h0}; // @[Cat.scala 30:58]
  assign _T_34 = io_data_rs2[23:16]; // @[dAlu_r.scala 40:42]
  assign _T_36 = {_T_34,8'h0}; // @[Cat.scala 30:58]
  assign _T_37 = io_data_rs1[31:24]; // @[dAlu_r.scala 41:42]
  assign _T_39 = {_T_37,24'h0}; // @[Cat.scala 30:58]
  assign _T_40 = io_data_rs2[31:24]; // @[dAlu_r.scala 42:42]
  assign _T_42 = {_T_40,24'h0}; // @[Cat.scala 30:58]
  assign _GEN_0 = _T_26 ? _T_27 : 8'h0; // @[dAlu_r.scala 34:41]
  assign _GEN_1 = _T_26 ? _T_28 : 8'h0; // @[dAlu_r.scala 34:41]
  assign _GEN_2 = _T_26 ? _T_29 : 8'h0; // @[dAlu_r.scala 34:41]
  assign _GEN_3 = _T_26 ? _T_30 : 8'h0; // @[dAlu_r.scala 34:41]
  assign _GEN_4 = _T_26 ? _T_33 : 16'h0; // @[dAlu_r.scala 34:41]
  assign _GEN_5 = _T_26 ? _T_36 : 16'h0; // @[dAlu_r.scala 34:41]
  assign _GEN_6 = _T_26 ? _T_39 : 32'h0; // @[dAlu_r.scala 34:41]
  assign _GEN_7 = _T_26 ? _T_42 : 32'h0; // @[dAlu_r.scala 34:41]
  assign _T_43 = io_ctrl_signal == 2'h2; // @[dAlu_r.scala 44:29]
  assign _T_44 = io_data_rs1[15:0]; // @[dAlu_r.scala 45:38]
  assign _T_45 = io_data_rs2[15:0]; // @[dAlu_r.scala 46:38]
  assign _T_46 = io_data_rs1[31:16]; // @[dAlu_r.scala 47:42]
  assign _T_48 = {_T_46,16'h0}; // @[Cat.scala 30:58]
  assign _T_49 = io_data_rs2[31:16]; // @[dAlu_r.scala 48:42]
  assign _T_51 = {_T_49,16'h0}; // @[Cat.scala 30:58]
  assign _GEN_8 = _T_43 ? _T_44 : _GEN_4; // @[dAlu_r.scala 44:42]
  assign _GEN_9 = _T_43 ? _T_45 : _GEN_5; // @[dAlu_r.scala 44:42]
  assign _GEN_10 = _T_43 ? _T_48 : _GEN_6; // @[dAlu_r.scala 44:42]
  assign _GEN_11 = _T_43 ? _T_51 : _GEN_7; // @[dAlu_r.scala 44:42]
  assign _T_52 = io_ctrl_signal == 2'h3; // @[dAlu_r.scala 50:29]
  assign _GEN_12 = _T_52 ? io_data_rs1 : _GEN_10; // @[dAlu_r.scala 50:42]
  assign _GEN_13 = _T_52 ? io_data_rs1 : _GEN_11; // @[dAlu_r.scala 50:42]
  assign io_out_8bit1_rs1 = _GEN_0;
  assign io_out_8bit1_rs2 = _GEN_1;
  assign io_out_8bit2_rs1 = _GEN_2;
  assign io_out_8bit2_rs2 = _GEN_3;
  assign io_out_16bit_rs1 = _GEN_8;
  assign io_out_16bit_rs2 = _GEN_9;
  assign io_out_32bit_rs1 = _GEN_12;
  assign io_out_32bit_rs2 = _GEN_13;
endmodule
