#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"

TEST_CASE("RemoveTwos are computed", "[RemoveTwos]") {

    SECTION("For positive NUmbers")  {
        REQUIRE( RemoveTwos(3) == 3);
        REQUIRE( RemoveTwos(10) == 5);
    }
}