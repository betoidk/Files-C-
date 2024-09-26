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
	struct Datos alumno;
	FILE *base;
	base = fopen("ALUMNOS.DB", "ab+");
	if (base == NULL) {
		cout<<"No se pudo abrir el archivo!!!";
		getch();
		return 0;
	} else {
		cout<<"Ingrese su numero de cuenta: ";
		getline(cin,alumno.cuenta);
		cout<<"Ingrese su nombre: ";
		getline(cin,alumno.nombre);
		cout<<"Ingrese el apellido paterno: ";
		getline(cin,alumno.apellido1);
		cout<<"Ingrese el apellido materno: ";
		getline(cin,alumno.apellido2);
		cout<<"Ingrese la edad: ";
		cin>>alumno.edad;
		cin.ignore();
		cout<<"Ingrese el sexo: ";
		getline(cin,alumno.sexo);
		cout<<"Ingrese la procedencia: ";
		getline(cin,alumno.procedencia);
		cout<<"Ingrese el email: ";
		getline(cin,alumno.email);
		cout<<"Ingrese el telefono: ";
		getline(cin,alumno.telefono);
		fwrite(&alumno, sizeof(alumno), 1, base); 
	}
	return 0;
}