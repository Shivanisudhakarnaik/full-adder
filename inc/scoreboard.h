/**
 *  @file   : Scoreboard.h
 *  @author : Shivani Sudhakar Naik
 *  @brief  : Scoreboard module for Full Adder.
 */

#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <systemc>

/**
 *  @class  : scoreboard
 *  @brief  : Verifies Full Adder output against expected result.
 *
 *  Compares DUT outputs with computed reference values.
 */
class scoreboard : public sc_core::sc_module
{
public:

    // Inputs from DUT and Driver
    sc_core::sc_in<bool> p_a;
    sc_core::sc_in<bool> p_b;
    sc_core::sc_in<bool> p_cin;
    sc_core::sc_in<bool> p_sum;
    sc_core::sc_in<bool> p_carry;

    SC_HAS_PROCESS(scoreboard);

    scoreboard(sc_core::sc_module_name name);

private:

    void checkResult();
};

#endif