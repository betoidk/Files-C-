#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y);
void cuadro(int xs, int ys, int xi, int yi);
void setColor(int color);

void CrearA();
void CrearM();
void CrearC();

void ConsultaA();
void ConsultaM();
void ConsultaC();

void LeerA();
void LeerM();
void LeerC();

void ActualizarA();
void ActualizarM();
void ActualizarC();

void EliminarA();
void EliminarM();
void EliminarC();

struct Datos {
    int cuenta;
    char nom[50];
    char apellido1[50];
    char apellido2[50];
    int edad;
    char sexo[10];
    char procedencia[50];
    char email[50];
    char tel[20];
};

struct DatosM {
    int cuenta;
    char nom[50];
    int grado;
};

struct DatosC {
    int calificaciones;
    int cuentaM;
    int cuentaA;
};

int main() {
    int opcion, op;
    do {
        system("cls");
        setColor(11);
        cuadro(20, 3, 60, 12);

        gotoxy(30, 4);
        setColor(14);
        cout << "CONTROL ESCOLAR";

        setColor(7);
        gotoxy(25, 6);
        cout << "1. Agregar";
        gotoxy(25, 7);
        cout << "2. Consultas";
        gotoxy(25, 8);
        cout << "3. Actualizar";
        gotoxy(25, 9);
        cout << "4. Eliminar";
        gotoxy(25, 10);
        cout << "5. Reportes";
        gotoxy(25, 11);
        cout << "6. Salir";

        gotoxy(25, 13);
        setColor(15);
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            do {
                system("cls");
                setColor(11);
                cuadro(20, 3, 60, 12);

                gotoxy(30, 4);
                setColor(14);
                cout << "AGREGAR" << endl;

                setColor(7);
                gotoxy(25, 6);
                cout << "1. Alumnos" << endl;
                gotoxy(25, 7);
                cout << "2. Materias" << endl;
                gotoxy(25, 8);
                cout << "3. Calificaciones" << endl;
                gotoxy(25, 9);
                cout << "4. Regresar" << endl;

                gotoxy(25, 11);
                setColor(15);
                cout << "Seleccione una opcion: ";
                cin >> op;

                switch (op) {
                case 1:
                    CrearA();
                    break;
                case 2:
                    CrearM();
                    break;
                case 3:
                    CrearC();
                    break;
                case 4:
                    system("cls");
                    break;
                default:
                    setColor(12);
                    gotoxy(25, 13);
                    cout << "Opcion invalida!" << endl;
                    setColor(7);
                    system("pause");
                    break;
                }
            } while (op != 4);
            break;
        case 2:
            do {
                system("cls");
                setColor(11);
                cuadro(20, 3, 60, 12);

                gotoxy(30, 4);
                setColor(14);
                cout << "CONSULTAS" << endl;

                setColor(7);
                gotoxy(25, 6);
                cout << "1. Alumno" << endl;
                gotoxy(25, 7);
                cout << "2. Materias" << endl;
                gotoxy(25, 8);
                cout << "3. Calificaciones" << endl;
                gotoxy(25, 9);
                cout << "4. Regresar" << endl;

                gotoxy(25, 11);
                setColor(15);
                cout << "Seleccione una opcion: ";
                cin >> op;

                switch (op) {
                case 1:
                    ConsultaA();
                    break;
                case 2:
                    ConsultaM();
                    break;
                case 3:
                    ConsultaC();
                    break;
                case 4:
                    system("cls");
                    break;
                default:
                    setColor(12);
                    gotoxy(25, 13);
                    cout << "Opcion invalida!" << endl;
                    setColor(7);
                    system("pause");
                    break;
                }
            } while (op != 4);
            break;
        case 3:
            do {
                system("cls");
                setColor(11);
                cuadro(20, 3, 60, 12);

                gotoxy(30, 4);
                setColor(14);
                cout << "ACTUALIZAR" << endl;

                setColor(7);
                gotoxy(25, 6);
                cout << "1. Alumno" << endl;
                gotoxy(25, 7);
                cout << "2. Materias" << endl;
                gotoxy(25, 8);
                cout << "3. Calificaciones" << endl;
                gotoxy(25, 9);
                cout << "4. Regresar" << endl;

                gotoxy(25, 11);
                setColor(15);
                cout << "Seleccione una opcion: ";
                cin >> op;

                switch (op) {
                case 1:
                    ActualizarA();
                    break;
                case 2:
                    ActualizarM();
                    break;
                case 3:
                    ActualizarC();
                    break;
                case 4:
                    system("cls");
                    break;
                default:
                    setColor(12);
                    gotoxy(25, 13);
                    cout << "Opcion invalida!" << endl;
                    setColor(7);
                    system("pause");
                    break;
                }
            } while (op != 4);
            break;
        case 4:
            do {
                system("cls");
                setColor(11);
                cuadro(20, 3, 60, 12);

                gotoxy(30, 4);
                setColor(14);
                cout << "ELIMINAR" << endl;

                setColor(7);
                gotoxy(25, 6);
                cout << "1. Alumno" << endl;
                gotoxy(25, 7);
                cout << "2. Materias" << endl;
                gotoxy(25, 8);
                cout << "3. Calificaciones" << endl;
                gotoxy(25, 9);
                cout << "4. Regresar" << endl;

                gotoxy(25, 11);
                setColor(15);
                cout << "Seleccione una opcion: ";
                cin >> op;

                switch (op) {
                case 1:
                    EliminarA();
                    break;
                case 2:
                    EliminarM();
                    break;
                case 3:
                    EliminarC();
                    break;
                case 4:
                    system("cls");
                    break;
                default:
                    setColor(12);
                    gotoxy(25, 13);
                    cout << "Opcion invalida!" << endl;
                    setColor(7);
                    system("pause");
                    break;
                }
            } while (op != 4);
            break;
        case 5:
            do {
                system("cls");
                setColor(11);
                cuadro(20, 3, 60, 12);

                gotoxy(30, 4);
                setColor(14);
                cout << "REPORTES" << endl;

                setColor(7);
                gotoxy(25, 6);
                cout << "1. Alumno" << endl;
                gotoxy(25, 7);
                cout << "2. Materias" << endl;
                gotoxy(25, 8);
                cout << "3. Calificaciones" << endl;
                gotoxy(25, 9);
                cout << "4. Regresar" << endl;

                gotoxy(25, 11);
                setColor(15);
                cout << "Seleccione una opcion: ";
                cin >> op;

                switch (op) {
                case 1:
                    LeerA();
                    break;
                case 2:
                    LeerM();
                    break;
                case 3:
                    LeerC();
                    break;
                case 4:
                    system("cls");
                    break;
                default:
                    setColor(12);
                    gotoxy(25, 13);
                    cout << "Opcion invalida!" << endl;
                    setColor(7);
                    system("pause");
                    break;
                }
            } while (op != 4);
            break;
        case 6:
            setColor(15);
            gotoxy(25, 15);
            cout << "Saliendo..." << endl;
            setColor(15);
            break;
        default:
            setColor(12);
            gotoxy(25, 15);
            cout << "Opcion invalida!" << endl;
            setColor(7);
            system("pause");
            break;
        }
    } while (opcion != 6);
    return 0;
}

void CrearA() {
    fstream archivo("ALUMNOS.DB", ios::in | ios::out | ios::binary);
    Datos alumno;
    int NoBuscar;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 16);

    gotoxy(30, 4);
    setColor(14);
    cout << "AGREGAR NUEVO ALUMNO" << endl;
    cin.ignore();

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese No Cuenta: ";
    cin >> NoBuscar;

    archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    while (!archivo.eof()) {
        if (alumno.cuenta == NoBuscar) {
            setColor(12);
            gotoxy(25, 8);
            cout << "Clave en uso....";
            setColor(7);
            system("pause");
            encontrado = true;
            archivo.close();
            break;
        }
        archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    }
    if (!encontrado) {
        ofstream archivo("ALUMNOS.DB", ios::app | ios::binary);
        cin.ignore();

        gotoxy(25, 10);
        cout << "Ingrese Nombre: ";
        cin.getline(alumno.nom, 50);

        gotoxy(25, 8);
        cout << "Ingrese Apellido Paterno: ";
        cin.getline(alumno.apellido1, 50);

        gotoxy(25, 9);
        cout << "Ingrese Apellido Materno: ";
        cin.getline(alumno.apellido2, 50);

        gotoxy(25, 10);
        cout << "Ingrese Edad: ";
        cin >> alumno.edad;
        cin.ignore();

        gotoxy(25, 11);
        cout << "Ingrese Sexo: ";
        cin.getline(alumno.sexo, 10);

        gotoxy(25, 12);
        cout << "Ingrese Procedencia: ";
        cin.getline(alumno.procedencia, 50);

        gotoxy(25, 13);
        cout << "Ingrese eMail: ";
        cin.getline(alumno.email, 50);

        gotoxy(25, 14);
        cout << "Ingrese Telefono: ";
        cin.getline(alumno.tel, 20);

        alumno.cuenta = NoBuscar; // Lo que hay en NoBuscar se copia a cueta

        archivo.write(reinterpret_cast<char *>(&alumno), sizeof(alumno));
        archivo.close();

        setColor(10);
        gotoxy(25, 19);
        cout << "Alumno agregado correctamente!" << endl;
        setColor(7);
        system("pause");
        system("cls");
    }
}

void CrearM() {
    fstream archivo("MATERIAS.DB", ios::in | ios::out | ios::binary);
    DatosM materia;
    int NoBuscar;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 20);

    gotoxy(30, 4);
    setColor(14);
    cout << "AGREGAR NUEVA MATERIA" << endl;
    cin.ignore();

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese Clave de la materia: ";
    cin >> NoBuscar;

    archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    while (!archivo.eof()) {
        if (materia.cuenta == NoBuscar) {
            setColor(12);
            gotoxy(25, 8);
            cout << "Clave en uso....";
            setColor(7);
            system("pause");
            encontrado = true;
            archivo.close();
            break;
        }
        archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    }
    if (!encontrado) {
        ofstream archivo("MATERIAS.DB", ios::app | ios::binary);
        cin.ignore();

        gotoxy(25, 10);
        cout << "Ingrese Nombre de la materiaa: ";
        cin.getline(materia.nom, 50);

        gotoxy(25, 11);
        cout << "Ingrese grado de la materia: ";
        cin >> materia.grado;

        materia.cuenta = NoBuscar;

        archivo.write(reinterpret_cast<char *>(&materia), sizeof(materia));
        archivo.close();

        setColor(10);
        gotoxy(25, 13);
        cout << "Materia agregado correctamente!" << endl;
        setColor(7);
        system("pause");
        system("cls");
    }
}

void CrearC() {
    fstream archivoAlumnos("ALUMNOS.DB", ios::in | ios::out | ios::binary);
    fstream archivoMaterias("MATERIAS.DB", ios::in | ios::out | ios::binary);
    fstream archivoCalificaciones("CALIFICACIONES.DB", ios::in | ios::out | ios::binary);

    Datos alumno;
    DatosM materia;
    DatosC cal;
    int NoBuscar, NoGrado, ClaveMateria;
    bool encontradoAlumno = false;
    bool encontradoGrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 100, 25);

    gotoxy(30, 4);
    setColor(14);
    cout << "AGREGAR CALIFICACIONES" << endl;
    cin.ignore();

    setColor(7);
    gotoxy(22, 6);
    cout << "Ingrese Clave del alumno: ";
    cin >> NoBuscar;

    archivoAlumnos.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    while (!archivoAlumnos.eof()) {
        if (alumno.cuenta == NoBuscar) {
            encontradoAlumno = true;
            setColor(10);
            gotoxy(22, 8);
            cout << "Nombre: " << alumno.nom << "\t";
            cout << "Apellido Paterno: " << alumno.apellido1 << "\t";
            cout << "Apellido Materno: " << alumno.apellido2 << endl;

            setColor(7);
            gotoxy(22, 10);
            cout << "Ingresa el grado: ";
            cin >> NoGrado;

            archivoMaterias.read(reinterpret_cast<char *>(&materia), sizeof(materia));
            setColor(14);
            gotoxy(22, 12);
            cout << "Materias del grado " << NoGrado << ":" << endl;
            gotoxy(22, 13);
            cout << "CLAVE MATERIA\tNOMBRE MATERIA" << endl;
            while (!archivoMaterias.eof()) {
                if (materia.grado == NoGrado) {
                    encontradoGrado = true;
                    cout << "\t\t\t" << materia.cuenta << "\t\t" << materia.nom << endl;
                }
                archivoMaterias.read(reinterpret_cast<char *>(&materia), sizeof(materia));
            }

            if (encontradoGrado) {
                gotoxy(22, 18);
                cout << "Ingresa la clave de la materia para agregar la calificacion: ";
                cin >> ClaveMateria;

                archivoMaterias.clear();
                archivoMaterias.seekg(0, ios::beg);
                bool materiaEncontrada = false;
                archivoMaterias.read(reinterpret_cast<char *>(&materia), sizeof(materia));
                while (!archivoMaterias.eof()) {
                    if (materia.cuenta == ClaveMateria) {
                        materiaEncontrada = true;
                        setColor(10);
                        gotoxy(22, 20);
                        cout << "Materia seleccionada: " << materia.nom << endl;

                        setColor(7);
                        gotoxy(22, 22);
                        cout << "Ingresa la calificacion: ";
                        cin >> cal.calificaciones;
                        cal.cuentaM = ClaveMateria;
                        cal.cuentaA = alumno.cuenta;

                        archivoCalificaciones.write(reinterpret_cast<char *>(&cal), sizeof(cal));
                        setColor(10);
                        gotoxy(22, 24);
                        cout << "Calificacion agregada!" << endl;
                        break;
                    }
                    archivoMaterias.read(reinterpret_cast<char *>(&materia), sizeof(materia));
                }
                if (!materiaEncontrada) {
                    setColor(12);
                    gotoxy(22, 22);
                    cout << "Clave materia no encontrada!" << endl;
                }
            } else {
                setColor(12);
                gotoxy(22, 22);
                cout << "No se encontraron materias para este grado" << endl;
            }
            break;
        }
        archivoAlumnos.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    }
    if (!encontradoAlumno) {
        setColor(12);
        gotoxy(22, 24);
        cout << "Alumno no encontrado!" << endl;
    }
    archivoAlumnos.close();
    archivoMaterias.close();
    archivoCalificaciones.close();
    setColor(7);
    system("pause");
}

void ConsultaA() {
    fstream archivo("ALUMNOS.DB", ios::in | ios::out | ios::binary);
    Datos alumno;
    int NoBuscar;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 25);

    gotoxy(30, 4);
    setColor(14);
    cout << "CONSULTA DE ALUMNO" << endl;
    cin.ignore();

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese No Cuenta: ";
    cin >> NoBuscar;

    archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    while (!archivo.eof()) {
        if (alumno.cuenta == NoBuscar) {
            setColor(10);
            gotoxy(25, 8);
            cout << "Nombre: " << alumno.nom << endl;
            gotoxy(25, 9);
            cout << "Apellido Paterno: " << alumno.apellido1 << endl;
            gotoxy(25, 10);
            cout << "Apellido Materno: " << alumno.apellido2 << endl;
            gotoxy(25, 11);
            cout << "Edad: " << alumno.edad << endl;
            gotoxy(25, 12);
            cout << "Sexo: " << alumno.sexo << endl;
            gotoxy(25, 13);
            cout << "Procedencia: " << alumno.procedencia << endl;
            gotoxy(25, 14);
            cout << "eMail: " << alumno.email << endl;
            gotoxy(25, 15);
            cout << "Telefono: " << alumno.tel << endl;

            system("pause");
            encontrado = true;
            archivo.close();
            break;
        }
        archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    }
    if (!encontrado) {
        setColor(12);
        gotoxy(25, 18);
        cout << "Alumno no registrado!" << endl;
        setColor(7);
        system("pause");
        system("cls");
    }
}

void ConsultaM() {
    fstream archivo("MATERIAS.DB", ios::in | ios::out | ios::binary);
    DatosM materia;
    int NoBuscar;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 20);

    gotoxy(30, 4);
    setColor(14);
    cout << "Materia a consultar." << endl;
    cin.ignore();

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese clave de la materia: ";
    cin >> NoBuscar;

    archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    while (!archivo.eof()) {
        if (materia.cuenta == NoBuscar) {
            setColor(10);
            gotoxy(25, 8);
            cout << "Nombre: " << materia.nom << endl;
            gotoxy(25, 9);
            cout << "Grado: " << materia.grado << endl;

            system("pause");
            encontrado = true;
            archivo.close();
            break;
        }
        archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    }
    if (!encontrado) {
        setColor(12);
        gotoxy(25, 11);
        cout << "Materia no registrada!" << endl;
        setColor(7);
        system("pause");
        system("cls");
    }
}

void ConsultaC() {
    fstream archivoCal("CALIFICACIONES.DB", ios::in | ios::out | ios::binary);
    fstream archivoAlu("ALUMNOS.DB", ios::in | ios::out | ios::binary);
    Datos alumno;
    DatosC cal;
    int NoBuscar;
    bool encontradoAlu = false;
    bool encontradoCal = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 25);

    gotoxy(30, 4);
    setColor(14);
    cout << "CONSULTA DE CALIFICACIONES" << endl;
    cin.ignore();

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese No Cuenta: ";
    cin >> NoBuscar;

    archivoAlu.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    while (!archivoAlu.eof()) {
        if (alumno.cuenta == NoBuscar) {
            encontradoAlu = true;
            setColor(15);
            gotoxy(25, 8);
            cout << "Nombre: " << alumno.nom << endl;
            gotoxy(25, 9);
            cout << "Apellido Paterno: " << alumno.apellido1 << endl;
            gotoxy(25, 10);
            cout << "Apellido Materno: " << alumno.apellido2 << endl;

            gotoxy(25, 12);
            cout << "Calificaciones:" << endl;

            archivoCal.seekg(0, ios::beg);
            archivoCal.read(reinterpret_cast<char *>(&cal), sizeof(cal));
            while (!archivoCal.eof()) {
                if (cal.cuentaA == NoBuscar) {
                    encontradoCal = true;
                    gotoxy(25, 14 + (cal.cuentaM));
                    cout << "Clave Materia: " << cal.cuentaM << "\tCalificacion: " << cal.calificaciones << endl;
                }
                archivoCal.read(reinterpret_cast<char *>(&cal), sizeof(cal));
            }
            if (!encontradoCal) {
                gotoxy(25, 14);
                cout << "No hay calificaciones registradas" << endl;
            }
            system("pause");
            archivoAlu.close();
            archivoCal.close();
        }
        archivoAlu.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    }
    if (!encontradoAlu) {
        setColor(12);
        gotoxy(25, 18);
        cout << "Alumno no registrado!" << endl;
        setColor(7);
        system("pause");
        system("cls");
    }
    archivoAlu.close();
    archivoCal.close();
}

void ActualizarA() {
    fstream archivo("ALUMNOS.DB", ios::in | ios::out | ios::binary);
    Datos alumno;
    int NoBuscar;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 20);

    gotoxy(30, 4);
    setColor(14);
    cout << "ACTUALIZAR DATOS DEL ALUMNO" << endl;

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese el No Cuenta del alumno a actualizar: ";
    cin >> NoBuscar;

    archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    while (!archivo.eof()) {
        if (alumno.cuenta == NoBuscar) {
            cin.ignore();

            gotoxy(25, 8);
            cout << "Ingrese Nuevo Nombre: ";
            cin.getline(alumno.nom, 50);

            gotoxy(25, 9);
            cout << "Ingrese Nuevo Apellido Paterno: ";
            cin.getline(alumno.apellido1, 50);

            gotoxy(25, 10);
            cout << "Ingrese Nuevo Apellido Materno: ";
            cin.getline(alumno.apellido2, 50);

            gotoxy(25, 11);
            cout << "Ingrese Nueva Edad: ";
            cin >> alumno.edad;
            cin.ignore();

            gotoxy(25, 12);
            cout << "Modifique el Sexo: ";
            cin.getline(alumno.sexo, 10);

            gotoxy(25, 13);
            cout << "Ingrese Nueva Procedencia: ";
            cin.getline(alumno.procedencia, 50);

            gotoxy(25, 14);
            cout << "Ingrese Nuevo eMail: ";
            cin.getline(alumno.email, 50);

            gotoxy(25, 15);
            cout << "Ingrese Nuevo Telefono: ";
            cin.getline(alumno.tel, 20);

            archivo.seekp(-static_cast<int>(sizeof(alumno)), ios::cur);
            archivo.write(reinterpret_cast<char *>(&alumno), sizeof(alumno));

            setColor(10);
            gotoxy(25, 17);
            cout << "Alumno actualizado!" << endl;
            setColor(7);
            system("pause");
            encontrado = true;
            break;
        }
        archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    }
    if (!encontrado) {
        setColor(12);
        gotoxy(25, 17);
        cout << "Alumno no encontrado!" << endl;
        setColor(7);
        system("pause");
    }
    archivo.close();
    system("cls");
}

void ActualizarM() {
    fstream archivo("MATERIAS.DB", ios::in | ios::out | ios::binary);
    DatosM materia;
    int NoBuscar;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 20);

    gotoxy(30, 4);
    setColor(14);
    cout << "ACTUALIZAR MATERIA" << endl;

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese la Clave de la materia a actulizar: ";
    cin >> NoBuscar;

    archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    while (!archivo.eof()) {
        if (materia.cuenta == NoBuscar) {
            cin.ignore();

            gotoxy(25, 8);
            cout << "Ingrese nuevo nombre de la materia: ";
            cin.getline(materia.nom, 50);

            gotoxy(25, 9);
            cout << "Ingrese nuevo grado: ";
            cin >> materia.grado;

            archivo.seekp(-static_cast<int>(sizeof(materia)), ios::cur);
            archivo.write(reinterpret_cast<char *>(&materia), sizeof(materia));

            setColor(10);
            gotoxy(25, 11);
            cout << "Materia actaulizada!" << endl;
            setColor(7);
            system("pause");
            encontrado = true;
            break;
        }
        archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    }
    if (!encontrado) {
        setColor(12);
        gotoxy(25, 11);
        cout << "Materia no encontrada!" << endl;
        setColor(7);
        system("pause");
    }
    archivo.close();
    system("cls");
}

void ActualizarC() {
    fstream archivo("CALIFICACIONES.DB", ios::in | ios::out | ios::binary);
    DatosC calificacion;
    int NoBuscar, ClaveMateria;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 20);

    gotoxy(30, 4);
    setColor(14);
    cout << "ACTUALIZAR CALIFICACION" << endl;

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese el No Cuenta del alumno: ";
    cin >> NoBuscar;

    gotoxy(25, 7);
    cout << "Ingrese la Clave de la materia: ";
    cin >> ClaveMateria;

    archivo.read(reinterpret_cast<char *>(&calificacion), sizeof(calificacion));
    while (!archivo.eof()) {

        if (calificacion.cuentaA == NoBuscar && calificacion.cuentaM == ClaveMateria) {
            encontrado = true;

            gotoxy(25, 9);
            cout << "Ingrese la nueva calificacion: ";
            cin >> calificacion.calificaciones;

            archivo.seekp(-static_cast<int>(sizeof(calificacion)), ios::cur);
            archivo.write(reinterpret_cast<char *>(&calificacion), sizeof(calificacion));

            setColor(10);
            gotoxy(25, 11);
            cout << "Calificacion actualizada!" << endl;
            setColor(7);
            system("pause");
            break;
        }

        archivo.read(reinterpret_cast<char *>(&calificacion), sizeof(calificacion));
    }
    if (!encontrado) {
        setColor(12);
        gotoxy(25, 11);
        cout << "No se encontró la calificacion para ese alumno y materia!" << endl;
        setColor(7);
        system("pause");
    }
    archivo.close();
    system("cls");
}

void EliminarA() {
    ifstream archivo("ALUMNOS.DB", ios::in | ios::binary);
    ofstream archivoTemp("temp.dat", ios::out | ios::binary);
    Datos alumno;
    int NoBuscar;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 10); // Cuadro visual para la interfaz

    gotoxy(30, 4);
    setColor(14);
    cout << "ELIMINAR ALUMNO" << endl;

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese el No Cuenta del alumno a eliminar: ";
    cin >> NoBuscar;

    archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    while (!archivo.eof()) {
        if (alumno.cuenta != NoBuscar) {
            archivoTemp.write(reinterpret_cast<char *>(&alumno), sizeof(alumno));
        } else {
            encontrado = true;
        }
        archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    }
    archivo.close();
    archivoTemp.close();

    remove("ALUMNOS.DB");
    rename("temp.dat", "ALUMNOS.DB");

    setColor(10);
    gotoxy(25, 8);
    if (encontrado) {
        cout << "Alumno eliminado correctamente!" << endl;
    } else {
        setColor(12);
        cout << "Alumno no encontrado!" << endl;
    }
    setColor(7);
    system("pause");
    system("cls");
}

void EliminarM() {
    ifstream archivo("MATERIAS.DB", ios::in | ios::binary);
    ofstream archivoTemp("temp.dat", ios::out | ios::binary);
    DatosM materia;
    int NoBuscar;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 20);

    gotoxy(30, 4);
    setColor(14);
    cout << "ELIMINAR MATERIA" << endl;

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese la Clave de la materia a eliminar: ";
    cin >> NoBuscar;

    archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    while (!archivo.eof()) {
        if (materia.cuenta != NoBuscar)
        {
            archivoTemp.write(reinterpret_cast<char *>(&materia), sizeof(materia));
        } else {
            encontrado = true;
        }
        archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    }
    archivo.close();
    archivoTemp.close();

    remove("MATERIAS.DB");
    rename("temp.dat", "MATERIAS.DB");
    if (encontrado) {
        setColor(10);
        gotoxy(25, 8);
        cout << "Materia eliminada!" << endl;
    } else {
        setColor(12);
        gotoxy(25, 8);
        cout << "Materia no encontrada!" << endl;
    }
    setColor(7);
    system("pause");
}

void EliminarC() {
    ifstream archivoCal("CALIFICACIONES.DB", ios::in | ios::out | ios::binary);
    ofstream archivoTemp("Temp.dat", ios::in | ios::out | ios::binary);
    DatosC cal;
    int NoBuscar, ClaveM;
    bool encontrado = false;

    system("cls");
    setColor(11);
    cuadro(20, 3, 80, 20);

    gotoxy(30, 4);
    setColor(14);
    cout << "ELIMINAR CALIFICACION" << endl;

    setColor(7);
    gotoxy(25, 6);
    cout << "Ingrese el No Cuenta del alumno: ";
    cin >> NoBuscar;

    gotoxy(25, 8);
    cout << "Ingrese la Clave de la materia: ";
    cin >> ClaveM;

    archivoCal.read(reinterpret_cast<char *>(&cal), sizeof(cal));
    while (!archivoCal.eof()) {
        if (cal.cuentaA != NoBuscar || cal.cuentaM != ClaveM)
        {
            archivoTemp.write(reinterpret_cast<char *>(&cal), sizeof(cal));
        } else {
            encontrado = true;
        }
        archivoCal.read(reinterpret_cast<char *>(&cal), sizeof(cal));
    }
    archivoCal.close();
    archivoTemp.close();

    remove("CALIFICACION.DB");
    rename("temp.dat", "CALIFICACION.DB");

    setColor(10);
    gotoxy(25, 10);
    if (encontrado) {
        cout << "Calificacion eliminada correctamente!" << endl;
    } else {
        setColor(12);
        cout << "Calificacion no encontrada!" << endl;
    }
    setColor(7);
    system("pause");
    system("cls");
}

void LeerA() {
    ifstream archivo("ALUMNOS.DB", ios::in | ios::binary);
    Datos alumno;

    system("cls");
    setColor(11);

    gotoxy(30, 4);
    setColor(14);
    cout << "---- Listado de Alumnos ----" << endl;

    setColor(7);
    cout << left << setw(12) << "No Cuenta"
         << setw(15) << "Nombre"
         << setw(18) << "Apellido Paterno"
         << setw(18) << "Apellido Materno"
         << setw(5) << "Edad"
         << setw(6) << "Sexo"
         << setw(15) << "Procedencia"
         << setw(20) << "eMail"
         << setw(12) << "Telefono" << endl;

    archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    while (!archivo.eof()) {
        cout << left << setw(12) << alumno.cuenta
             << setw(15) << alumno.nom
             << setw(18) << alumno.apellido1
             << setw(18) << alumno.apellido2
             << setw(5) << alumno.edad
             << setw(6) << alumno.sexo
             << setw(15) << alumno.procedencia
             << setw(20) << alumno.email
             << setw(12) << alumno.tel << endl;
        archivo.read(reinterpret_cast<char *>(&alumno), sizeof(alumno));
    }
    archivo.close();
    setColor(10);
    cout << "Fin de lista" << endl;
    setColor(7);
    system("pause");
}

void LeerM() {
    ifstream archivo("MATERIAS.DB", ios::in | ios::binary);
    DatosM materia;

    system("cls");
    setColor(11);

    gotoxy(30, 4);
    setColor(14);
    cout << "---- Listado de Materias ----" << endl;

    setColor(7);
    cout << left << setw(10) << "Clave"
         << setw(20) << "Nombre"
         << setw(8) << "Grado" << endl;

    archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    while (!archivo.eof()) {
        cout << left << setw(10) << materia.cuenta
             << setw(20) << materia.nom
             << setw(8) << materia.grado << endl;

        archivo.read(reinterpret_cast<char *>(&materia), sizeof(materia));
    }
    archivo.close();
    setColor(10);
    cout << "Fin de lista" << endl;
    setColor(7);
    system("pause");
}

void LeerC() {
    ifstream archivoCal("CALIFICACIONES.DB", ios::in | ios::out | ios::binary);
    ifstream archivoMat("MATERIAS.DB", ios::in | ios::out | ios::binary);
    DatosC cal;
    DatosM materia;

    system("cls");
    setColor(11);

    gotoxy(30, 4);
    setColor(14);
    cout << "---- Listado de Calificaciones ----" << endl;

    setColor(7);
    cout << left << setw(12) << "No Cuenta"
         << setw(18) << "Clave Materia"
         << setw(20) << "Nombre Materia"
         << setw(12) << "Calificacion" << endl;

    archivoCal.read(reinterpret_cast<char *>(&cal), sizeof(cal));
    while (!archivoCal.eof()) {
        archivoMat.seekg(0, ios::beg);
        while (archivoMat.read(reinterpret_cast<char *>(&materia), sizeof(materia))) {
            if (materia.cuenta == cal.cuentaM) {
                cout << left << setw(12) << cal.cuentaA
                     << setw(18) << cal.cuentaM
                     << setw(20) << materia.nom
                     << setw(12) << cal.calificaciones << endl;
                break;
            }
        }
        archivoCal.read(reinterpret_cast<char *>(&cal), sizeof(cal));
    }
    archivoCal.close();
    archivoMat.close();
    setColor(10);
    cout << "Fin de Lista" << endl;
    setColor(7);
    system("pause");
}

void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void cuadro(int xs, int ys, int xi, int yi) {
    int i;
    for (i = xs; i <= xi; i++) {
        gotoxy(i, ys);
        cout << char(196);
        gotoxy(i, yi);
        cout << char(196);
    }

    for (i = ys; i <= yi; i++) {
        gotoxy(xs, i);
        cout << char(179);
        gotoxy(xi, i);
        cout << char(179);
    }
    gotoxy(xs, ys);
    cout << char(218);
    gotoxy(xi, yi);
    cout << char(217);
    gotoxy(xs, yi);
    cout << char(192);
    gotoxy(xi, ys);
    cout << char(191);
}

void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}