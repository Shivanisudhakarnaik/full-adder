/**
 *  @file   : halfAdder.h
 *  @author : Shivani Sudhakar Naik
 *  @brief  : 1-bit Half Adder using AND and XOR gates.
 */

#ifndef HALF_ADDER_H
#define HALF_ADDER_H

#include <systemc.h>
#include "andGate.h"
#include "xorGate.h"

/**
 *  @class  : halfAdderModule
 *  @brief  : Adds two 1-bit inputs and generates Sum and Carry.
 */
class halfAdderModule : public sc_module
{
public:

    // Input ports
    sc_in<bool> p_a_half;
    sc_in<bool> p_b_half;

    // Output ports
    sc_out<bool> p_sum_half;
    sc_out<bool> p_carry_half;

    // Submodules
    andModule m_andGate;
    xorModule m_xorGate;

    /**
     *  @brief Constructor: connects AND and XOR gates.
     */
    halfAdderModule(sc_module_name name);
};

#endif