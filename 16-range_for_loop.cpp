#include <cstdio>
using namespace std;

int main(void) {
    int ia[] = {1, 20, 33, 44, 51, 66, 70, 81};
    char ca[] = {'h', 'e', 'l', 'l', 'o', '!', '!' };
    char sa[] = "c-string type";

    for (int i : ia)
    {
        printf("element = %d\n", i);
    }
    puts("");

    for (char c : ca)
    {
        printf("element: %c\n", c);
    }
    puts("");

    for (char s : sa)
    {
        if (s == 0)
        {
            break;
        }
        printf("%c", s);
    }
    puts("");

}