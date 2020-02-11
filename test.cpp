#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("RemoveTwos are computed", "[RemoveTwos]") {

    SECTION("For positive NUmbers")  {
        REQUIRE( RemoveTwos(3) == 1);
        REQUIRE( RemoveTwos(20) == 5);
    }
}