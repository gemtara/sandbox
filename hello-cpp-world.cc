#include <iostream>
#include "machine.h"
using namespace std;
using namespace Machine;

int main() {
    machine *machine1 = new machine();
    cout << "Hello World! Richard" << std::endl;
    delete machine1;
}
