#include "main.h"

/**
 * times_table: multiplies a number n times
 * return: always 0
 */

int times_table(int x, int n) {
    int i = 0;

    for (i = 0; i <= n; i++)
    {
        cout << x << " * " << i << " = " << x * i << endl;
    }

    return (0);
}

/**
 * main: entry point for times_table
 * return: always 0
 */

int main(void)
{
    int x = 0, n = 0;

    cout << "Type a number for times table: ";
    cin >> x;
    cout << "How many lines do you want?: ";
    cin >> n;

    times_table(x, n);

    return (0);
}