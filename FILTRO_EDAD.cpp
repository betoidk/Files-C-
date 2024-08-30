#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float edad;
	cout<<"Ingresa la edad: ";
	cin>>edad;
	
	if (edad < 12) {
		cout<<"Es un nino.";
	}
	if (edad > 13 && edad < 29) {
		cout<<"Es un adolescente.";
	}
	if (edad > 30 && edad < 59) {
		cout<<"Es un adulto.";
	}
	if (edad > 60) {
		cout<<"Es una persona de la tercera edad.";
	}
	return 0;
}