#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

struct Datos {
    string cuenta,nom,apellido1,apellido2,procedencia,email,tel,sexo;
    int edad;
};


int main() {
    struct Datos alumno;

    FILE *base;
    string ncuenta;
    int opc;
    base = fopen("ALUMNOS.DB", "ab+");
    if (base == NULL) {
        cout<<"No se pudo abrir la DB!!!";
        getch();
        return 0;
    }

    do {
        cout<<"SEDUCA."<<endl;
        cout<<"1. Agregar Alumno"<<endl;
        cout<<"2. Consultar Alumno"<<endl;
        cout<<"3. Eliminar Alumno."<<endl;
        cout<<"4. Modificar Alumno."<<endl;
        cout<<"5. Reporte General."<<endl;
        cout<<"6. Salir."<<endl;
        cout<<"Elige una opcion: ";
        cin>>opc;
        cin.ignore();
        
        switch (opc) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            default:
                cout<<"Opcion invalida."<<endl;
        }
    } while (opc != 6);

    fclose(base);
    return 0;
}