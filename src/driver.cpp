#include "driver.h"
#include <iostream>

driver::driver(sc_module_name name):sc_module(name){
        SC_THREAD(driverFunction);
}

void driver :: driverFunction()
{
    for (int i = 0; i < 8; ++i)
    {
        p_a.write(i & 1);
        p_b.write((i >> 1) & 1);
        p_c.write((i >> 2) & 1);

        wait(1, sc_core::SC_NS);
    }

}