/**/
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n, i, cAprobadas = 0, cReprobadas = 0;
	double nota, sAprobadas = 0, sReprobadas = 0, sTotal = 0, promedioTotal, promedioAprobadas, promedioReprobadas;
	
	cout<<"Ingresa el numero de notas: ";
	cin>>n;
	
	for (i=0;i<n;i++) {
		cout<<"Ingresa la nota "<< i + 1 << ": ";
		cin>>nota;
		
		sTotal += nota;
		
		if (nota >= 6) {
			sAprobadas += nota;
			cAprobadas++;
		} else {
			sReprobadas += nota;
			cReprobadas++;
		}
	}
	
	promedioTotal = (sTotal / n);
	promedioAprobadas = (cAprobadas > 0) ? sAprobadas / cAprobadas : 0;
	promedioReprobadas = (cReprobadas > 0) ? sReprobadas / cReprobadas : 0;
	
	cout<<"\nResultados:"<<endl;
	cout<<"Notas aprobadas: "<<cAprobadas<<endl;
	cout<<"Notas reprobadas: "<<cReprobadas<<endl;
	cout<<"Promedio total de notas: "<<promedioTotal<<endl;
	
	if (cAprobadas > 0) {
		cout<<"Promedio de notas aprobadas: "<<promedioAprobadas<<endl;
	} else {
		cout<<"Promedio de notas aprobadas: No hay notas aprobadas"<<endl;
	}
	
	if (cReprobadas > 0) {
		cout<<"Promedio de notas reprobadas: "<<promedioReprobadas<<endl;
	} else {
		cout<<"Prmedio de notas reprobadas: No hay notas reprobadas"<<endl;
	}
	
	return 0;
}