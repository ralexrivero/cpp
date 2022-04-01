#include <cstdio>
#include <string>
using namespace std;

void func(const string & fs)
{
    printf("Value passed is: %s\n", fs.c_str()); // the string value is immutable here
}

int main(void)
{
    string s = "Strings are great!";
    func(s);
    return (0);
}