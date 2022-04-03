#include <cstdio>
using namespace std;

struct A { // members are default set to public unlike class members
    int i;
    float f;
    double d;
};

class B {
public:
    int i;
    float f;
    char c;
};

int main(void)
{
    // struct
    A a = {1, 2.2, 4.55};
    printf("\tstructure\na.i = %d\na.f = %.2f\ni.d = %.3lf\n", a.i, a.f, a.d);
    // access data using pointers
    A *pa = &a;
    printf("\tstructure using pointers\npa->i: %d\npa->f: %.2f\npa->d: %.3lf\n",\
    pa->i, pa->f, pa->d);

    B b = {1, 2.345, 'x'};
    B *pb = &b;
    printf("\tobject using pointers\npb->i: %d\npb->f: %.2f\npb->c: %c\n",\
    pb->i, pb->f, pb->c);
    return (0);
}