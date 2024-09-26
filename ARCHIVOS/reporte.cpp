#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Datos
{
	string cuenta, nombre, apellido1, apellido2, procedencia, email, telefono;
	int edad;
	string sexo;
};

int main()
{
	struct Datos alumno;
	FILE *base;
	string ncuenta;
	bool encontrado = false;
	base = fopen("ALUMNOS.DB", "rb");
	if (base == NULL)
	{
		cout << "No se pudo abrir el archivo!!!";
		getch();
		return 0;
	}
	else
	{
		 fread(&alumno,sizeof(alumno),1,base);
		 // Lee el "Registro", de tamano=sizeof(Registro) del archivo "alias"
 		while(!feof(base)) // Ciclo mientras no se encuentre el final del archivo
 		{

			cout << "nombre: " << alumno.nombre << endl;
			cout << "Ingrese el apellido paterno: " << alumno.apellido1 << endl;
			cout << "Ingrese el apellido materno: " << alumno.apellido2 << endl;
			cout << "Ingrese la edad: " << alumno.edad << endl;
			cout << "Ingrese el sexo: " << alumno.sexo << endl;
			cout << "Ingrese la procedencia: " << alumno.procedencia << endl;
			cout << "Ingrese el email: " << alumno.email << endl;
			cout << "Ingrese el telefono: " << alumno.telefono << endl;
			fread(&alumno,sizeof(alumno),1,base);
			getch();
 		}
 		fclose(base); // Cierra el archivo
 		cout << "\n\r------------------------------------------------------------------------";
 		cout << "\n\rFin del listado !!!";
 		cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
 		getch(); 
	}

	return 0;
}