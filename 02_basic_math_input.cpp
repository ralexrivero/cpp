#include "main.h"

/**
 * main: entry point
 * @a: first float
 * @b: second float
 * return: always 0
 */

int main(void) {
    float a = 0, b = 0, x = 0;

    cout << "Enter number 'a': ";
    cin >> a;
    cout << "Enter number 'b': ";
    cin >> b;

    x = add(a, b);
    cout << "Addition: " << a << " + " << b << " = " << x << endl;

    x = mul(a, b);
    cout << "Multiplication: " << a << " * " << b << " = " << x << endl;

    x = _divi(a, b);
    cout << "Integer division: " << a << " / " << b << " = " << x << endl;

    x = mod(a, b);
    cout << "Modulus: " << a << " % " << b << " = " << x << endl;

    x = _divf(a, b);
    cout << "Float division: " << a << " / " << b << " = " << x << endl;

    return (0);
}