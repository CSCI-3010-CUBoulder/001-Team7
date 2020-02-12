#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("RemoveTwos are computed", "[RemoveTwos]") {

    SECTION("For positive NUmbers")  {
        REQUIRE( RemoveTwos(3) == 1);
        REQUIRE( RemoveTwos(20) == 5);
    }
}