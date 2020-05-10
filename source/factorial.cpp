#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int factorial(int num)
{
    if (num < 0)
        return -1;
    else if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}




TEST_CASE("describe_factorial", "[factorial]")
{
    REQUIRE(factorial(-12) == -1);
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(4) == 24);
    REQUIRE(factorial(6) == 720);

}


int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}