#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float n1,n2;
	cout<<"Ingresa numero 1: ";
	cin>>n1;
	cout<<"Ingresa numero 2: ";
	cin>>n2;
	
	if (n1 == n2) {
		cout<<n1 <<" Y "<<n2 <<" son iguales";
	} else {
		cout<<n1 <<" Y "<<n2 <<" son desiguales";
	}
	return 0;
}