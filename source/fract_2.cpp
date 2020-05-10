#include <iostream>
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

float fract(float number) {
	float result = number - int(number);
	return result;
}


	TEST_CASE("describe_fract", "[fract]")
	{
		REQUIRE(fract(5.123f) == Approx(0.123f));
		REQUIRE(fract(7.765f) == Approx(0.765f));
	}

	int main(int argc, char* argv[])
	{
		return Catch::Session().run(argc, argv);
	}
