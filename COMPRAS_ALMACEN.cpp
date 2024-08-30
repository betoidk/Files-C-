#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float prec,desc,tot;
	cout<<"Ingresa el precio: $";
	cin>>prec;
	if(prec > 1000) {
		desc = prec * 0.20;
		tot = prec - desc;
		cout<<"El precio a pagar es: $"<<tot <<" con un descuento de: $"<<desc;
	} else {
		cout<<"El precio: $"<<prec <<" no tiene descuento.";
	}
	return 0;
}