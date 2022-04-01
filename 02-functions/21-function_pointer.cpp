#include <cstdio>
using namespace std;

void func()
{
    printf("This is function\n");
}

int main(void)
{
    void (*fp)() = func;
    fp();
    printf("This is main\n");
    return(0);
}