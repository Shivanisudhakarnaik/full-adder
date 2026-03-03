#include "xorGate.h"

xorModule::xorModule(sc_module_name name)
    : sc_module(name)
{
    SC_METHOD(computeXor);
    sensitive << p_a_xor << p_b_xor;
}

void xorModule::computeXor()
{
    p_y_xor.write(p_a_xor.read() ^ p_b_xor.read());
}