#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

struct Datos {
	string cuenta,nombre,apellido1,apellido2,procedencia,email,telefono;
	int edad;
	string sexo;
};

int main() {
	Datos alumno[4];
	for(int x=0;x<=3;x++) {
	cout<<x<<endl;
	cout<<"Ingrese su numero de cuenta: ";
	getline(cin,alumno[x].cuenta);
	cout<<"Ingrese su nombre: ";
	getline(cin,alumno[x].nombre);
	cout<<"Ingrese el apellido paterno: ";
	getline(cin,alumno[x].apellido1);
	cout<<"Ingrese el apellido materno: ";
	getline(cin,alumno[x].apellido2);
	cout<<"Ingrese la edad: ";
	cin>>alumno[x].edad;
	cin.ignore();
	cout<<"Ingrese el sexo: ";
	getline(cin,alumno[x].sexo);
	cout<<"Ingrese la procedencia: ";
	getline(cin,alumno[x].procedencia);
	cout<<"Ingrese el email: ";
	getline(cin,alumno[x].email);
	cout<<"Ingrese el telefono: ";
	getline(cin,alumno[x].telefono);

	}
	system("cls");
	cout<<"Los datos introducidos son: "<<endl;
	cout<<"Cuenta: "<< alumno[1].cuenta<<endl;
	cout<<"Nombre: "<<alumno[1].nombre<<endl;
	cout<<"Apellido Paterno: "<<alumno[1].apellido1<<endl;
	cout<<"Apellido Materno: "<<alumno[1].apellido2<<endl;
	cout<<"Edad: "<<alumno[1].edad<<endl;
	cout<<"Sexo: "<<alumno[1].sexo<<endl;
	cout<<"Procedencia: "<<alumno[1].procedencia<<endl;
	cout<<"Email: "<<alumno[1].email<<endl;
	cout<<"Telefono: "<<alumno[1].telefono<<endl;
	return 0;
}