#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

bool is_prime(int n)
{
    if (n == 0 || n < 0)
        return false;
    for (int i = 2; i < n/2 ; ++i) {
        if (n % i == 0)
            return false;
        else
            return true;
    }
}

TEST_CASE("describe_is_prime", "[is_prime]")
{
    REQUIRE(is_prime(13) == true);
    REQUIRE(is_prime(31) == true);
    REQUIRE(is_prime(18) == false);
    REQUIRE(is_prime(2) == true);
}










int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}