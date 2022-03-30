#include "main.h"
/*
 * main: entry point
 * return: always 0
 */

int main() {
    int x = 0;

    cout << "Hello World!" << endl <<endl;
    cout << "<-\tdata types\t->\n";
    data_types();
    cout << "\n<-\tinput user\t->\n";
    input_user();

    x = add(1, 2);
    cout << x << endl;

    return (0);
}