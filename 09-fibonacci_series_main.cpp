#include "main.h"
/**
* main: entry point for fibonacci series
 * return: always 0
*/
int main(void)
{
    int n = 0;
    cout << "Fibonacci series\nType a number: ";
    cin >> n;

    cout << "Fibonacci(" << n << ")= " << fibonacci(n);
    return(0);
}