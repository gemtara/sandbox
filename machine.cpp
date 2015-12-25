#include "machine.h"
using namespace std;
using namespace Machine;
machine::machine() 
{
    cout<<"new"<<endl;
};

machine::~machine() 
{
    cout<<"del"<<endl;
};

int machine::setMachineId(machine **machine,int id)
{
    (*machine)->Id=id;
    return 0;
};