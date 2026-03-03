/**
 *  @file   : fullAdder.h
 *  @author : Shivani Sudhakar Naik
 *  @brief  : 1-bit Full Adder module.
 */

#ifndef FULL_ADDER_H
#define FULL_ADDER_H

#include <systemc.h>
#include "halfAdder.h"
#include "orGate.h"

/**
 *  @class  : fullAdderModule
 *  @brief  : Adds three 1-bit inputs and produces Sum and Carry.
 */
class fullAdderModule : public sc_module
{
public:

    // Input ports
    sc_in<bool> p_a_full;
    sc_in<bool> p_b_full;
    sc_in<bool> p_c_full;

    // Output ports
    
    sc_out<bool> p_sum_full;
    sc_out<bool> p_carry_full;

    // Internal signals
    sc_signal<bool> sig_sum_half;
    sc_signal<bool> sig_carry_half1;
    sc_signal<bool> sig_carry_half2;

    // Submodules
    halfAdderModule m_halfAdder1;
    halfAdderModule m_halfAdder2;
    orModule        m_orGate;

    /// Constructor
    fullAdderModule(sc_module_name name);
};

#endif