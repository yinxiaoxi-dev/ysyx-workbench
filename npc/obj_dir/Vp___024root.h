// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vp.h for the primary calling header

#ifndef VERILATED_VP___024ROOT_H_
#define VERILATED_VP___024ROOT_H_  // guard

#include "verilated.h"

class Vp__Syms;

class Vp___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);
    VL_OUT8(g,0,0);
    VL_OUT8(k,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vp__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vp___024root(Vp__Syms* symsp, const char* v__name);
    ~Vp___024root();
    VL_UNCOPYABLE(Vp___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
