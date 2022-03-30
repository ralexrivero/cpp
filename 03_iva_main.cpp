#include "main.h"

/**
 * main: entry point
 * return: always 0
 */

int main(void) {
    float x = 0;
    float value = 0;
    int tax = 0;
    string taxName = "";

    cout << "Type value: ";
    cin >> value;
    cout << "Type I.V.A. type (0-Basic, 1-Minimum, 2-Excent): ";
    cin >> tax;

    if (tax == 0)
    {
        taxName = "Basic";
    }
    else if (tax == 1)
    {
        taxName = "Minimum";
    }
    else
    {
        taxName = "Excent";
    }

    x = iva(value, tax);
    cout << "Value: " << value << " + " << "I.V.A. " << "(" << taxName << "): " << x << " = " << (value + x);

    return (0);
}