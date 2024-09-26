#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct Datos {
    string cuenta,nom,apellido1,apellido2,procedencia,email,tel,sexo;
    int edad;
};

main() {
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
        cout<< "SEDUCA." << endl;
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
            fclose(base);
            getch();
            system("cls");
            break;
        case 2:
        	system("cls");
            cout<<"Ingrese el numero de cuenta a consultar: ";
            getline(cin,ncuenta);
			
            fread(&alumno, sizeof(alumno), 1, base);
            while (!feof(base)) {
                if (alumno.cuenta == ncuenta) {
                    cout<<"Nombre: "<<alumno.nom<<endl;
                    cout<<"Apellido Paterno: "<<alumno.apellido1<<endl;
                    cout<<"Apellido Materno: "<<alumno.apellido2<<endl;
                    cout<<"Edad: "<<alumno.edad<<endl;
                    cout<<"Sexo: "<<alumno.sexo<<endl;
                    cout<<"Procedencia: "<<alumno.procedencia<<endl;
                    cout<<"eMail: "<<alumno.email<<endl;
                    cout<<"Telefono: "<<alumno.tel<<endl;
                    fclose(base);
                    cout<<"Consulta realizada con exito."<<endl;
                    getch();
                    return 0;
                }
                fread(&alumno, sizeof(alumno), 1, base);
            }
            cout<<"Registro no encontrado!!!";
            getch();
            system("cls");
            break;
        case 3:
            system("cls");
            
            break;
        case 4: {
            system("cls");
            cout<<"Ingrese el numero de cuenta a modificar: ";
            getline(cin,ncuenta);
            
            bool found = false;

            fread(&alumno, sizeof(alumno), 1, base);
            while(!feof(base)) {
                if (alumno.cuenta == ncuenta) {
                	found = true;
                    cout<<"Ingrese los nuevos datos"<<endl;
                    cout<<"Nombre: ";
                    getline(cin,alumno.nom);
                    cout<<"Apellido paterno: ";
                    getline(cin,alumno.apellido1);
                    cout<<"Apellido materno: ";
                    getline(cin,alumno.apellido2);
                    cout<<"Edad: ";
                    cin>>alumno.edad;
                    cin.ignore();
                    cout<<"Sexo: ";
                    getline(cin,alumno.sexo);
                    cout<<"Procedencia: ";
                    getline(cin,alumno.procedencia);
                    cout<<"eMail: ";
                    getline(cin,alumno.email);
                    cout<<"Telefono: ";
                    getline(cin,alumno.tel);

                    fseek(base, ftell(base)-sizeof(alumno), SEEK_SET);
                    fwrite(&alumno, sizeof(alumno), 1, base);
                    cout<<"Registro modificado con exito!!!";
                    fclose(base);
                    getch();
                    system("cls");
                    break;
                }
                fread(&alumno, sizeof(alumno), 1, base);
            }
            
            if (!found) {
            	cout<<"No se encuentra el registro!!!";
			}
            fclose(base);
            getch();
            system("cls");
            break;
        }
        case 5:
            system("cls");
            
            break;
        case 6:
            cout << "Saliendo...." << endl;
            return 0;
        default:
            cout << "Opcion invalida!!!" << endl;
            getch();
            system("cls");
        }
    } while (opc != 6);
    fclose(base);
    return 0;
}