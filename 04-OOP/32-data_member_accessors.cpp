#include <cstdio>
#include <string>
using namespace std;

class C {
    int ci;
    char cc;
    string cs;
public:
    C (const int i, const char c, const string & s) : ci(i), cc(c), cs(s) {};
    void seti (const int i) {ci = i;}
    void setc (const char c) {cc = c;}
    void sets (const string & s) {cs = s;}
    int geti () const { return ci;}
    char getc () const { return cc;}
    const string & gets () const {return cs;}
    const char * gets_cstr () const { return cs.c_str(); }
};

int main(void)
{
    C c(1, 'a', "hello");
    printf("ci: %d\ncc: %c\ncs: %s",\
    c.geti(), c.getc(), c.gets_cstr());

    return (0);
}