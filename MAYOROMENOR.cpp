/* Autor: Alberto
 Fecha: 08/08/24 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float n1,n2;
	cout<<"Ingresa numero 1: ";
	cin>>n1;
	cout<<"Ingresa numero 2: ";
	cin>>n2;
	if (n1 > n2) {
		cout<<n1 <<" es mayor que "<<n2;
	} else {
		cout<<n1 <<" es menor que "<<n2;
	}
	return 0;
}