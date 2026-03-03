/**
 *  @file  : andGate.h
 *  @author: shivani sudhakar naik
 *  @date  : 23/02/2026
 */

#ifndef AND_GATE_H  
#define AND_GATE_H

#include <systemc.h>

   /**
 *  @class : andModule
 *  @brief : Implements a 2-input AND gate using SystemC.
 *
 *  Provides method:
 *      - functionAnd() : Performs logical AND operation
 */

class andModule : public sc_module{
 
    public:
    sc_in<bool> p_a_and, p_b_and; // 2 sig
    sc_out<bool> p_y_and; // 1 sig

    SC_HAS_PROCESS(andModule);
    /**
     *  @brief : Constructor for andModule
     *  @param : name - Module instance name
     */

    andModule(sc_module_name name);
     /**
     *  @brief : Performs logical AND operation
     *  @return: void
     */

    void functionAnd();
};

#endif