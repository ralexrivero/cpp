//
// Created by ralex on 19/02/23.
//
#include<iostream>

using namespace std;

int main() {
    int horasTrabajadas;
    float valorHora;
    float sueldo;
    cout <<"Ingrese las horas trabajadas por el operario: ";
    cin >> horasTrabajadas;
    cout <<"Ingrese el valor de la hora: ";
    cin >> valorHora;
    sueldo = horasTrabajadas * valorHora;
    cout <<"El sueldo total del operario es: ";
    cout <<sueldo;
    cout <<"\n";
    return 0;
}