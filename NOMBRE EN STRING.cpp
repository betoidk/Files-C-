#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main() {
	string nombre;
	string ap;
	string am;
	int peso,edad;
	
	cout<<"Digita tu nombre: ";
	cin>>nombre;
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