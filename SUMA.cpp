/* Autor: Alberto
 Fecha: 08/08/24 */
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	float num1,num2,num3,suma;
	cout << "Ingresa numero 1: " << endl;
	cin>>num1;
	cout<<"Ingresa numero 2: "<< endl;
	cin>>num2;
	cout<<"Ingresa numero 3: "<< endl;
	cin>>num3;
	suma=(num1+num2+num3);
	cout<<"La suma de: "<< num1<<" + "<< num2<< " + "<< num3<<" = "<<suma;
	return 0;
}