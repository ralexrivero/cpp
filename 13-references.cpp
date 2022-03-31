#include <cstdio>
using namespace std;

int main(void)
{
    int x = 7;
    int &y = x; // y is initialized with the address of x

    printf("x = %d\n", x);
    printf("&y = %d\n", y);

    x = 10;
    printf("x = %d\n", x);
    printf("&y = %d\n", y);

    y = 43;
    printf("x = %d\n", x);
    printf("&y = %d\n", y);
}