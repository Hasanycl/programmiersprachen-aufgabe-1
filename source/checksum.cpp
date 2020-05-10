#include<iostream>
using namespace std;
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

 int checksum(int number)
{
	 int quersumme = 0;

	while (number > 0)
	{
		quersumme += number % 10;
		number = number / 10;
	}
	return quersumme;
}


 TEST_CASE("describe_checksum", "[checksum]")
 {
	 REQUIRE(checksum(12) == 3);
	 REQUIRE(checksum(121779) == 27);
 }


 int main(int argc, char* argv[])
 {
	 return Catch::Session().run(argc, argv);

 }