#include "main.h"
void (* funcs[])() = {fa, fb, fc, fd, nullptr};

int jump(const char* rs )
{
    char code = rs[0];
    int i = 0;
    int funcs_len = 0;

    if (code == 'q' || code == 'Q')
        return (0);


    while (funcs[funcs_len]) // count the functions
    {
        funcs_len++;
    }

    i = (int) code - '0'; // cast the choice to int
    i--; // if type 1, it's refer to index 0

    if (i < 0 || i >= funcs_len)
    {
        printf("Invalid choice\n");
        return (1); // return 1 to continue the loop
    }
    else
    {
        funcs[i](); // call the function
        return 1; // continue the loop
    }
}