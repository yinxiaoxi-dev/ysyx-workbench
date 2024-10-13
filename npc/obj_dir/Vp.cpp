// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vp.h"
#include "Vp__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vp::Vp(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vp__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , g{vlSymsp->TOP.g}
    , k{vlSymsp->TOP.k}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vp::Vp(const char* _vcname__)
    : Vp(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vp::~Vp() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vp___024root___eval_debug_assertions(Vp___024root* vlSelf);
#endif  // VL_DEBUG
void Vp___024root___eval_static(Vp___024root* vlSelf);
void Vp___024root___eval_initial(Vp___024root* vlSelf);
void Vp___024root___eval_settle(Vp___024root* vlSelf);
void Vp___024root___eval(Vp___024root* vlSelf);

void Vp::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vp::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vp___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vp___024root___eval_static(&(vlSymsp->TOP));
        Vp___024root___eval_initial(&(vlSymsp->TOP));
        Vp___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vp___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vp::eventsPending() { return false; }

uint64_t Vp::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vp::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vp___024root___eval_final(Vp___024root* vlSelf);

VL_ATTR_COLD void Vp::final() {
    Vp___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vp::hierName() const { return vlSymsp->name(); }
const char* Vp::modelName() const { return "Vp"; }
unsigned Vp::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vp::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vp___024root__trace_init_top(Vp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vp___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vp___024root*>(voidSelf);
    Vp__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vp___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vp___024root__trace_register(Vp___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vp::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vp::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vp___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
