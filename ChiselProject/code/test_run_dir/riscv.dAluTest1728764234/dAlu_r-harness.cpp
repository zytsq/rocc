#include "VdAlu_r.h"
#include "verilated.h"
#include "veri_api.h"
#if VM_TRACE
#include "verilated_vcd_c.h"
#endif
#include <iostream>
class dAlu_r_api_t: public sim_api_t<VerilatorDataWrapper*> {
public:
    dAlu_r_api_t(VdAlu_r* _dut) {
        dut = _dut;
        main_time = 0L;
        is_exit = false;
#if VM_TRACE
        tfp = NULL;
#endif
    }
    void init_sim_data() {
        sim_data.inputs.clear();
        sim_data.outputs.clear();
        sim_data.signals.clear();
        sim_data.inputs.push_back(new VerilatorCData(&(dut->io_ctrl_signal)));
        sim_data.inputs.push_back(new VerilatorIData(&(dut->io_data_rs2)));
        sim_data.inputs.push_back(new VerilatorIData(&(dut->io_data_rs1)));
        sim_data.outputs.push_back(new VerilatorIData(&(dut->io_out_32bit_rs2)));
        sim_data.outputs.push_back(new VerilatorIData(&(dut->io_out_32bit_rs1)));
        sim_data.outputs.push_back(new VerilatorSData(&(dut->io_out_16bit_rs2)));
        sim_data.outputs.push_back(new VerilatorSData(&(dut->io_out_16bit_rs1)));
        sim_data.outputs.push_back(new VerilatorCData(&(dut->io_out_8bit2_rs2)));
        sim_data.outputs.push_back(new VerilatorCData(&(dut->io_out_8bit2_rs1)));
        sim_data.outputs.push_back(new VerilatorCData(&(dut->io_out_8bit1_rs2)));
        sim_data.outputs.push_back(new VerilatorCData(&(dut->io_out_8bit1_rs1)));
        sim_data.signals.push_back(new VerilatorCData(&(dut->reset)));
        sim_data.signal_map["dAlu_r.reset"] = 0;
    }
#if VM_TRACE
     void init_dump(VerilatedVcdC* _tfp) { tfp = _tfp; }
#endif
    inline bool exit() { return is_exit; }
    virtual inline double get_time_stamp() {
        return main_time;
    }
private:
    VdAlu_r* dut;
    bool is_exit;
    vluint64_t main_time;
#if VM_TRACE
    VerilatedVcdC* tfp;
#endif
    virtual inline size_t put_value(VerilatorDataWrapper* &sig, uint64_t* data, bool force=false) {
        return sig->put_value(data);
    }
    virtual inline size_t get_value(VerilatorDataWrapper* &sig, uint64_t* data) {
        return sig->get_value(data);
    }
    virtual inline size_t get_chunk(VerilatorDataWrapper* &sig) {
        return sig->get_num_words();
    } 
    virtual inline void reset() {
        dut->reset = 1;
        step();
    }
    virtual inline void start() {
        dut->reset = 0;
    }
    virtual inline void finish() {
        dut->eval();
        is_exit = true;
    }
    virtual inline void step() {
        dut->clock = 0;
        dut->eval();
#if VM_TRACE
        if (tfp) tfp->dump(main_time);
#endif
        main_time++;
        dut->clock = 1;
        dut->eval();
#if VM_TRACE
        if (tfp) tfp->dump(main_time);
#endif
        main_time++;
    }
    virtual inline void update() {
        dut->_eval_settle(dut->__VlSymsp);
    }
};
static dAlu_r_api_t * _Top_api;
double sc_time_stamp () { return _Top_api->get_time_stamp(); }
int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);
    VdAlu_r* top = new VdAlu_r;
    std::string vcdfile = "test_run_dir/riscv.dAluTest1728764234/dAlu_r.vcd";
    std::vector<std::string> args(argv+1, argv+argc);
    std::vector<std::string>::const_iterator it;
    for (it = args.begin() ; it != args.end() ; it++) {
      if (it->find("+waveform=") == 0) vcdfile = it->c_str()+10;
    }
#if VM_TRACE
    Verilated::traceEverOn(true);
    VL_PRINTF("Enabling waves..");
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open(vcdfile.c_str());
#endif
    dAlu_r_api_t api(top);
    _Top_api = &api; /* required for sc_time_stamp() */
    api.init_sim_data();
    api.init_channels();
#if VM_TRACE
    api.init_dump(tfp);
#endif
    while(!api.exit()) api.tick();
#if VM_TRACE
    if (tfp) tfp->close();
    delete tfp;
#endif
    delete top;
    exit(0);
}
