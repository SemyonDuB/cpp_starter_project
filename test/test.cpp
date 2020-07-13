#define BOOST_TEST_MODULE boost_test
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(simple_test)
{
    constexpr int i = 10;
    BOOST_CHECK( i > 2 );
}
