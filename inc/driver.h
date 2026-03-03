/**
 *  @file   : Driver.h
 *  @author : Shivani Sudhakar Naik
 *  @brief  : Driver module for Full Adder.
 */
#pragma once

#include <systemc.h>

/**
 *  @class  : Driver
 *  @brief  : Generates stimulus for Full Adder inputs.
 *
 *  Drives all 8 input combinations sequentially.
 */

class driver : public sc_core::sc_module{

    public:

// all ports
    sc_core::sc_out<bool>  p_a;
    sc_core::sc_out<bool>  p_b;
    sc_core::sc_out<bool>  p_c;

    SC_CTOR(driver);

    void driverFunction();
};