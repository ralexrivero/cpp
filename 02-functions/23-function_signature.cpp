#include <cstdio>
#include <cmath>

using namespace std;
/**
 * volume: volume of a cube
 *
 * @side: side of the cube
 * return: volume
 */
double volume(double s)
{
    printf("Cube of %.3lf\n", s);

    return (pow(s, 3));
}
/**
 * volume: volume of a cylinder
 *
 * @r: radio
 * @h: height
 * return: volume
 */
double volume(double r, double h)
{
    printf("Cylinder of %.3lf x %.3lf\n", r, h);

    return (M_PI * r * r * h);
}
/**
 * volume: volume of a cuboid
 *
 * a: side
 * b: side
 * c: side
 * return: volume
 */
double volume(double a, double b, double c)
{
    printf("Cuboid of %.3lf x %.3lf x %.3lf\n", a, b, c);

    return (a * b * c);
}
/**
 * main: entry point to test function signature
 * signature: return type, function name and list of arguments types
 * return: 0
 */
int main(void)
{
    printf("Volume of cube %.3lf\n", volume(7));

    printf("Volume of cylinder %.3lf\n", volume(3, 5));

    printf("Volume of cuboid %.3lf\n", volume( 3, 4, 2));

    return (0);
}