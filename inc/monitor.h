/**
 *  @file   : Monitor.h
 *  @author : Shivani Sudhakar Naik
 *  @brief  : Monitor module for Full Adder.
 */

#ifndef MONITOR_H
#define MONITOR_H

#include <systemc>

/**
 *  @class  : Monitor
 *  @brief  : Observes and prints Full Adder inputs and outputs.
 *
 *  Passive module that monitors DUT behavior.
 */
class Monitor : public sc_core::sc_module
{
public:
    sc_core::sc_in<bool> p_a;
    sc_core::sc_in<bool> p_b;
    sc_core::sc_in<bool> p_c;
    sc_core::sc_in<bool> p_sum;
    sc_core::sc_in<bool> p_carry;

    SC_HAS_PROCESS(Monitor);

    explicit Monitor(sc_core::sc_module_name name);

private:
    void monitorSignals();
};

#endif