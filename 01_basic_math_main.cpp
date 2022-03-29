#include "main.h"

/**
 * main: entry point
 * return: always 0
 */

int main(void) {
    float x = 0;
    int y = 0;

    x = add(1, 2);
    cout << x << endl;
    x = mul(3.3, 8);
    cout << x << endl;
    x = _divf(100, 3);
    cout << x << endl;
    x= sub(50, 20.8);
    cout << x << endl;
    y = _divi(40, 7);
    cout << y << endl;
    y = mod(40, 7);
    cout << y << endl;

    return (0);
}