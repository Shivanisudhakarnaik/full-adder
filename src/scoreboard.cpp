#include "Scoreboard.h"
#include <iostream>

scoreboard::scoreboard(sc_core::sc_module_name name)
    : sc_module(name)
{
    SC_METHOD(checkResult);

    // Trigger when outputs change
    sensitive << p_sum << p_carry;
}

void scoreboard::checkResult()
{
    bool expectedSum =
        p_a.read() ^ p_b.read() ^ p_cin.read();

    bool expectedCarry =
        (p_a.read() & p_b.read()) |
        (p_b.read() & p_cin.read()) |
        (p_a.read() & p_cin.read());

    if (expectedSum == p_sum.read() &&
        expectedCarry == p_carry.read())
    {
        std::cout << "Time: " << sc_core::sc_time_stamp()
                  << " | PASS"
                  << std::endl;
    }
    else
    {
        std::cout << "Time: " << sc_core::sc_time_stamp()
                  << " | FAIL"
                  << std::endl;
    }
}