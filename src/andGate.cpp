#include "andGate.h"

andModule::andModule(sc_module_name name)
    : sc_module(name)
{
    SC_METHOD(functionAnd);
    sensitive << p_a_and << p_b_and;
}

void andModule::functionAnd()
{
    p_y_and.write(p_a_and.read() & p_b_and.read());
}