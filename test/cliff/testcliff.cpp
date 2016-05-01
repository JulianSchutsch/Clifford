#define BOOST_TEST_MODULE cliffTest
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "cliff/c3_0.hpp"

#include <iostream>

BOOST_AUTO_TEST_CASE(checkCliff)
{
  const auto e=cliff::e;
  const auto e1=cliff::e1;
  auto v1 = 2*e;
  auto v2 = e1;
  auto v3 = 2*e+e1;
  auto v4 = 2*e1;
  std::cout<<v1.str()<<std::endl;
  std::cout<<v2.str()<<std::endl;
  std::cout<<v3.str()<<std::endl;
  std::cout<<v4.str()<<std::endl;
  BOOST_CHECK((v1+v2).approxEqual(v3));
  BOOST_CHECK((v1*v2).approxEqual(v4));
}
