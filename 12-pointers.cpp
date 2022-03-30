#include <cstdio>
using namespace std;

int main (void)
{
    int x = 10;
    int y = 45;
    int *ip = &x;

    printf("x= %d\n", x);
    printf("y = %d\n", y);
    printf("ip = %d\n", *ip);
    x = 12;
    printf("x= %d\n", x);
    printf("y = %d\n", y);
    printf("ip = %d\n", *ip);

    return (0);
}
