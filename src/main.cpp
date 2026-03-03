#include <systemc.h>
#include <iostream>
#include "fullAdder.h"
#include "driver.h"
#include "Monitor.h"
#include "scoreboard.h"

int sc_main(int argc, char* argv[])
{
    // Signals
    sc_signal<bool> sig_a;
    sc_signal<bool> sig_b;
    sc_signal<bool> sig_cin;
    sc_signal<bool> sig_sum;
    sc_signal<bool> sig_carry;

    // DUT
    fullAdderModule fullAdderObj("fullAdderObj");

    fullAdderObj.p_a_full(sig_a);
    fullAdderObj.p_b_full(sig_b);
    fullAdderObj.p_c_full(sig_cin);
    fullAdderObj.p_sum_full(sig_sum);
    fullAdderObj.p_carry_full(sig_carry);

    // Driver
    driver drv("drv");
    drv.p_a(sig_a);
    drv.p_b(sig_b);
    drv.p_c(sig_cin);

    // Monitor
Monitor mon("mon");

mon.p_a(sig_a);
mon.p_b(sig_b);
mon.p_c(sig_cin);
mon.p_sum(sig_sum);
mon.p_carry(sig_carry);

//scoreboard
scoreboard scoreobj("scoreobj");
    scoreobj.p_a(sig_a);
    scoreobj.p_b(sig_b);
    scoreobj.p_cin(sig_cin);
    scoreobj.p_sum(sig_sum);
    scoreobj.p_carry(sig_carry);


    // VCD Trace File
    sc_trace_file* tf = sc_create_vcd_trace_file("ams_trace");

    sc_trace(tf, sig_a,     "A");
    sc_trace(tf, sig_b,     "B");
    sc_trace(tf, sig_cin,   "Cin");
    sc_trace(tf, sig_sum,   "Sum");
    sc_trace(tf, sig_carry, "Carry");

 sc_start(10, SC_NS);

    sc_close_vcd_trace_file(tf);


    return 0;
}