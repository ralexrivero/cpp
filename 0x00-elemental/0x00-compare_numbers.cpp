#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "El numero mayor es: " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "El numero mayor es: " << b << endl;
    }
    else
    {
        cout << "El numero mayor es: " << c << endl;
    }
    return 0;
}
