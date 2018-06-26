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

module dAlu(
  input         clock,
  input         reset,
  input  [6:0]  io_opcode,
  input  [7:0]  io_in_8bit1_rs1,
  input  [7:0]  io_in_8bit1_rs2,
  input  [7:0]  io_in_8bit2_rs1,
  input  [7:0]  io_in_8bit2_rs2,
  input  [15:0] io_in_16bit_rs1,
  input  [15:0] io_in_16bit_rs2,
  input  [31:0] io_in_32bit_rs1,
  input  [31:0] io_in_32bit_rs2,
  output [31:0] io_out
);
  wire [7:0] _T_23; // @[dAlu.scala 25:35]
  wire [7:0] _T_24; // @[dAlu.scala 25:60]
  wire [8:0] _T_25; // @[dAlu.scala 25:42]
  wire [7:0] _T_26; // @[dAlu.scala 25:42]
  wire [7:0] _T_27; // @[dAlu.scala 25:42]
  wire [7:0] _T_28; // @[dAlu.scala 25:68]
  wire [8:0] _T_29; // @[dAlu.scala 26:35]
  wire [7:0] _T_30; // @[dAlu.scala 26:35]
  wire  _T_31; // @[Mux.scala 46:19]
  wire [7:0] _T_32; // @[Mux.scala 46:16]
  wire  _T_33; // @[Mux.scala 46:19]
  wire [7:0] out_8bit1; // @[Mux.scala 46:16]
  wire [7:0] _T_35; // @[dAlu.scala 28:35]
  wire [7:0] _T_36; // @[dAlu.scala 28:58]
  wire [8:0] _T_37; // @[dAlu.scala 28:41]
  wire [7:0] _T_38; // @[dAlu.scala 28:41]
  wire [7:0] _T_39; // @[dAlu.scala 28:41]
  wire [7:0] _T_40; // @[dAlu.scala 28:66]
  wire [8:0] _T_41; // @[dAlu.scala 29:34]
  wire [7:0] _T_42; // @[dAlu.scala 29:34]
  wire [7:0] _T_44; // @[Mux.scala 46:16]
  wire [7:0] out_8bit2; // @[Mux.scala 46:16]
  wire [15:0] _T_47; // @[dAlu.scala 31:35]
  wire [15:0] _T_48; // @[dAlu.scala 31:58]
  wire [16:0] _T_49; // @[dAlu.scala 31:41]
  wire [15:0] _T_50; // @[dAlu.scala 31:41]
  wire [15:0] _T_51; // @[dAlu.scala 31:41]
  wire [15:0] _T_52; // @[dAlu.scala 31:66]
  wire [16:0] _T_53; // @[dAlu.scala 32:34]
  wire [15:0] _T_54; // @[dAlu.scala 32:34]
  wire [15:0] _T_56; // @[Mux.scala 46:16]
  wire [15:0] out_16bit; // @[Mux.scala 46:16]
  wire [31:0] _T_59; // @[dAlu.scala 34:35]
  wire [31:0] _T_60; // @[dAlu.scala 34:58]
  wire [32:0] _T_61; // @[dAlu.scala 34:41]
  wire [31:0] _T_62; // @[dAlu.scala 34:41]
  wire [31:0] _T_63; // @[dAlu.scala 34:41]
  wire [31:0] _T_64; // @[dAlu.scala 34:66]
  wire [32:0] _T_65; // @[dAlu.scala 35:34]
  wire [31:0] _T_66; // @[dAlu.scala 35:34]
  wire [31:0] _T_68; // @[Mux.scala 46:16]
  wire [31:0] out_32bit; // @[Mux.scala 46:16]
  wire [15:0] _T_71; // @[Cat.scala 30:58]
  wire [15:0] _GEN_0; // @[dAlu.scala 37:18]
  wire [16:0] _T_72; // @[dAlu.scala 37:18]
  wire [15:0] _T_73; // @[dAlu.scala 37:18]
  wire [23:0] _T_75; // @[Cat.scala 30:58]
  wire [23:0] _GEN_1; // @[dAlu.scala 37:42]
  wire [24:0] _T_76; // @[dAlu.scala 37:42]
  wire [23:0] _T_77; // @[dAlu.scala 37:42]
  wire [31:0] _GEN_2; // @[dAlu.scala 37:66]
  wire [32:0] _T_78; // @[dAlu.scala 37:66]
  wire [31:0] _T_79; // @[dAlu.scala 37:66]
  assign _T_23 = $signed(io_in_8bit1_rs1); // @[dAlu.scala 25:35]
  assign _T_24 = $signed(io_in_8bit1_rs2); // @[dAlu.scala 25:60]
  assign _T_25 = $signed(_T_23) + $signed(_T_24); // @[dAlu.scala 25:42]
  assign _T_26 = _T_25[7:0]; // @[dAlu.scala 25:42]
  assign _T_27 = $signed(_T_26); // @[dAlu.scala 25:42]
  assign _T_28 = $unsigned(_T_27); // @[dAlu.scala 25:68]
  assign _T_29 = io_in_8bit1_rs1 + io_in_8bit1_rs2; // @[dAlu.scala 26:35]
  assign _T_30 = _T_29[7:0]; // @[dAlu.scala 26:35]
  assign _T_31 = 7'h3 == io_opcode; // @[Mux.scala 46:19]
  assign _T_32 = _T_31 ? _T_30 : 8'h0; // @[Mux.scala 46:16]
  assign _T_33 = 7'h0 == io_opcode; // @[Mux.scala 46:19]
  assign out_8bit1 = _T_33 ? _T_28 : _T_32; // @[Mux.scala 46:16]
  assign _T_35 = $signed(io_in_8bit2_rs1); // @[dAlu.scala 28:35]
  assign _T_36 = $signed(io_in_8bit2_rs2); // @[dAlu.scala 28:58]
  assign _T_37 = $signed(_T_35) + $signed(_T_36); // @[dAlu.scala 28:41]
  assign _T_38 = _T_37[7:0]; // @[dAlu.scala 28:41]
  assign _T_39 = $signed(_T_38); // @[dAlu.scala 28:41]
  assign _T_40 = $unsigned(_T_39); // @[dAlu.scala 28:66]
  assign _T_41 = io_in_8bit2_rs1 + io_in_8bit2_rs2; // @[dAlu.scala 29:34]
  assign _T_42 = _T_41[7:0]; // @[dAlu.scala 29:34]
  assign _T_44 = _T_31 ? _T_42 : 8'h0; // @[Mux.scala 46:16]
  assign out_8bit2 = _T_33 ? _T_40 : _T_44; // @[Mux.scala 46:16]
  assign _T_47 = $signed(io_in_16bit_rs1); // @[dAlu.scala 31:35]
  assign _T_48 = $signed(io_in_16bit_rs2); // @[dAlu.scala 31:58]
  assign _T_49 = $signed(_T_47) + $signed(_T_48); // @[dAlu.scala 31:41]
  assign _T_50 = _T_49[15:0]; // @[dAlu.scala 31:41]
  assign _T_51 = $signed(_T_50); // @[dAlu.scala 31:41]
  assign _T_52 = $unsigned(_T_51); // @[dAlu.scala 31:66]
  assign _T_53 = io_in_16bit_rs1 + io_in_16bit_rs2; // @[dAlu.scala 32:34]
  assign _T_54 = _T_53[15:0]; // @[dAlu.scala 32:34]
  assign _T_56 = _T_31 ? _T_54 : 16'h0; // @[Mux.scala 46:16]
  assign out_16bit = _T_33 ? _T_52 : _T_56; // @[Mux.scala 46:16]
  assign _T_59 = $signed(io_in_32bit_rs1); // @[dAlu.scala 34:35]
  assign _T_60 = $signed(io_in_32bit_rs2); // @[dAlu.scala 34:58]
  assign _T_61 = $signed(_T_59) + $signed(_T_60); // @[dAlu.scala 34:41]
  assign _T_62 = _T_61[31:0]; // @[dAlu.scala 34:41]
  assign _T_63 = $signed(_T_62); // @[dAlu.scala 34:41]
  assign _T_64 = $unsigned(_T_63); // @[dAlu.scala 34:66]
  assign _T_65 = io_in_32bit_rs1 + io_in_32bit_rs2; // @[dAlu.scala 35:34]
  assign _T_66 = _T_65[31:0]; // @[dAlu.scala 35:34]
  assign _T_68 = _T_31 ? _T_66 : 32'h0; // @[Mux.scala 46:16]
  assign out_32bit = _T_33 ? _T_64 : _T_68; // @[Mux.scala 46:16]
  assign _T_71 = {out_8bit2,8'h0}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{8'd0}, out_8bit1}; // @[dAlu.scala 37:18]
  assign _T_72 = _GEN_0 + _T_71; // @[dAlu.scala 37:18]
  assign _T_73 = _T_72[15:0]; // @[dAlu.scala 37:18]
  assign _T_75 = {out_16bit,8'h0}; // @[Cat.scala 30:58]
  assign _GEN_1 = {{8'd0}, _T_73}; // @[dAlu.scala 37:42]
  assign _T_76 = _GEN_1 + _T_75; // @[dAlu.scala 37:42]
  assign _T_77 = _T_76[23:0]; // @[dAlu.scala 37:42]
  assign _GEN_2 = {{8'd0}, _T_77}; // @[dAlu.scala 37:66]
  assign _T_78 = _GEN_2 + out_32bit; // @[dAlu.scala 37:66]
  assign _T_79 = _T_78[31:0]; // @[dAlu.scala 37:66]
  assign io_out = _T_79;
endmodule
