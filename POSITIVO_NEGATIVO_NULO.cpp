#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float n1;
	cout<<"Ingresa el numero: ";
	cin>>n1;
	
	if (n1 > 0) {
		cout<<n1 <<" Es positivo";
	}
	if (n1 < 0) {
		cout<<n1 <<" Es negativo";
	}
	if (n1 == 0) {
		cout<<n1 <<" Es nulo";
	}
	return 0;
}