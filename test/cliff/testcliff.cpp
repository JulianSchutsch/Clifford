#define BOOST_TEST_MODULE cliffTest
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include "cliff/c3_0.hpp"

BOOST_AUTO_TEST_CASE(checkCliff)
{
  cliff::GTFFF v1(2);
  cliff::GFTFF v2(1,0,0);
  cliff::GTTFF v3(2,1,0,0);
  cliff::GFTFF v4(2,0,0);
  BOOST_CHECK(v1+v2==v3);
  BOOST_CHECK(v1*v2==v4);
}
