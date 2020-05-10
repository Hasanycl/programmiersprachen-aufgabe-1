#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int factorial(int num)
{
    if (num < 0) 
      return -1;
}





TEST_CASE("describe_factorial", "[factorial]")
{
    REQUIRE(factorial(-12) == -1);
}


int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}