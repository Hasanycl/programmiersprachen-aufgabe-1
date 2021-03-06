#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int gcd(int a, int b)
{
    if (a == 0 && b == 0)
        return -1;
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);

    else return gcd(a, b - a);
}


TEST_CASE("describe_gcd", "[gcd]")
{
    REQUIRE(gcd(0, 0) == -1);
    REQUIRE(gcd(0, 5) == 0);
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(3, 7) == 1); 
}


int main(int argc, char* argv[])
{ 
    return Catch::Session().run(argc, argv); 
}