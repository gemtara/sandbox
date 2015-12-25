#include<iostream>

namespace Machine
{
  class machine {
      public:
          machine();  
          ~machine();
          int setMachineId(machine **machineObj, int id);
          int Id;
    };
}