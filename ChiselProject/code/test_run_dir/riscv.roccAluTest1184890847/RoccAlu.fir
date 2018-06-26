;buildInfoPackage: chisel3, version: 3.0.2, scalaVersion: 2.11.11, sbtVersion: 0.13.16, builtAtString: 2018-02-05 23:25:31.873, builtAtMillis: 1517873131873
circuit RoccAlu : 
  module RoccAlu : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip func : UInt<7>, flip data_rs1 : UInt<32>, flip data_rs2 : UInt<32>, flip opcode : UInt<7>, out : UInt<32>}
    
    node r1 = bits(io.data_rs1, 15, 0) @[RoccAlu.scala 17:23]
    node r2 = bits(io.data_rs2, 31, 16) @[RoccAlu.scala 18:23]
    node _T_7 = cat(r1, r2) @[Cat.scala 30:58]
    io.out <= _T_7 @[RoccAlu.scala 19:9]
    
