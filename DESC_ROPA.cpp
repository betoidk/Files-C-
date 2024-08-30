#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float cant,precio,sub,desc,tot;
	cout<<"Ingresa la cantidad de camisas: ";
	cin>>cant;
	cout<<"Ingresa el precio: ";
	cin>>precio;
	
	sub = cant * precio;
	
	if (cant >= 3) {
		desc = sub * 0.20;
	} else {
		desc = sub * 0.10;
	}
	
	tot = sub - desc;
	cout<<"El total a pagar es: $"<<tot <<" con un descuento de: $"<<desc;
	return 0;
}