/* Autor: Alberto
 Fecha: 08/08/24 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int num;
	cout<<"Escribe el numero: ";
	cin>>num;
	if (num % 2 == 0){
		cout<<"El numero es par.";
	} else {
		cout<<"El numero es impar.";
	}
	return 0;
}