#include <iostream>

class V1
{
  double v1[3];
public:
  constexpr double operator[](int i){ return v1[i]; }
  constexpr V1(double a1, double a2, double a3)
    : v1{a1, a2, a3}{}
};

constexpr V1 operator + (V1 l, V1 r)
{
  return V1(l[0]+r[0],l[1]+r[1],l[2]+r[2]);
}

int main(int argc, char** args)
{
  V1 x = V1(1,2,3)+V1(3,2,1);
  std::cout<<"..."<<x[0]<<x[1]<<x[2]<<std::endl;
  return 0;
}
