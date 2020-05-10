#include<iostream>
using namespace std;
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"



int sum_multiples(int limit)
{
    int sum = 0;
    for (int i = 1; i <= limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    return sum;
}


TEST_CASE("describe_sum_multiples", "[sum_multiples]")
{
    REQUIRE(sum_multiples(12) == 45);
    REQUIRE(sum_multiples(3) == 3);
    REQUIRE(sum_multiples(18) == 78);

}


int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);

}