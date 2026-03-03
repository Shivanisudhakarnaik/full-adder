#include "orGate.h"

orModule::orModule(sc_module_name name)
    : sc_module(name)
{
    SC_METHOD(computeOr);
    sensitive << p_a_or << p_b_or;
}

void orModule::computeOr()
{
    p_y_or.write(p_a_or.read() | p_b_or.read());
}