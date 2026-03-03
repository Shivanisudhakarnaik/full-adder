#include "Monitor.h"
#include <iostream>

Monitor::Monitor(sc_core::sc_module_name name)
    : sc_module(name)
{
    SC_METHOD(monitorSignals);

    sensitive << p_sum << p_carry;
}

void Monitor::monitorSignals()
{
    std::cout << "Time: " << sc_core::sc_time_stamp()
              << " | A=" << p_a.read()
              << " B=" << p_b.read()
              << " Cin=" << p_c.read()
              << " | Sum=" << p_sum.read()
              << " Carry=" << p_carry.read()
              << std::endl;
}