/**
 *  @file   : xorGate.h
 *  @author : Shivani Sudhakar Naik
 *  @brief  : 2-input XOR gate module.
 */

#ifndef XOR_GATE_H
#define XOR_GATE_H

#include <systemc.h>

/**
 *  @class  : xorModule
 *  @brief  : Performs logical XOR operation on two inputs.
 */
class xorModule : public sc_module
{
public:

    // Input ports
    sc_in<bool> p_a_xor;
    sc_in<bool> p_b_xor;

    // Output port
    sc_out<bool> p_y_xor;

    SC_HAS_PROCESS(xorModule);

    /// Constructor
    xorModule(sc_module_name name);

private:

    /// XOR operation method
    void computeXor();
};

#endif