#include "main.h"

/**
 * factorial: calculates de factorial from 1 to n
 * @n: the n factorial to calculate
 * return: the factorial
 */

int factorial(int n)
{
    int i = 1, f = 1;

    for (i = 1; i<= n; i++)
    {
        f *= i;
    }

    return (f);
}


