#include <cstdio>
#include <string>
using namespace std;

const string & func_s()
{
    static string s = "This is a static string";
    return s;
}

int main(void)
{
    printf("%s\n", func_s().c_str());
    return (0);
}