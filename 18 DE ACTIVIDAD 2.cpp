/**/
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	double a,b,c;
	
	cout<<"Ingresa longitud 1: ";
	cin>>a;
	cout<<"Ingresa longitud 2: ";
	cin>>b;
	cout<<"Ingresa longitud 3: ";
	cin>>c;
	
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b && b == c) {
			cout<<"Es un triangulo equilatero."<<endl;
		} else if (a == b || b == c || a == c) {
			cout<<"Es un triangulo isosceles."<<endl;
		} else {
			cout<<"Es un triangulo escaleno."<<endl;
		}
	} else {
		cout<<"No forman un triangulo."<< endl;
	}
	return 0;
}