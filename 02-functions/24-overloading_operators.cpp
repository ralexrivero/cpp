#include <cstdio>
using namespace std;

class A {
    int a;
public:
    A (const int &a) : a(a) {}
    const int & value() const { return a; }
};

int operator + (const A & left, const A & right) {
    printf("operator + for class A\n");
    return left.value() + right.value();
}

int main(void)
{
    A a(10);
    A b(25);
    printf("add %d\n", a + b);
    return (0);
}