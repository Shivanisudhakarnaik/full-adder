#include "halfAdder.h"

halfAdderModule::halfAdderModule(sc_module_name name)
    : sc_module(name),
      m_andGate("andGate"),
      m_xorGate("xorGate")
{
    // XOR → Sum
    m_xorGate.p_a_xor(p_a_half);
    m_xorGate.p_b_xor(p_b_half);
    m_xorGate.p_y_xor(p_sum_half);

    // AND → Carry
    m_andGate.p_a_and(p_a_half);
    m_andGate.p_b_and(p_b_half);
    m_andGate.p_y_and(p_carry_half);
}