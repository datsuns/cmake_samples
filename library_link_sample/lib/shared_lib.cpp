#include  <iostream>

#include "shared_lib.h"

using std::cout;
using std::endl;

int shared_link_func(int  n){
  cout << "Shared Lib! [" << n << "]" << endl;
  return n * 10;
}

