//#include <stdlib.h>
//#include <iostream>
//#include <verilated.h>
//#include <verilated_vcd_c.h>
//#include "../obj_dir/Vswitch.h"
//
//
//#define MAX_TIME 20
//vluint64_t sim_time = 0;
//
//
//int main(int argc, char** argv, char** env){
//		Vswitch *dut = new Vswitch;
//		Verilated::traceEverOn(true);
//		VerilatedVcdC *m_trace = new VerilatedVcdC;
//		dut->trace(m_trace,5);
//		m_trace->open("waveform.vcd");
//		while(sim_time < MAX_TIME){
//				dut->a^=1;
//				dut->b=0;
//				dut->eval();
//				m_trace->dump(sim_time);
//				sim_time++;
//
//			}
//		m_trace->close();
//		delete dut;
//		exit(EXIT_SUCCESS);
//			
//	}

 #include <stdio.h>
 #include <stdlib.h>
 #include <assert.h>
// #include "Vswitch.h"
 #include "Vp.h"


#include <verilated.h>
#include <verilated_vcd_c.h>
 

 int main(int argc, char** argv){

		printf("Hello, ysyx!\n");

   VerilatedContext* contextp = new VerilatedContext;
   contextp->commandArgs(argc, argv);
//   Vswitch* top = new Vswitch{contextp};
   Vp* top = new Vp{contextp};
   
    VerilatedVcdC* tfp = new VerilatedVcdC;
		contextp->traceEverOn(true);
		top->trace(tfp,0);
		tfp->open("wave.vcd");


   while (!contextp->gotFinish()){
     int a = rand() & 1;
     int b = rand() & 1;
     top->a = a;
     top->b = b;
     top->eval();
     printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, top->f,top->g,top->k);
     assert(top->f == (a ^ b));
		 
		 tfp->dump(contextp->time());
		 contextp->timeInc(1);


//		 usleep(200*1000);
   }
	 top->final();
   delete top;
   delete contextp;
   return 0;

 }
