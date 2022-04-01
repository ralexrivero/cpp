#include "main.h"

/**
* main: entry point for factorial
* return: always 0
*/
int main(void)
{
    int n = 0;

    cout << "Factorial calculator\nType the number to calculate: ";
    cin >> n;
    cout << n << "!= " << factorial(n);

    return (0);
}
