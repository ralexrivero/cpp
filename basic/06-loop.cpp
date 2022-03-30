#include "main.h"
/**
 * loops: for, while, do while
 * return: always 0
 */

int loops(int n) {
    int i = 0;

    cout << "While loop" << endl;
    while (i < n) {
        cout << i;
        if (i < n -1)
        {
            cout << ", ";
        }
        i++;
    }
    cout << endl;

    cout << "For loop" << endl;
    for (i = 0; i < n; i++)
    {
        cout << i;
        if (i < n -1)
        {
            cout << ", ";
        }
    }
    cout << endl;

    return (0);
}

/**
 * main: entry point for loops
 * return: always 0
 */

int main(void) {
    int n = 0;

    cout << "Type an integer: ";
    cin >> n;
    loops(n);

    return (0);
}