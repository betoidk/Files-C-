/* Autor: Alberto
 Fecha: 08/08/24 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float contra,contracorrecta;
	contracorrecta = 1234567;
	cout<<"Ingresa la contrasena: ";
	cin>>contra;
	if (contra == contracorrecta) {
		cout<<"Contrasena correcta.";
	} else {
		cout<<contra <<" Es incorrecto intentalo de nuevo.";
	}
	return 0;
}