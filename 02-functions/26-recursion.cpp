#include <cstdio>
using namespace std;
/**
 * factorial: retrieve factorial using recursion
 *
 * @n: number to calculate factorial
 * return: factorial number of n
 */
unsigned long int factorial (unsigned long int n)
{
    if (n < 2)
    return 1;
    return (factorial(n -1) * n);

}

/**
 * main: entry point for recursion
 *
 * return: 0
 */
int main (void)
{
    unsigned long int n = 5;

    printf("Factorial of %ld is: %ld\n", n, factorial(n));

    return (0);
}