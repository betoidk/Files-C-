#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    float dia, mes;

    cout << "Ingresa el dia de tu nacimiento: ";
    cin >> dia;
    cout << "Ingresa el mes de tu nacimiento: ";
    cin >> mes;

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        cout << "Tu signo zodiacal es Aries." << endl;
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 21)) {
        cout << "Tu signo zodiacal es Tauro." << endl;
    } else if ((mes == 5 && dia >= 22) || (mes == 6 && dia <= 20)) {
        cout << "Tu signo zodiacal es Geminis." << endl;
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        cout << "Tu signo zodiacal es Cancer." << endl;
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        cout << "Tu signo zodiacal es Leo." << endl;
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        cout << "Tu signo zodiacal es Virgo." << endl;
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        cout << "Tu signo zodiacal es Libra." << endl;
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        cout << "Tu signo zodiacal es Escorpio." << endl;
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        cout << "Tu signo zodiacal es Sagitario." << endl;
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        cout << "Tu signo zodiacal es Capricornio." << endl;
    } else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        cout << "Tu signo zodiacal es Acuario." << endl;
    } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        cout << "Tu signo zodiacal es Piscis." << endl;
    }
    return 0;
}