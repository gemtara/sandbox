#include <iostream>
using namespace std;

class machine {
public:
  machine(){
      cout<<"new"<<endl;
  };  
  ~machine() {
      cout<<"del"<<endl;
  };
  
};

int main() {
    machine *machine1 = new machine();
    cout << "Hello World! Richard" << std::endl;
    delete machine1;
}
