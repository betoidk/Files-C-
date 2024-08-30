#include <stdio.h>
#include <iostream>

using namespace std;

int main () {
	float cantidad,precio,total;
	cout<<"Ingresa la cantidad de llantas: ";
	cin>>cantidad;
	if (cantidad < 5) {
		precio = 800;
	} else {
		precio = 700;
	}
	total = cantidad * precio;
	cout<<"El total es: $"<<total;
	return 0;
}