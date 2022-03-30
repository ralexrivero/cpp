#include "main.h"

/**
 * main: entry point for swap numbers prototype
 * return: always 0
 */

int main(void) {
    float a = 0, b = 0;

    cout << "Type first number (a): ";
    cin >> a;
    cout << "Type second number (b): ";
    cin >> b;

    swap_number(a, b);

    return (0);
}