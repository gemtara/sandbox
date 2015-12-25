#include <iostream>
#include "machine.h"
#include "data.h"

using namespace std;
using namespace Machine;

int main() {
    machine *machine1 = new machine();
    cout<< "Hello World! Richard" << std::endl;
    int gVariable = 3;
    gVariable = 77;
    cout<< gVariable<<endl;
    machine *machineP= machine1;
    machine1->setMachineId(&machine1,10);
    cout<< machine1->Id<<endl;
    cout<< machineP->Id<<endl;
    machineP->setMachineId(&machineP,25);
    cout<< machine1->Id<<endl;
    cout<< machineP->Id<<endl;
    delete machine1;
}   
