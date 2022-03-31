#include <cstdio>
using namespace std;

int main(void)
/**
 * main: c-arrays and c-strings
 * return: always 0
 */
{
    int i = 0;
    int ia[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    char ca[] = {'H', 'e', 'l', 'l', 'o', 0};
    int *ip = ia;
    printf("%s\n", ca);

    printf("%d\n", *ip);
    ++ip;
    printf("%d\n", *ip);
    ++ip;
    printf("%d\n", *ip);

    for (i = 0; ca[i]; i++)
    {
        printf("ia[%d] = %c\n",i, ca[i]);
    }
    puts("");

    char s[] = "c-strings";

    for (i=0; s[i]; i++)
    {
        printf("s[%d]= %c\n", i, s[i]);
    }
    puts("");
    // access using pointers

    char * cp;

    for (cp = s; *cp; ++cp)
    {
        printf("char = %c\n", *cp);
    }
    puts("");
    // access using range based loop c++ 11

    for (char c : s)
    {
        if (c == 0)
            break;
        printf("char: %c\n", c);
    }
    return(0);
}