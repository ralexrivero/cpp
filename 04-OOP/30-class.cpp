#include <cstdio>
using namespace std;

class ClassA {
    int i; // private by default
public:
    void setvalue( const int value)
    {
        i = value;
    }
    int getvalue() const
    {
        return i;
    }
};

int main(void)
{
    int i = 55;
    ClassA objectA;

    objectA.setvalue(i);
    printf("value is %d\n", objectA.getvalue());
}