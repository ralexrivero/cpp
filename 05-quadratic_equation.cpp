#include "main.h"
/**
 * quadratic_eq: print the squares of a quadratic equation
 * return: always 0
 */

int quadratic_eq(float a, float b, float c) {
    float sq1 = 0, sq2 = 0;

    // ax2 + bx + c
    // (-b +- sqrt(pow(b, 2) -4ac)) / (2a)

    sq1 = (-b + sqrt(pow(b,2) -4*a*c)) / (2*a);
    sq2 = (-b - sqrt(pow(b,2) -4*a*c)) / (2*a);
    cout << "Square roots: x= " << sq1 << " and x= " << sq2 << endl;
    return (0);
}