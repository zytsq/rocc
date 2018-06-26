circuit RoccAlu : @[:@2.0]
  module RoccAlu : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_func : UInt<7> @[:@6.4]
    input io_data_rs1 : UInt<32> @[:@6.4]
    input io_data_rs2 : UInt<32> @[:@6.4]
    input io_opcode : UInt<7> @[:@6.4]
    output io_out : UInt<32> @[:@6.4]
  
    node r1 = bits(io_data_rs1, 15, 0) @[RoccAlu.scala 17:23:@8.4]
    node r2 = bits(io_data_rs2, 31, 16) @[RoccAlu.scala 18:23:@9.4]
    node _T_7 = cat(r1, r2) @[Cat.scala 30:58:@10.4]
    io_out <= _T_7
