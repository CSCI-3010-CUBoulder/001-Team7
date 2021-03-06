#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"


TEST_CASE ( "Sums are computed", "[sum]") {
    std::vector<double> n;
    n.push_back(5.5);
    n.push_back(10.5);
    REQUIRE( Sum(n) == 16.0 );
    
    SECTION( "Sums with negative values are computed") {
        std::vector<double> n;
        n.push_back(-5.5);
        n.push_back(-10.5);
        REQUIRE( Sum(n) == -16.0 );
    }
}
