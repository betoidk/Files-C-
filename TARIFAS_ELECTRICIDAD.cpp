#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float consumo,tarifa,costo;
	cout<<"Ingresa los kWh consumidos: ";
	cin>>consumo;
	
	if (consumo < 1000) {
		costo = consumo * 1.2;
		cout<<"El costo total es de: $"<<costo;	
	}
	if (consumo > 1000 && consumo < 1850) {
		costo = consumo * 1.0;
		cout<<"El costo total es de: $"<<costo;
	}
	if (consumo > 1850) {
		costo = consumo * 0.9;
		cout<<"El costo total es de: $"<<costo;
	}
	return 0;
}