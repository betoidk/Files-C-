/**/
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int i, n = 50, edad, cNinos = 0, cJoven = 0, cAdultos = 0, cViejos = 0;
	double peso, sNinos = 0, sJoven = 0, sAdultos = 0, sViejos = 0;
	
	for (i=0;i<n;i++) {
		cout<<"Ingresa la edad de la persona "<< i + 1 <<": ";
		cin>>edad;
		cout<<"Ingresa el peso de la persona "<< i + 1 <<": ";
		cin>> peso;
		
		if (edad <= 17) {
			sNinos += peso;
			cNinos++;
		} else if (edad >= 18 && edad <= 35) {
			sJoven += peso;
			cJoven++;
		} else if (edad >= 36 && edad <= 64) {
			sAdultos += peso;
			cAdultos++;
		} else if (edad >= 65) {
			sViejos += peso;
			cViejos++;
		}
	}
	
	cout<<"\nPromedios de peso por categoria: "<< endl;
	if (cNinos > 0) {
		cout<<"Ninos: "<< sNinos / cNinos<< " Kg"<<endl;
	} else {
		cout<<"Ninos: sin datos"<<endl;
	}
	
	if (cJoven > 0) {
		cout<<"Jovenes: "<< sJoven / cJoven<< " Kg"<<endl;
	} else {
		cout<<"Jovenes: sin datos"<<endl;
	}
	
	if (cAdultos > 0) {
		cout<<"Adultos: "<< sAdultos / cAdultos<< " Kg"<<endl;
	} else {
		cout<<"Adultos: sin datos"<<endl;
	}
	
	if (cViejos > 0) {
		cout<<"Viejos: "<< sViejos / cViejos<< " Kg"<<endl;
	} else {
		cout<<"Viejos: sin datos"<<endl;
	}
	
	return 0;
}