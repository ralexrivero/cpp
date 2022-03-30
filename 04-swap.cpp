#include "main.h"
/**
 * swap_number: swap to values
 *
 * @a: first number
 * @b: second number
 * return: always 0
 */
int swap_number(float a, float b) {
    float swap = 0;

    cout << "before swap a: " << a << " b: " << b << endl;

    swap = a;
    a = b;
    b = swap;

    cout << "after swap a: " << a << " b: " << b << endl;
    return (0);
}