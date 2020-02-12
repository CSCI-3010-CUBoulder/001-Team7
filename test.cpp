#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Product Computed", "[product]") {
    std::vector<int> test_case = { 5,2 };
    REQUIRE(Product(test_case) == 10);

    SECTION("Test with negative numbers") {
        std::vector<int> test_case = { -4,-3 };
        REQUIRE(Product(test_case) == 12);
    }

    SECTION("Test VectorPlusN") {
        std::vector<int> test_case = { 0,0 };
        std::vector<int> test_ans = { 1,1 };
        REQUIRE(VectorPlusN(test_case, 1) == test_ans);
    }
}