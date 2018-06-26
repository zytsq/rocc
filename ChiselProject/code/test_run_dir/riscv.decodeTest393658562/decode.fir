;buildInfoPackage: chisel3, version: 3.0.2, scalaVersion: 2.11.11, sbtVersion: 0.13.16, builtAtString: 2018-02-05 23:25:31.873, builtAtMillis: 1517873131873
circuit decode : 
  module decode : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip func : UInt<7>, flip xd : UInt<1>, flip xs1 : UInt<1>, flip xs2 : UInt<1>, flip opcode : UInt<7>, ctrl_out : UInt<2>}
    
    io.ctrl_out <= UInt<2>("h00") @[decode.scala 30:17]
    node _T_13 = and(io.xd, io.xs1) @[decode.scala 31:13]
    node _T_14 = and(_T_13, io.xs2) @[decode.scala 31:23]
    node _T_15 = eq(io.opcode, UInt<7>("h00")) @[decode.scala 31:46]
    node _T_16 = and(_T_14, _T_15) @[decode.scala 31:33]
    when _T_16 : @[decode.scala 31:62]
      node _T_18 = gt(io.func, UInt<1>("h00")) @[decode.scala 32:22]
      node _T_20 = lt(io.func, UInt<5>("h010")) @[decode.scala 32:46]
      node _T_21 = and(_T_18, _T_20) @[decode.scala 32:28]
      when _T_21 : @[decode.scala 32:52]
        io.ctrl_out <= UInt<2>("h01") @[decode.scala 33:17]
        skip @[decode.scala 32:52]
      node _T_23 = gt(io.func, UInt<4>("h0f")) @[decode.scala 35:22]
      node _T_25 = lt(io.func, UInt<6>("h020")) @[decode.scala 35:47]
      node _T_26 = and(_T_23, _T_25) @[decode.scala 35:29]
      when _T_26 : @[decode.scala 35:53]
        io.ctrl_out <= UInt<2>("h02") @[decode.scala 36:17]
        skip @[decode.scala 35:53]
      node _T_28 = gt(io.func, UInt<5>("h01f")) @[decode.scala 38:22]
      node _T_30 = lt(io.func, UInt<6>("h030")) @[decode.scala 38:47]
      node _T_31 = and(_T_28, _T_30) @[decode.scala 38:29]
      when _T_31 : @[decode.scala 38:53]
        io.ctrl_out <= UInt<2>("h03") @[decode.scala 39:17]
        skip @[decode.scala 38:53]
      skip @[decode.scala 31:62]
    
