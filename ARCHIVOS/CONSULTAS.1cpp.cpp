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
	base = fopen("ALUMNOS.DB", "ab+");
	if (base == NULL)
	{
		cout << "No se pudo abrir el archivo!!!";
		getch();
		return 0;
	}
	else
	{

		cout << "Ingrese su numero de cuenta a consultar: ";
		getline(cin, ncuenta);

		fread(&alumno, sizeof(alumno), 1, base);
		while (!feof(base))
		{
			if (alumno.cuenta == ncuenta)
			{
				cout << "nombre: " << alumno.nombre << endl;
				cout << "Ingrese el apellido paterno: " << alumno.apellido1 << endl;
				cout << "Ingrese el apellido materno: " << alumno.apellido2 << endl;
				cout << "Ingrese la edad: " << alumno.edad << endl;
				cout << "Ingrese el sexo: " << alumno.sexo << endl;
				cout << "Ingrese la procedencia: " << alumno.procedencia << endl;
				cout << "Ingrese el email: " << alumno.email << endl;
				cout << "Ingrese el telefono: " << alumno.telefono << endl;
				fclose(base);
				cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
				getch();
				//encontrado=true;
				return 0;
			}
			fread(&alumno, sizeof(alumno), 1, base);
		}

		cout << "Registro no encontrado!!!";
		getch();
		return 0;
	}

	return 0;
}