#include <stdio.h>
#include <windows.h>
#include <iostream>

using namespace std;
void gotoxy(int x,int y);
void pidedato();
void calcula();

int h,m,s;

main() {
	gotoxy(2,1);cout<<"Programa que va a calcular las horas que faltan para terminar el dia."<<endl;
	gotoxy(41,20);system("pause");
	pidedato();
	gotoxy(41,20);system("pause");
	calcula();
	gotoxy(41,20);system("pause");
	return 0;
}

void gotoxy(int x,int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void pidedato() {
	
	system("cls");
	gotoxy(2,2);cout<<"Ingresa los datos: Horas, Minutos y Segundos: ";
	gotoxy(54,12);cout<<"HH";
	gotoxy(57,12);cout<<"MM";
	gotoxy(60,12);cout<<"SS";
	gotoxy(54,13);cout<<"00:00:00"<<endl;
	
	do {
		gotoxy(54,13);cin>>h;
		if (h>23 || h<0) {
			gotoxy(41,15);cout<<"Hora o formato no valido... Debe ser <= 23";
			gotoxy(41,20);system("pause");
			gotoxy(41,15);cout<<"                                          ";
			gotoxy(54,13);cout<<"00:00:00";
		}
	} while (h > 23 || h < 0);
	
	do {
		gotoxy(57,13);cin>>m;
		if (m>59 || m<0) {
			gotoxy(41,15);cout<<"Hora o formato no valido... Debe ser <= 59";
			gotoxy(41,20);system("pause");
			gotoxy(41,15);cout<<"                                          ";
			gotoxy(57,13);cout<<"00";
			
		}
	} while (m > 59 || m < 0);
	
	do {
		gotoxy(60,13);cin>>s;
		if (s>59 || s<0) {
			gotoxy(41,15);cout<<"Hora o formato no valido... Debe ser <= 59";
			gotoxy(41,20);system("pause");
			gotoxy(41,15);cout<<"                                          ";
			gotoxy(60,13);cout<<"00";
		}
	} while (s > 59 || s < 0
	);
	
}

void calcula() {
	h = 24 - h;
	m = 59 - m;
	s = 59 - s;
	
	gotoxy(2,15);cout<<"Las horas que faltan son: "<<h <<" hrs "<<m <<" min y "<<s <<" seg"<<endl;
}