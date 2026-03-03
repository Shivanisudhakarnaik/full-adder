#include "fullAdder.h"

fullAdderModule::fullAdderModule(sc_module_name name)
    : sc_module(name),
      m_halfAdder1("halfAdder1"),
      m_halfAdder2("halfAdder2"),
      m_orGate("orGate")
{
    // First half adder: A + B
    m_halfAdder1.p_a_half(p_a_full);
    m_halfAdder1.p_b_half(p_b_full);
    m_halfAdder1.p_sum_half(sig_sum_half);
    m_halfAdder1.p_carry_half(sig_carry_half1);

    // Second half adder: (A ⊕ B) + Cin
    m_halfAdder2.p_a_half(sig_sum_half);
    m_halfAdder2.p_b_half(p_c_full);
    m_halfAdder2.p_sum_half(p_sum_full);
    m_halfAdder2.p_carry_half(sig_carry_half2);

    // Final carry
    m_orGate.p_a_or(sig_carry_half1);
    m_orGate.p_b_or(sig_carry_half2);
    m_orGate.p_y_or(p_carry_full);
}