#include <cstdio>
using namespace std;

int f_val(int a)
{
    a++; // only affect the local copy of the value
    printf("value passed is: %d\n", a); // passed by value
    return (0);
}

void f_ref(int * ip)
{
    ++(*ip); // modified the original value in the main function
    printf("value referenced is: %d\n", *ip);
}

int main(void)
{
    int a = 11;

    f_val(a); // call by value, function has a local copy of the value
    printf("original value is: %d\n", a);

    f_ref(&a); // call by reference
    printf("original value is: %d\n", a);

    printf("Function f_ref at: %p\n", f_ref);
    return (0);
}