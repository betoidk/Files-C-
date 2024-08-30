/*Autor: Alberto Lujan
Fecha: 13/08/24*/
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int opc;
	cout<< "Menu de opciones:" <<endl;
	cout<< "1. Opcion 1." <<endl;
	cout<< "2. Opcion 2." <<endl;
	cout<< "3. Opcion 3." <<endl;
	cout<< "4. Salir." <<endl;
	cout<< "Ingresa la opcion: ";
	cin>>opc;
	switch (opc) {
		case 1:	
			cout<<"Elegiste la opcion 1";
		break;
		case 2:
			cout<<"Elegiste la opcion 2";
		break;
		case 3:
			cout<<"Elegiste la opcion 3";
		break;
		case 4:
			
		break;
		default:
			cout<<"Opcion invalida";
		break;
	}
	return 0;
}
