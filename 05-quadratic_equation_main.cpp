#include "main.h"

int main(void) {
    float a = 0, b = 0, c = 0;

    cout << "square root for quadratic equations (ax2 + bx + c = 0)" << endl;
    cout << "ax2 term: ";
    cin >> a;
    cout << "bx term: ";
    cin >> b;
    cout << "c term: ";
    cin >> c;

    quadratic_eq(a,b,c);

    return (0);
}