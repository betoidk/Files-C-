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
	char op;
	bool encontrado =false;
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
				cout << "\n\r<<< Oprima cualquier tecla para continuar >>>";
				getch();
				 
				encontrado=true;
			}
			fread(&alumno, sizeof(alumno), 1, base);
		}
		
		
		/*
		if (encontrado==true)
		{
			
				alumno.cuenta="";
				alumno.nombre,"";
				alumno.apellido1,"";
				alumno.apellido2,"";
				alumno.edad=0;
				alumno.sexo,"";
				alumno.procedencia,"";
				alumno.email,"";
				alumno.telefono,"";
				do {
 					cout << "\n\n\rEsta seguro que desea borrarlo? [S/N] ---> ";
 					op=toupper(getche());
 				}while(op!='S' && op!='N'); 
 				if(op=='S') 
 				{
					fseek(base,ftell(base)-sizeof(alumno),SEEK_SET);
 					fwrite(&alumno,sizeof(alumno),1,base); // Graba el registro con los nuevos campos
				 	cout << "\n\n\n\rRegistro eliminado !!!";
				 }
				 fclose(base); // Cierra el archivo
				 return 0;
		}*/
		cout << "Registro no encontrado!!!";
		getch();
		return 0;
	}

	return 0;
}