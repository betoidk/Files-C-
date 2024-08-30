/* Autor: Alberto
 Fecha: 08/08/24 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	float km,lt,consumo;
	cout<<"Ingresa los kilometros: ";
	cin>>km;
	cout<<"Ingresa los litros de combustible: ";
	cin>>lt;
	consumo=(lt/km);
	cout<<"Los litros consumidos son: "<< consumo<< " litros. ";
	return 0;
}