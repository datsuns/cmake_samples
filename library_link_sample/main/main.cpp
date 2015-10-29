#include  <iostream>

#include <shared_lib.h>
#include <static_lib.h>

using std::cout;
using std::endl;

int  main(void){
  int n;
  n = shared_link_func(10);
  cout << "Hello SHARED Lib! [" << n << "]" << endl;

  n = static_link_func(10);
  cout << "Hello STATIC Lib! [" << n << "]" << endl;
  return 0;
}
