#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	float cal1,cal2,cal3,prom;
	cout<<"Ingresa la calificacion 1: ";
	cin>>cal1;
	cout<<"Ingresa la calificacion 2: ";
	cin>>cal2;
	cout<<"Ingresa la calificacion 3: ";
	cin>>cal3;
	
	prom = (cal1 + cal2 + cal3) / 3;
	
	if ( prom >= 8 ) {
		cout<<"El alumno esta aprobado con un promedio de: "<<prom;
	} else {
		cout<<"El alumno esta reprobado con un promedio de: "<<prom;
	}
	return 0;
}