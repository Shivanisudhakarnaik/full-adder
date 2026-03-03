/**
 *  @file   : orGate.h
 *  @author : Shivani Sudhakar Naik
 *  @brief  : 2-input OR gate module.
 */

#ifndef OR_GATE_H
#define OR_GATE_H

#include <systemc.h>

/**
 *  @class  : orModule
 *  @brief  : Performs logical OR operation.
 */
class orModule : public sc_module
{
public:

    // Input ports
    sc_in<bool> p_a_or;
    sc_in<bool> p_b_or;

    // Output port
    sc_out<bool> p_y_or;

    SC_HAS_PROCESS(orModule);

    /// Constructor
    orModule(sc_module_name name);

private:

    void computeOr();
};

#endif