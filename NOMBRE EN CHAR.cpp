#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;

int main() {
	string nombre;
	char ap[50];
	char am[50];
	int edad,peso;
	
	cout<<"Digita tu nombre: ";
	getline(cin,nombre);
	cout<<"Digita tu apellido paterno: ";
	cin>>ap;
	cout<<"Digita tu apellido materno: ";
	cin>>am;
	cout<<"Digita tu edad: ";
	cin>>edad;
	cout<<"Digita tu peso: ";
	cin>>peso;
	
	cout<<"Usted"<< " "<< nombre<< " "<< ap<< " "<< am<< " "<< "tiene"<< " "<< edad<< " "<< "anios y su peso es de"<< " "<< peso<< "kg"; 
	return 0;
}