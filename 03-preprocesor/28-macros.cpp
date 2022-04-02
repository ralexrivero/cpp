#include <cstdio>
using namespace std;

#define MAX(a, b) (a > b ? a : b)
#define MUL(a, b) (a * b)

int main(void)
{
    int a = 0, b = 0;

    a = 5;
    b = 6;

    printf("Max: a: %d, b: %d = %d\n", a, b, MAX(a, b));
    printf("Mul: a: %d, b: %d = %d\n", a, b, MUL(a, b));

    return (0);
}