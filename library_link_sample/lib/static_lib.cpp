#include  <iostream>

#include "static_lib.h"

using std::cout;
using std::endl;

int static_link_func(int  n){
  cout << "Static Lib! [" << n << "]" << endl;
  return n - 10;
}

