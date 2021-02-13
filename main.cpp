#include "Proxy.hpp"
#include <iostream>
using namespace std;

class Owner : public Proxy_interface{
public:
  void func (){ cout << "done the owner's works" << endl; }
};

int main (){
  Owner owner;
  owner.func();
  Proxy <Owner> Proxy_for_owner;
  Proxy_for_owner.func();
  
  return 0;
}
