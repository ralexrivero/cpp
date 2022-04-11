#include <cstdio>
using namespace std;

class A
{
    int ia;
public:
    void setvalue(const int a);
    int getvalue();
};

void A::setvalue(const int a)
{
    ia = a;
}

int A::getvalue()
{
    return ia;
}

int main(void)
{
    A a;
    a.setvalue(42);
    printf("Value is %d\n", a.getvalue());

    return (0);
}