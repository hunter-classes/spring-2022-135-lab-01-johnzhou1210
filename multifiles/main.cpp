#include <iostream>

#include "lib.h"
#include "util.h"

/*
This is a "signature" for function add
   - Can write as: int add2(int a, int b);
   - Or can use other param names if we want
   - But it's usually a cut and paste from the function name
      with the ; at the end
   - When compiling, do this:
   - Like this: g++ main.cpp lib.cpp
*/
int add2(int a, int b);
int add3(int a, int b, int c);

int main()
{
  int c,d;
  c = add2(5,10);
  std::cout << c << "\n";

  d = add3(5,10,15);
  std::cout << d << "\n";

  return 0;
}
