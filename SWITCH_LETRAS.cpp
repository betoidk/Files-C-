/*Autor: Alberto Lujan
Fecha: 13/08/24*/
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	char opc;
	cout<< "Menu de opciones:" <<endl;
	cout<< "a. Opcion 1." <<endl;
	cout<< "b. Opcion 2." <<endl;
	cout<< "c. Opcion 3." <<endl;
	cout<< "d. Salir." <<endl;
	cout<< "Ingresa la opcion: ";
	cin>>opc;
	switch (opc) {
		case 'A':	
			cout<<"Elegiste la opcion a";
		break;
		case 'a':	
			cout<<"Elegiste la opcion a";
		break;
		case 'B':	
			cout<<"Elegiste la opcion a";
		break;
		case 'b':
			cout<<"Elegiste la opcion b";
		break;
		case 'C':	
			cout<<"Elegiste la opcion a";
		break;
		case 'c':
			cout<<"Elegiste la opcion c";
		break;
		case 'D':	
		
		break;
		case 'd':
			
		break;
		default:
			cout<<"Opcion invalida";
		break;
	}
	return 0;
}
