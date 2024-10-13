// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vp__Syms.h"


VL_ATTR_COLD void Vp___024root__trace_init_sub__TOP__0(Vp___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vp___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->declBit(c+4,"g", false,-1);
    tracep->declBit(c+5,"k", false,-1);
    tracep->pushNamePrefix("p ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"f", false,-1);
    tracep->declBit(c+4,"g", false,-1);
    tracep->declBit(c+5,"k", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vp___024root__trace_init_top(Vp___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vp___024root__trace_init_top\n"); );
    // Body
    Vp___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vp___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vp___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vp___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vp___024root__trace_register(Vp___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vp___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vp___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vp___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vp___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vp___024root__trace_full_sub_0(Vp___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vp___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vp___024root__trace_full_top_0\n"); );
    // Init
    Vp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vp___024root*>(voidSelf);
    Vp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vp___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vp___024root__trace_full_sub_0(Vp___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vp___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->b));
    bufp->fullBit(oldp+3,(vlSelf->f));
    bufp->fullBit(oldp+4,(vlSelf->g));
    bufp->fullBit(oldp+5,(vlSelf->k));
}
