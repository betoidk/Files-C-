#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
void calcular();

int main()
{
	cout<<"Inicia el programa"<<endl;
	system("pause");
	calcular();
	cout<< "Fin del programa"<<endl;
	system("pause");
	return 0;
}

void calcular()
{
	int n,hh,mm,ss,hh24,hhfalta,mmfalta,ssfalta;
	system("cls");
	cout<<"Programa que calcula cuantos horas faltan para terminar el dia."<<endl;
	cout<<"Selecciona AM o PM: "<<endl;
	cout<<"1. AM"<<endl;
	cout<<"2. PM"<<endl;
	cout<<"Ingresa la opcion: ";
	cin>>n;
	
	if (n == 1) {
		cout<<"Ingresa las horas AM: ";
		cin>>hh;
		cout<<"Ingresa los minutos: ";
		cin>>mm;
		cout<<"Ingresa los segundos: ";
		cin>>ss;
		
		hhfalta = hh - 24;
		mmfalta = mm - 59;
		ssfalta = ss - 59;
		
	}
	
	if (n == 2) {
		cout<<"24 HORAS"<<endl;
		cout<<"Ingresa las horas PM: ";
		cin>>hh;
		
		hh24 = 12 + hh;
		
		cout<<"Ingresa los minutos: ";
		cin>>mm;
		cout<<"Ingresa los segundos: ";
		cin>>ss;
		
		hhfalta = 24 - hh24;
		mmfalta = 59 - mm;
		ssfalta = 59 - ss;
	}
	
	cout<<"Las horas que faltan son: "<<hhfalta <<" hrs "<<mmfalta <<" min y "<<ssfalta <<" sgs"<<endl;
}