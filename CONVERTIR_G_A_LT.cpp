/* Autor: Alberto
 Fecha: 08/08/24 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	float galones,litrosgalon,litros;
	litrosgalon = 3.7854;
	cout<<"Ingresa los galones: ";
	cin>>galones;
	litros=(galones*litrosgalon);
	cout<<"Los "<< galones<<" galones son: "<<litros <<" litros.";
	return 0;
}