/*Autor: Alberto*/
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
void suma(double x, double y);

int main() {
	double num1,num2;
	cout<< "Inicia el programa"<< endl;
	system("pause");
	system("cls");
	cout<<"Suma de dos numeros"<<endl;
	cout<<"Inserte el valor del numero 1: ";
	cin>>num1;
	cout<<"Inserte el valor del numero 2: ";
	cin>>num2;
	
	suma(num1, num2); //Lamando a mi funcion
	
	cout<< "Fin del programa"<<endl;
	system("pause");
	return 0;
}

void suma(double x, double y) {
	double suma;
	suma = x + y;
	cout<<"La suma de: "<<x <<" + "<<y << " = "<< suma<<endl;
	system("pause");
}