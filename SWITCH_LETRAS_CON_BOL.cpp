/*Autor: Alberto Lujan
Fecha: 13/08/24*/
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
    int opc;
    bool salir = false;

    while (!salir) {
    	system("cls");
        cout << "MENU DE OPCIONES: " << endl;  
        cout << "1.----opcion 1" << endl; 
        cout << "2.----opcion 2" << endl;
        cout << "3.----opcion 3" << endl;
        cout << "4.----salir" << endl;
        cout << "*elige la opcion:*" << endl;
        cin >> opc; 

        switch (opc) {
            case 1:
            	system("cls");
                cout << "elegiste la opcion 1" << endl;
                system("pause");
                break;
            case 2:
            	system("cls");
                cout << "elegiste la opcion 2" << endl;
                system("pause");
                break;
            case 3:
            	system("cls");
                cout << "elegiste la opcion 3" << endl;
                system("pause");
                break;
            case 4:
            	system("cls");
                cout << "saliendo..." << endl;
                salir = true;
                break;        
            default:
            	system("cls");
                cout << "ingresa una opcion valida" << endl;
                system("pause");
                break;
        }
    }

    return 0;
}