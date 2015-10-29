#include  <iostream>

#include <lib.h>

using std::cout;
using std::endl;

int  main(void){
  int n = shared_link_func(10);
  cout << "Hello Shared Lib! [" << n << "]" << endl;
  return 0;
}
