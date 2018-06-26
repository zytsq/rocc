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

module dspAlu(
  input         clock,
  input         reset,
  input  [6:0]  io_opcode,
  input  [31:0] io_in_rs1,
  input  [31:0] io_in_rs2,
  output [31:0] io_out
);
  reg [8:0] add1_r; // @[dspAlu.scala 77:21]
  reg [31:0] _RAND_0;
  reg [16:0] add2_r; // @[dspAlu.scala 88:21]
  reg [31:0] _RAND_1;
  reg [24:0] add3_r; // @[dspAlu.scala 99:21]
  reg [31:0] _RAND_2;
  reg [32:0] add4_r; // @[dspAlu.scala 110:21]
  reg [63:0] _RAND_3;
  wire [7:0] _T_7; // @[dspAlu.scala 18:40]
  wire [8:0] rs1_7d0; // @[Cat.scala 30:58]
  wire [7:0] _T_9; // @[dspAlu.scala 19:40]
  wire [8:0] rs2_7d0; // @[Cat.scala 30:58]
  wire [7:0] _T_11; // @[dspAlu.scala 20:40]
  wire [8:0] rs1_15d8; // @[Cat.scala 30:58]
  wire [7:0] _T_13; // @[dspAlu.scala 21:40]
  wire [8:0] rs2_15d8; // @[Cat.scala 30:58]
  wire [7:0] _T_15; // @[dspAlu.scala 22:40]
  wire [8:0] rs1_23d16; // @[Cat.scala 30:58]
  wire [7:0] _T_17; // @[dspAlu.scala 23:40]
  wire [8:0] rs2_23d16; // @[Cat.scala 30:58]
  wire [7:0] _T_19; // @[dspAlu.scala 24:40]
  wire [8:0] rs1_31d24; // @[Cat.scala 30:58]
  wire [7:0] _T_21; // @[dspAlu.scala 25:40]
  wire [8:0] rs2_31d24; // @[Cat.scala 30:58]
  wire [8:0] _T_33; // @[dspAlu.scala 29:45]
  wire [8:0] _T_34; // @[dspAlu.scala 29:60]
  wire [9:0] _T_35; // @[dspAlu.scala 29:51]
  wire [8:0] _T_36; // @[dspAlu.scala 29:51]
  wire [8:0] _T_37; // @[dspAlu.scala 29:51]
  wire [8:0] _T_38; // @[dspAlu.scala 29:68]
  wire [9:0] _T_39; // @[dspAlu.scala 30:44]
  wire [8:0] _T_40; // @[dspAlu.scala 30:44]
  wire  _T_53; // @[Mux.scala 46:19]
  wire [8:0] _T_54; // @[Mux.scala 46:16]
  wire  _T_55; // @[Mux.scala 46:19]
  wire [8:0] _T_56; // @[Mux.scala 46:16]
  wire  _T_57; // @[Mux.scala 46:19]
  wire [8:0] _T_58; // @[Mux.scala 46:16]
  wire  _T_59; // @[Mux.scala 46:19]
  wire [8:0] _T_60; // @[Mux.scala 46:16]
  wire  _T_61; // @[Mux.scala 46:19]
  wire [8:0] _T_62; // @[Mux.scala 46:16]
  wire  _T_63; // @[Mux.scala 46:19]
  wire [8:0] add1; // @[Mux.scala 46:16]
  wire [8:0] _T_65; // @[dspAlu.scala 41:50]
  wire [8:0] _T_66; // @[dspAlu.scala 41:66]
  wire [9:0] _T_67; // @[dspAlu.scala 41:56]
  wire [8:0] _T_68; // @[dspAlu.scala 41:56]
  wire [8:0] _T_69; // @[dspAlu.scala 41:56]
  wire [8:0] _T_70; // @[dspAlu.scala 41:74]
  wire [16:0] _T_72; // @[Cat.scala 30:58]
  wire [9:0] _T_73; // @[dspAlu.scala 42:48]
  wire [8:0] _T_74; // @[dspAlu.scala 42:48]
  wire [16:0] _T_76; // @[Cat.scala 30:58]
  wire [16:0] _T_98; // @[Mux.scala 46:16]
  wire [16:0] _T_100; // @[Mux.scala 46:16]
  wire [16:0] _T_102; // @[Mux.scala 46:16]
  wire [16:0] _T_104; // @[Mux.scala 46:16]
  wire [16:0] _T_106; // @[Mux.scala 46:16]
  wire [16:0] add2; // @[Mux.scala 46:16]
  wire [8:0] _T_109; // @[dspAlu.scala 54:51]
  wire [8:0] _T_110; // @[dspAlu.scala 54:68]
  wire [9:0] _T_111; // @[dspAlu.scala 54:57]
  wire [8:0] _T_112; // @[dspAlu.scala 54:57]
  wire [8:0] _T_113; // @[dspAlu.scala 54:57]
  wire [8:0] _T_114; // @[dspAlu.scala 54:76]
  wire [24:0] _T_116; // @[Cat.scala 30:58]
  wire [9:0] _T_117; // @[dspAlu.scala 55:49]
  wire [8:0] _T_118; // @[dspAlu.scala 55:49]
  wire [24:0] _T_120; // @[Cat.scala 30:58]
  wire [24:0] _T_142; // @[Mux.scala 46:16]
  wire [24:0] _T_144; // @[Mux.scala 46:16]
  wire [24:0] _T_146; // @[Mux.scala 46:16]
  wire [24:0] _T_148; // @[Mux.scala 46:16]
  wire [24:0] _T_150; // @[Mux.scala 46:16]
  wire [24:0] add3; // @[Mux.scala 46:16]
  wire [8:0] _T_153; // @[dspAlu.scala 66:51]
  wire [8:0] _T_154; // @[dspAlu.scala 66:68]
  wire [9:0] _T_155; // @[dspAlu.scala 66:57]
  wire [8:0] _T_156; // @[dspAlu.scala 66:57]
  wire [8:0] _T_157; // @[dspAlu.scala 66:57]
  wire [8:0] _T_158; // @[dspAlu.scala 66:76]
  wire [32:0] _T_160; // @[Cat.scala 30:58]
  wire [9:0] _T_161; // @[dspAlu.scala 67:49]
  wire [8:0] _T_162; // @[dspAlu.scala 67:49]
  wire [32:0] _T_164; // @[Cat.scala 30:58]
  wire [32:0] _T_186; // @[Mux.scala 46:16]
  wire [32:0] _T_188; // @[Mux.scala 46:16]
  wire [32:0] _T_190; // @[Mux.scala 46:16]
  wire [32:0] _T_192; // @[Mux.scala 46:16]
  wire [32:0] _T_194; // @[Mux.scala 46:16]
  wire [32:0] add4; // @[Mux.scala 46:16]
  wire  _T_198; // @[dspAlu.scala 78:17]
  wire  _T_199; // @[dspAlu.scala 79:16]
  wire  _T_200; // @[dspAlu.scala 79:33]
  wire  _T_201; // @[dspAlu.scala 79:20]
  wire  _T_202; // @[dspAlu.scala 79:44]
  wire  _T_204; // @[dspAlu.scala 79:48]
  wire  _T_205; // @[dspAlu.scala 79:37]
  wire  _T_208; // @[dspAlu.scala 80:20]
  wire [7:0] _GEN_0; // @[dspAlu.scala 80:28]
  wire [8:0] _GEN_1; // @[dspAlu.scala 79:65]
  wire  _T_211; // @[dspAlu.scala 84:22]
  wire  _T_212; // @[dspAlu.scala 85:11]
  wire [8:0] _GEN_2; // @[dspAlu.scala 85:23]
  wire [8:0] _GEN_3; // @[dspAlu.scala 84:34]
  wire [8:0] _GEN_4; // @[dspAlu.scala 78:28]
  wire  _T_221; // @[dspAlu.scala 90:16]
  wire  _T_222; // @[dspAlu.scala 90:34]
  wire  _T_223; // @[dspAlu.scala 90:21]
  wire  _T_224; // @[dspAlu.scala 90:46]
  wire  _T_226; // @[dspAlu.scala 90:51]
  wire  _T_227; // @[dspAlu.scala 90:39]
  wire  _T_230; // @[dspAlu.scala 91:21]
  wire [16:0] _GEN_5; // @[dspAlu.scala 91:29]
  wire [16:0] _GEN_6; // @[dspAlu.scala 90:69]
  wire  _T_238; // @[dspAlu.scala 96:11]
  wire [16:0] _GEN_7; // @[dspAlu.scala 96:24]
  wire [16:0] _GEN_8; // @[dspAlu.scala 95:34]
  wire [16:0] _GEN_9; // @[dspAlu.scala 89:28]
  wire  _T_247; // @[dspAlu.scala 101:16]
  wire  _T_248; // @[dspAlu.scala 101:34]
  wire  _T_249; // @[dspAlu.scala 101:21]
  wire  _T_250; // @[dspAlu.scala 101:46]
  wire  _T_252; // @[dspAlu.scala 101:51]
  wire  _T_253; // @[dspAlu.scala 101:39]
  wire  _T_256; // @[dspAlu.scala 102:21]
  wire [24:0] _GEN_10; // @[dspAlu.scala 102:29]
  wire [24:0] _GEN_11; // @[dspAlu.scala 101:69]
  wire  _T_264; // @[dspAlu.scala 107:11]
  wire [24:0] _GEN_12; // @[dspAlu.scala 107:24]
  wire [24:0] _GEN_13; // @[dspAlu.scala 106:34]
  wire [24:0] _GEN_14; // @[dspAlu.scala 100:28]
  wire  _T_273; // @[dspAlu.scala 112:16]
  wire  _T_274; // @[dspAlu.scala 112:34]
  wire  _T_275; // @[dspAlu.scala 112:21]
  wire  _T_276; // @[dspAlu.scala 112:46]
  wire  _T_278; // @[dspAlu.scala 112:51]
  wire  _T_279; // @[dspAlu.scala 112:39]
  wire  _T_282; // @[dspAlu.scala 113:21]
  wire [32:0] _GEN_15; // @[dspAlu.scala 113:29]
  wire [32:0] _GEN_16; // @[dspAlu.scala 112:69]
  wire  _T_290; // @[dspAlu.scala 118:11]
  wire [32:0] _GEN_17; // @[dspAlu.scala 118:24]
  wire [32:0] _GEN_18; // @[dspAlu.scala 117:34]
  wire [32:0] _GEN_19; // @[dspAlu.scala 111:28]
  wire [7:0] _T_297; // @[dspAlu.scala 122:44]
  wire [7:0] _T_298; // @[dspAlu.scala 122:56]
  wire [7:0] _T_299; // @[dspAlu.scala 122:68]
  wire [7:0] _T_300; // @[dspAlu.scala 122:79]
  wire [15:0] _T_301; // @[Cat.scala 30:58]
  wire [15:0] _T_302; // @[Cat.scala 30:58]
  wire [31:0] _T_303; // @[Cat.scala 30:58]
  wire [7:0] _T_304; // @[dspAlu.scala 123:46]
  wire [7:0] _T_305; // @[dspAlu.scala 123:60]
  wire [7:0] _T_306; // @[dspAlu.scala 123:74]
  wire [7:0] _T_307; // @[dspAlu.scala 123:87]
  wire [15:0] _T_308; // @[Cat.scala 30:58]
  wire [15:0] _T_309; // @[Cat.scala 30:58]
  wire [31:0] _T_310; // @[Cat.scala 30:58]
  wire [7:0] _T_311; // @[dspAlu.scala 124:44]
  wire [7:0] _T_312; // @[dspAlu.scala 124:56]
  wire [7:0] _T_313; // @[dspAlu.scala 124:68]
  wire [7:0] _T_314; // @[dspAlu.scala 124:79]
  wire [15:0] _T_315; // @[Cat.scala 30:58]
  wire [15:0] _T_316; // @[Cat.scala 30:58]
  wire [31:0] _T_317; // @[Cat.scala 30:58]
  wire [32:0] _T_340; // @[Mux.scala 46:16]
  wire [32:0] _T_342; // @[Mux.scala 46:16]
  wire [32:0] _T_344; // @[Mux.scala 46:16]
  wire [32:0] _T_346; // @[Mux.scala 46:16]
  wire [32:0] _T_348; // @[Mux.scala 46:16]
  wire [32:0] _T_350; // @[Mux.scala 46:16]
  assign _T_7 = io_in_rs1[7:0]; // @[dspAlu.scala 18:40]
  assign rs1_7d0 = {1'h0,_T_7}; // @[Cat.scala 30:58]
  assign _T_9 = io_in_rs2[7:0]; // @[dspAlu.scala 19:40]
  assign rs2_7d0 = {1'h0,_T_9}; // @[Cat.scala 30:58]
  assign _T_11 = io_in_rs1[15:8]; // @[dspAlu.scala 20:40]
  assign rs1_15d8 = {1'h0,_T_11}; // @[Cat.scala 30:58]
  assign _T_13 = io_in_rs2[15:8]; // @[dspAlu.scala 21:40]
  assign rs2_15d8 = {1'h0,_T_13}; // @[Cat.scala 30:58]
  assign _T_15 = io_in_rs1[23:16]; // @[dspAlu.scala 22:40]
  assign rs1_23d16 = {1'h0,_T_15}; // @[Cat.scala 30:58]
  assign _T_17 = io_in_rs2[23:16]; // @[dspAlu.scala 23:40]
  assign rs2_23d16 = {1'h0,_T_17}; // @[Cat.scala 30:58]
  assign _T_19 = io_in_rs1[31:24]; // @[dspAlu.scala 24:40]
  assign rs1_31d24 = {1'h0,_T_19}; // @[Cat.scala 30:58]
  assign _T_21 = io_in_rs2[31:24]; // @[dspAlu.scala 25:40]
  assign rs2_31d24 = {1'h0,_T_21}; // @[Cat.scala 30:58]
  assign _T_33 = $signed(rs1_7d0); // @[dspAlu.scala 29:45]
  assign _T_34 = $signed(rs2_7d0); // @[dspAlu.scala 29:60]
  assign _T_35 = $signed(_T_33) + $signed(_T_34); // @[dspAlu.scala 29:51]
  assign _T_36 = _T_35[8:0]; // @[dspAlu.scala 29:51]
  assign _T_37 = $signed(_T_36); // @[dspAlu.scala 29:51]
  assign _T_38 = $unsigned(_T_37); // @[dspAlu.scala 29:68]
  assign _T_39 = rs1_7d0 + rs2_7d0; // @[dspAlu.scala 30:44]
  assign _T_40 = _T_39[8:0]; // @[dspAlu.scala 30:44]
  assign _T_53 = 7'h5 == io_opcode; // @[Mux.scala 46:19]
  assign _T_54 = _T_53 ? _T_40 : 9'h0; // @[Mux.scala 46:16]
  assign _T_55 = 7'h4 == io_opcode; // @[Mux.scala 46:19]
  assign _T_56 = _T_55 ? _T_40 : _T_54; // @[Mux.scala 46:16]
  assign _T_57 = 7'h3 == io_opcode; // @[Mux.scala 46:19]
  assign _T_58 = _T_57 ? _T_40 : _T_56; // @[Mux.scala 46:16]
  assign _T_59 = 7'h2 == io_opcode; // @[Mux.scala 46:19]
  assign _T_60 = _T_59 ? _T_38 : _T_58; // @[Mux.scala 46:16]
  assign _T_61 = 7'h1 == io_opcode; // @[Mux.scala 46:19]
  assign _T_62 = _T_61 ? _T_40 : _T_60; // @[Mux.scala 46:16]
  assign _T_63 = 7'h0 == io_opcode; // @[Mux.scala 46:19]
  assign add1 = _T_63 ? _T_38 : _T_62; // @[Mux.scala 46:16]
  assign _T_65 = $signed(rs1_15d8); // @[dspAlu.scala 41:50]
  assign _T_66 = $signed(rs2_15d8); // @[dspAlu.scala 41:66]
  assign _T_67 = $signed(_T_65) + $signed(_T_66); // @[dspAlu.scala 41:56]
  assign _T_68 = _T_67[8:0]; // @[dspAlu.scala 41:56]
  assign _T_69 = $signed(_T_68); // @[dspAlu.scala 41:56]
  assign _T_70 = $unsigned(_T_69); // @[dspAlu.scala 41:74]
  assign _T_72 = {_T_70,8'h0}; // @[Cat.scala 30:58]
  assign _T_73 = rs1_15d8 + rs2_15d8; // @[dspAlu.scala 42:48]
  assign _T_74 = _T_73[8:0]; // @[dspAlu.scala 42:48]
  assign _T_76 = {_T_74,8'h0}; // @[Cat.scala 30:58]
  assign _T_98 = _T_53 ? _T_76 : 17'h0; // @[Mux.scala 46:16]
  assign _T_100 = _T_55 ? _T_76 : _T_98; // @[Mux.scala 46:16]
  assign _T_102 = _T_57 ? _T_76 : _T_100; // @[Mux.scala 46:16]
  assign _T_104 = _T_59 ? _T_72 : _T_102; // @[Mux.scala 46:16]
  assign _T_106 = _T_61 ? _T_76 : _T_104; // @[Mux.scala 46:16]
  assign add2 = _T_63 ? _T_72 : _T_106; // @[Mux.scala 46:16]
  assign _T_109 = $signed(rs1_23d16); // @[dspAlu.scala 54:51]
  assign _T_110 = $signed(rs2_23d16); // @[dspAlu.scala 54:68]
  assign _T_111 = $signed(_T_109) + $signed(_T_110); // @[dspAlu.scala 54:57]
  assign _T_112 = _T_111[8:0]; // @[dspAlu.scala 54:57]
  assign _T_113 = $signed(_T_112); // @[dspAlu.scala 54:57]
  assign _T_114 = $unsigned(_T_113); // @[dspAlu.scala 54:76]
  assign _T_116 = {_T_114,16'h0}; // @[Cat.scala 30:58]
  assign _T_117 = rs1_23d16 + rs2_23d16; // @[dspAlu.scala 55:49]
  assign _T_118 = _T_117[8:0]; // @[dspAlu.scala 55:49]
  assign _T_120 = {_T_118,16'h0}; // @[Cat.scala 30:58]
  assign _T_142 = _T_53 ? _T_120 : 25'h0; // @[Mux.scala 46:16]
  assign _T_144 = _T_55 ? _T_120 : _T_142; // @[Mux.scala 46:16]
  assign _T_146 = _T_57 ? _T_120 : _T_144; // @[Mux.scala 46:16]
  assign _T_148 = _T_59 ? _T_116 : _T_146; // @[Mux.scala 46:16]
  assign _T_150 = _T_61 ? _T_120 : _T_148; // @[Mux.scala 46:16]
  assign add3 = _T_63 ? _T_116 : _T_150; // @[Mux.scala 46:16]
  assign _T_153 = $signed(rs1_31d24); // @[dspAlu.scala 66:51]
  assign _T_154 = $signed(rs2_31d24); // @[dspAlu.scala 66:68]
  assign _T_155 = $signed(_T_153) + $signed(_T_154); // @[dspAlu.scala 66:57]
  assign _T_156 = _T_155[8:0]; // @[dspAlu.scala 66:57]
  assign _T_157 = $signed(_T_156); // @[dspAlu.scala 66:57]
  assign _T_158 = $unsigned(_T_157); // @[dspAlu.scala 66:76]
  assign _T_160 = {_T_158,24'h0}; // @[Cat.scala 30:58]
  assign _T_161 = rs1_31d24 + rs2_31d24; // @[dspAlu.scala 67:49]
  assign _T_162 = _T_161[8:0]; // @[dspAlu.scala 67:49]
  assign _T_164 = {_T_162,24'h0}; // @[Cat.scala 30:58]
  assign _T_186 = _T_53 ? _T_164 : 33'h0; // @[Mux.scala 46:16]
  assign _T_188 = _T_55 ? _T_164 : _T_186; // @[Mux.scala 46:16]
  assign _T_190 = _T_57 ? _T_164 : _T_188; // @[Mux.scala 46:16]
  assign _T_192 = _T_59 ? _T_160 : _T_190; // @[Mux.scala 46:16]
  assign _T_194 = _T_61 ? _T_164 : _T_192; // @[Mux.scala 46:16]
  assign add4 = _T_63 ? _T_160 : _T_194; // @[Mux.scala 46:16]
  assign _T_198 = io_opcode == 7'h1; // @[dspAlu.scala 78:17]
  assign _T_199 = io_in_rs1[7]; // @[dspAlu.scala 79:16]
  assign _T_200 = io_in_rs2[7]; // @[dspAlu.scala 79:33]
  assign _T_201 = _T_199 == _T_200; // @[dspAlu.scala 79:20]
  assign _T_202 = add1[7]; // @[dspAlu.scala 79:44]
  assign _T_204 = _T_202 != _T_199; // @[dspAlu.scala 79:48]
  assign _T_205 = _T_201 & _T_204; // @[dspAlu.scala 79:37]
  assign _T_208 = _T_199 == 1'h0; // @[dspAlu.scala 80:20]
  assign _GEN_0 = _T_208 ? 8'h7f : 8'h80; // @[dspAlu.scala 80:28]
  assign _GEN_1 = _T_205 ? {{1'd0}, _GEN_0} : add1_r; // @[dspAlu.scala 79:65]
  assign _T_211 = io_opcode == 7'h4; // @[dspAlu.scala 84:22]
  assign _T_212 = add1[8]; // @[dspAlu.scala 85:11]
  assign _GEN_2 = _T_212 ? 9'hff : add1_r; // @[dspAlu.scala 85:23]
  assign _GEN_3 = _T_211 ? _GEN_2 : add1; // @[dspAlu.scala 84:34]
  assign _GEN_4 = _T_198 ? _GEN_1 : _GEN_3; // @[dspAlu.scala 78:28]
  assign _T_221 = io_in_rs1[15]; // @[dspAlu.scala 90:16]
  assign _T_222 = io_in_rs2[15]; // @[dspAlu.scala 90:34]
  assign _T_223 = _T_221 == _T_222; // @[dspAlu.scala 90:21]
  assign _T_224 = add2[15]; // @[dspAlu.scala 90:46]
  assign _T_226 = _T_224 != _T_221; // @[dspAlu.scala 90:51]
  assign _T_227 = _T_223 & _T_226; // @[dspAlu.scala 90:39]
  assign _T_230 = _T_221 == 1'h0; // @[dspAlu.scala 91:21]
  assign _GEN_5 = _T_230 ? 17'h7f00 : 17'h8000; // @[dspAlu.scala 91:29]
  assign _GEN_6 = _T_227 ? _GEN_5 : add2_r; // @[dspAlu.scala 90:69]
  assign _T_238 = add2[16]; // @[dspAlu.scala 96:11]
  assign _GEN_7 = _T_238 ? 17'hff00 : add2_r; // @[dspAlu.scala 96:24]
  assign _GEN_8 = _T_211 ? _GEN_7 : add2; // @[dspAlu.scala 95:34]
  assign _GEN_9 = _T_198 ? _GEN_6 : _GEN_8; // @[dspAlu.scala 89:28]
  assign _T_247 = io_in_rs1[23]; // @[dspAlu.scala 101:16]
  assign _T_248 = io_in_rs2[23]; // @[dspAlu.scala 101:34]
  assign _T_249 = _T_247 == _T_248; // @[dspAlu.scala 101:21]
  assign _T_250 = add3[23]; // @[dspAlu.scala 101:46]
  assign _T_252 = _T_250 != _T_247; // @[dspAlu.scala 101:51]
  assign _T_253 = _T_249 & _T_252; // @[dspAlu.scala 101:39]
  assign _T_256 = _T_247 == 1'h0; // @[dspAlu.scala 102:21]
  assign _GEN_10 = _T_256 ? 25'h7f0000 : 25'h800000; // @[dspAlu.scala 102:29]
  assign _GEN_11 = _T_253 ? _GEN_10 : add3_r; // @[dspAlu.scala 101:69]
  assign _T_264 = add3[24]; // @[dspAlu.scala 107:11]
  assign _GEN_12 = _T_264 ? 25'hff0000 : add3_r; // @[dspAlu.scala 107:24]
  assign _GEN_13 = _T_211 ? _GEN_12 : add3; // @[dspAlu.scala 106:34]
  assign _GEN_14 = _T_198 ? _GEN_11 : _GEN_13; // @[dspAlu.scala 100:28]
  assign _T_273 = io_in_rs1[31]; // @[dspAlu.scala 112:16]
  assign _T_274 = io_in_rs2[31]; // @[dspAlu.scala 112:34]
  assign _T_275 = _T_273 == _T_274; // @[dspAlu.scala 112:21]
  assign _T_276 = add4[31]; // @[dspAlu.scala 112:46]
  assign _T_278 = _T_276 != _T_273; // @[dspAlu.scala 112:51]
  assign _T_279 = _T_275 & _T_278; // @[dspAlu.scala 112:39]
  assign _T_282 = _T_273 == 1'h0; // @[dspAlu.scala 113:21]
  assign _GEN_15 = _T_282 ? 33'h7f000000 : 33'h80000000; // @[dspAlu.scala 113:29]
  assign _GEN_16 = _T_279 ? _GEN_15 : add4_r; // @[dspAlu.scala 112:69]
  assign _T_290 = add4[32]; // @[dspAlu.scala 118:11]
  assign _GEN_17 = _T_290 ? 33'hff000000 : add4_r; // @[dspAlu.scala 118:24]
  assign _GEN_18 = _T_211 ? _GEN_17 : add4; // @[dspAlu.scala 117:34]
  assign _GEN_19 = _T_198 ? _GEN_16 : _GEN_18; // @[dspAlu.scala 111:28]
  assign _T_297 = add4[31:24]; // @[dspAlu.scala 122:44]
  assign _T_298 = add3[23:16]; // @[dspAlu.scala 122:56]
  assign _T_299 = add2[15:8]; // @[dspAlu.scala 122:68]
  assign _T_300 = add1[7:0]; // @[dspAlu.scala 122:79]
  assign _T_301 = {_T_299,_T_300}; // @[Cat.scala 30:58]
  assign _T_302 = {_T_297,_T_298}; // @[Cat.scala 30:58]
  assign _T_303 = {_T_302,_T_301}; // @[Cat.scala 30:58]
  assign _T_304 = add4_r[31:24]; // @[dspAlu.scala 123:46]
  assign _T_305 = add3_r[23:16]; // @[dspAlu.scala 123:60]
  assign _T_306 = add2_r[15:8]; // @[dspAlu.scala 123:74]
  assign _T_307 = add1_r[7:0]; // @[dspAlu.scala 123:87]
  assign _T_308 = {_T_306,_T_307}; // @[Cat.scala 30:58]
  assign _T_309 = {_T_304,_T_305}; // @[Cat.scala 30:58]
  assign _T_310 = {_T_309,_T_308}; // @[Cat.scala 30:58]
  assign _T_311 = add4[32:25]; // @[dspAlu.scala 124:44]
  assign _T_312 = add3[24:17]; // @[dspAlu.scala 124:56]
  assign _T_313 = add2[16:9]; // @[dspAlu.scala 124:68]
  assign _T_314 = add1[8:1]; // @[dspAlu.scala 124:79]
  assign _T_315 = {_T_313,_T_314}; // @[Cat.scala 30:58]
  assign _T_316 = {_T_311,_T_312}; // @[Cat.scala 30:58]
  assign _T_317 = {_T_316,_T_315}; // @[Cat.scala 30:58]
  assign _T_340 = _T_53 ? {{1'd0}, _T_317} : 33'h0; // @[Mux.scala 46:16]
  assign _T_342 = _T_55 ? {{1'd0}, _T_310} : _T_340; // @[Mux.scala 46:16]
  assign _T_344 = _T_57 ? {{1'd0}, _T_303} : _T_342; // @[Mux.scala 46:16]
  assign _T_346 = _T_59 ? {{1'd0}, _T_317} : _T_344; // @[Mux.scala 46:16]
  assign _T_348 = _T_61 ? {{1'd0}, _T_310} : _T_346; // @[Mux.scala 46:16]
  assign _T_350 = _T_63 ? {{1'd0}, _T_303} : _T_348; // @[Mux.scala 46:16]
  assign io_out = _T_350[31:0];
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifndef verilator
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{$random}};
  add1_r = _RAND_0[8:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{$random}};
  add2_r = _RAND_1[16:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{$random}};
  add3_r = _RAND_2[24:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {2{$random}};
  add4_r = _RAND_3[32:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      add1_r <= 9'h0;
    end else begin
      if (_T_198) begin
        if (_T_205) begin
          add1_r <= {{1'd0}, _GEN_0};
        end
      end else begin
        if (_T_211) begin
          if (_T_212) begin
            add1_r <= 9'hff;
          end
        end else begin
          if (_T_63) begin
            add1_r <= _T_38;
          end else begin
            if (_T_61) begin
              add1_r <= _T_40;
            end else begin
              if (_T_59) begin
                add1_r <= _T_38;
              end else begin
                if (_T_57) begin
                  add1_r <= _T_40;
                end else begin
                  if (_T_55) begin
                    add1_r <= _T_40;
                  end else begin
                    if (_T_53) begin
                      add1_r <= _T_40;
                    end else begin
                      add1_r <= 9'h0;
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    if (reset) begin
      add2_r <= 17'h0;
    end else begin
      if (_T_198) begin
        if (_T_227) begin
          if (_T_230) begin
            add2_r <= 17'h7f00;
          end else begin
            add2_r <= 17'h8000;
          end
        end
      end else begin
        if (_T_211) begin
          if (_T_238) begin
            add2_r <= 17'hff00;
          end
        end else begin
          if (_T_63) begin
            add2_r <= _T_72;
          end else begin
            if (_T_61) begin
              add2_r <= _T_76;
            end else begin
              if (_T_59) begin
                add2_r <= _T_72;
              end else begin
                if (_T_57) begin
                  add2_r <= _T_76;
                end else begin
                  if (_T_55) begin
                    add2_r <= _T_76;
                  end else begin
                    if (_T_53) begin
                      add2_r <= _T_76;
                    end else begin
                      add2_r <= 17'h0;
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    if (reset) begin
      add3_r <= 25'h0;
    end else begin
      if (_T_198) begin
        if (_T_253) begin
          if (_T_256) begin
            add3_r <= 25'h7f0000;
          end else begin
            add3_r <= 25'h800000;
          end
        end
      end else begin
        if (_T_211) begin
          if (_T_264) begin
            add3_r <= 25'hff0000;
          end
        end else begin
          if (_T_63) begin
            add3_r <= _T_116;
          end else begin
            if (_T_61) begin
              add3_r <= _T_120;
            end else begin
              if (_T_59) begin
                add3_r <= _T_116;
              end else begin
                if (_T_57) begin
                  add3_r <= _T_120;
                end else begin
                  if (_T_55) begin
                    add3_r <= _T_120;
                  end else begin
                    if (_T_53) begin
                      add3_r <= _T_120;
                    end else begin
                      add3_r <= 25'h0;
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    if (reset) begin
      add4_r <= 33'h0;
    end else begin
      if (_T_198) begin
        if (_T_279) begin
          if (_T_282) begin
            add4_r <= 33'h7f000000;
          end else begin
            add4_r <= 33'h80000000;
          end
        end
      end else begin
        if (_T_211) begin
          if (_T_290) begin
            add4_r <= 33'hff000000;
          end
        end else begin
          if (_T_63) begin
            add4_r <= _T_160;
          end else begin
            if (_T_61) begin
              add4_r <= _T_164;
            end else begin
              if (_T_59) begin
                add4_r <= _T_160;
              end else begin
                if (_T_57) begin
                  add4_r <= _T_164;
                end else begin
                  if (_T_55) begin
                    add4_r <= _T_164;
                  end else begin
                    if (_T_53) begin
                      add4_r <= _T_164;
                    end else begin
                      add4_r <= 33'h0;
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
  end
endmodule
