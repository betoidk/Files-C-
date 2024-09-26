#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona {
    char nombre[50];
    int edad;
};

void agregarPersona();
void mostrarPersonas();
void modificarPersona();
void eliminarPersona();

int main() {
    int opcion;
    do {
        cout << "\n--- CRUD en C++ ---\n";
        cout << "1. Agregar Persona\n";
        cout << "2. Mostrar Personas\n";
        cout << "3. Modificar Persona\n";
        cout << "4. Eliminar Persona\n";
        cout << "5. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: agregarPersona(); break;
            case 2: mostrarPersonas(); break;
            case 3: modificarPersona(); break;
            case 4: eliminarPersona(); break;
            case 5: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida\n"; break;
        }
    } while(opcion != 5);

    return 0;
}

void agregarPersona() {
    Persona persona;
    ofstream archivo("personas.dat", ios::binary | ios::app);

    if (!archivo) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    cout << "Ingrese nombre: ";
    cin.ignore();
    cin.getline(persona.nombre, 50);
    cout << "Ingrese edad: ";
    cin >> persona.edad;

    archivo.write(reinterpret_cast<char*>(&persona), sizeof(Persona));
    archivo.close();
    cout << "Persona agregada correctamente.\n";
}

void mostrarPersonas() {
    Persona persona;
    ifstream archivo("personas.dat", ios::binary);

    if (!archivo) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    cout << "\n--- Lista de Personas ---\n";
    while (archivo.read(reinterpret_cast<char*>(&persona), sizeof(Persona))) {
        cout << "Nombre: " << persona.nombre << "\n";
        cout << "Edad: " << persona.edad << "\n";
        cout << "----------------------\n";
    }

    archivo.close();
}

void modificarPersona() {
    Persona persona;
    fstream archivo("personas.dat", ios::binary | ios::in | ios::out);
    char nombreBuscado[50];
    bool encontrado = false;

    if (!archivo) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    cout << "Ingrese el nombre de la persona a modificar: ";
    cin.ignore();
    cin.getline(nombreBuscado, 50);

    while (archivo.read(reinterpret_cast<char*>(&persona), sizeof(Persona))) {
        if (strcmp(persona.nombre, nombreBuscado) == 0) {
            cout << "Persona encontrada.\n";
            cout << "Ingrese el nuevo nombre: ";
            cin.getline(persona.nombre, 50);
            cout << "Ingrese la nueva edad: ";
            cin >> persona.edad;

            archivo.seekp(-static_cast<int>(sizeof(Persona)), ios::cur);
            archivo.write(reinterpret_cast<char*>(&persona), sizeof(Persona));
            encontrado = true;
            cout << "Persona modificada correctamente.\n";
            break;
        }
    }

    if (!encontrado) {
        cout << "Persona no encontrada.\n";
    }

    archivo.close();
}

void eliminarPersona() {
    Persona persona;
    ifstream archivo("personas.dat", ios::binary);
    ofstream archivoTemporal("temp.dat", ios::binary);
    char nombreBuscado[50];
    bool encontrado = false;

    if (!archivo || !archivoTemporal) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    cout << "Ingrese el nombre de la persona a eliminar: ";
    cin.ignore();
    cin.getline(nombreBuscado, 50);

    while (archivo.read(reinterpret_cast<char*>(&persona), sizeof(Persona))) {
        if (strcmp(persona.nombre, nombreBuscado) != 0) {
            archivoTemporal.write(reinterpret_cast<char*>(&persona), sizeof(Persona));
        } else {
            encontrado = true;
        }
    }

    archivo.close();
    archivoTemporal.close();

    remove("personas.dat");
    rename("temp.dat", "personas.dat");

    if (encontrado) {
        cout << "Persona eliminada correctamente.\n";
    } else {
        cout << "Persona no encontrada.\n";
    }
}
