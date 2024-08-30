/*Autor: Alberto Lujan
Fecha: 15/08/24*/
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	double par;
	int n,numero,impar,contador,i;
	par = 0;
	impar = 0;
	contador = 0;
	
	cout<<"Ingresa la cantidad de numeros: ";
	cin>>n;
	
	for (i=0;i<n;i++) {
		cout << "Ingresa un numero: ";
		cin>>numero;
		
		if (numero %2 == 0) {
			par += numero;
			contador++;
		} else {
			impar += numero;
		}
	}
	
	double promedio;
	promedio = 0;
	
	if (contador > 0) {
		promedio = par / contador; 
	}
	
	cout<<"Suma de los numeros impares: "<<impar<<endl;
	if (contador > 0) {
		cout<<"Promedio de los numeros pares: "<<par<<endl;
	} else {
		cout<<"No se ingresaron numeros pares."<<endl;
	}
	
	return 0;
}