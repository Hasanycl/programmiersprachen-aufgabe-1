#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include "catch.hpp"
#include <cmath>

class Cylinder {
    float radius, height;
public:
    Cylinder(float, float);
    float area() { return 2 * M_PI * radius * (radius + height); }
    float volume() { return M_PI * radius * radius * height; }
};

Cylinder::Cylinder(float a, float b) {
    radius = a;
    height = b;
}

Cylinder a1(3,4);
Cylinder a2(4,5);

TEST_CASE("describe_volume", "[volume]")
{
    REQUIRE(a1.volume() == Approx(36 * M_PI));
    REQUIRE(a2.volume() == Approx(80 * M_PI));
}   

TEST_CASE("describe_area", "[area]")
{
    REQUIRE(a1.area() == Approx(42 * M_PI));
    REQUIRE(a2.area() == Approx(72 * M_PI));
}


int main(int argc, char* argv[])
{   
    
    return Catch::Session().run(argc, argv);
}