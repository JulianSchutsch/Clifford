#include <iostream>
#include <typeinfo>
#include "c3_0.hpp"

int main(int argc, char** args)
{
  (void)argc;
  (void)args;
  auto a=cliff::GFT(1);
  auto b=cliff::GFT(1);
  auto y=a*b;
  std::cout<<a.str()<<"*"<<b.str()<<"="<<y.str()<<std::endl;
  return 0;
}
