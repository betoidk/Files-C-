/*Autor: Alberto*/
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
void suma();

int main() 
{
	cout<< "Inicia el programa"<< endl;
	system("pause");
	suma(); //Lamando a mi funcion
	cout<< "Fin del programa"<<endl;
	system("pause");
	return 0;
}

void suma() {
	double num1,num2,suma;
	
	system("cls");
	cout<<"Suma de dos numeros"<<endl;
	cout<<"Inserte el valor del numero 1: ";
	cin>>num1;
	cout<<"Inserte el valor del numero 2: ";
	cin>>num2;
	
	suma = num1 + num2;
	cout<<"La suma de: "<<num1 <<" + "<<num2 << " = "<< suma<<endl;
	system("pause");
}