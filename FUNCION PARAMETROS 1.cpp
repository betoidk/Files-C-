/*Autor: Alberto*/
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
double suma(double x, double y);

int main() {
	double num1,num2,resultado;
	cout<< "Inicia el programa"<< endl;
	system("pause");
	system("cls");
	cout<<"Suma de dos numeros"<<endl;
	cout<<"Inserte el valor del numero 1: ";
	cin>>num1;
	cout<<"Inserte el valor del numero 2: ";
	cin>>num2;
	
	resultado= suma(num1, num2); //Lamando a mi funcion
	cout<<"La suma de: "<<num1 <<" + "<<num2 << " = "<< resultado<<endl;
	
	cout<< "Fin del programa"<<endl;
	system("pause");
	return 0;
}

double suma(double x, double y) {
	double suma;
	suma = x + y;
	system("pause");
	return suma;
}