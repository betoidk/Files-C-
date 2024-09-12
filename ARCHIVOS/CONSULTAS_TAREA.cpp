#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Datos {
    string cuenta, nom, apellido1, apellido2, procedencia, email, tel, sexo;
    int edad;
};

int main() {
    struct Datos alumno;
    FILE *base;
    string ncuenta;
    int opc;
    base = fopen("ALUMNOS.DB", "ab+");
    if (base == NULL) {
        cout << "No se pudo abrir la DB!!!";
        getch();
        return 0;
    }

    do {
        cout << "SEDUCA." << endl;
        cout << "1. Agregar Alumno." << endl;
        cout << "2. Consultar Alumno." << endl;
        cout << "3. Eliminar Alumno." << endl;
        cout << "4. Modificar Alumno." << endl;
        cout << "5. Reporte General." << endl;
        cout << "6. Salir." << endl;
        cout << "Elige una opcion: ";
        cin >> opc;
        cin.ignore();
        switch (opc) {
        case 1:
            system("cls");
            cout << "INGRESE DATOS DEL NUEVO ALUMNO" << endl;
            cout << "Numero de cuenta: ";
            getline(cin, alumno.cuenta);
            cout << "Nombre: ";
            getline(cin, alumno.nom);
            cout << "Apellido Paterno: ";
            getline(cin, alumno.apellido1);
            cout << "Apellido Materno: ";
            getline(cin, alumno.apellido2);
            cout << "Edad: ";
            cin >> alumno.edad;
            cin.ignore();
            cout << "Sexo: ";
            getline(cin, alumno.sexo);
            cout << "Procedencia: ";
            getline(cin, alumno.procedencia);
            cout << "eMail: ";
            getline(cin, alumno.email);
            cout << "Telefono: ";
            getline(cin, alumno.tel);

            fwrite(&alumno, sizeof(alumno), 1, base);
            
            cout<<"Alumno agregado correctamente."<<endl;
            getch();
            system("cls");
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            cout << "Saliendo...." << endl;
            return 0;
        default:
            cout << "Opcion invalida!!!" << endl;
        }
    } while (opc != 6);

    return 0;
}