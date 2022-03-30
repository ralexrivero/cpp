#include "main.h"
/**
* fibo: fibonacci series of n
 * @n: the number to calculate the series
 * return: the fibonacci series of n
*/

int fibonacci(int n)
{
    int i = 0, f = 0;

    for (i=1; i<=n; i++)
    {
        f += i;
    }
    return (f);
}