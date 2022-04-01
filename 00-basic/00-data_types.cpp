#include "main.h"

int data_types(void) {
    int i = 0;
    float f = 0.1234567;
    double d = 0.012345678901234;
    double e = 124e+3;
    char c = 'a';

    cout << "integer: " << i << endl;
    cout.precision(7); // float has max 7 digits precision (default 6)
    cout << "float: " << f << endl;
    cout.precision(15); // double has 15 digits precision
    cout << "double: " << d << endl;
    cout << "double exponential fixed: " << fixed << e << endl;
    cout.precision(2);
    cout << "double exponential scientific: " << scientific << e << endl;
    cout << "char: " << c << endl;

    return (0);
}