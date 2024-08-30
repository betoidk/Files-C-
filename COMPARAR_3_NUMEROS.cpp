#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float n1,n2,r;
	cout<<"Ingresa el numero 1: ";
	cin>>n1;
	cout<<"Ingresa el numero 2: ";
	cin>>n2;
	
	if (n1 == n2) {
		r = (n1 * n2);
		cout<<"El resultado de "<<n1 <<" * "<<n2 <<" es: "<<r; 
	}
	if (n1 > n2) {
		r = (n1 - n2);
		cout<<"El resultado de "<<n1 <<" - "<<n2 <<" es: "<<r;
	} 
	if (n1 < n2) {
		r = (n1 + n2);
		cout<<"El resultado de "<<n1 <<" + "<<n2 <<" es: "<<r;
	}
	return 0;
}