/* Autor: Alberto
 Fecha: 08/08/24 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float hrs,sueldo,ext;
	cout<<"Ingresa horas: ";
	cin>>hrs;
	if (hrs > 40) {
		ext = hrs-40;
		hrs = 40;
	}
	sueldo = (hrs * 135) + (ext * 270);
	cout<<"El sueldo es: $"<<sueldo;
	return 0;
}