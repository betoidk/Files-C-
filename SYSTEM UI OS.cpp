#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <ctime>

using namespace std;

void gotoxy(int x,int y);
void OcultarCursor();
void ActivarCursor();
void cuadro(int xs,int ys,int xi,int yi);
void cuadroalt(int xs,int ys,int xi,int yi);
void cuadroalt2(int xs,int ys,int xi,int yi);
void mostrarFechaHora();
void menu();
void menuArea();
void menuPerimetro();

main() {
	menu();
	return 0;
}

void menu() {
	int opc;
	bool salir = false;
	
	while(!salir) {
	system("mode con: cols=90 lines=34");
	cuadro(0,0,85,25); //UI de MI SISTEMA
	cuadro(0,0,85,4);
	cuadroalt(0,0,85,4);
	
	cuadro(0,21,85,21); //UI de FECHA
	cuadro(0,21,15,25);

	
	cuadro(0,21,70,25); //UI de Hora
	
	cuadroalt(0,0,85,21); // UI bordes de Fecha
	cuadroalt2(0,21,15,25);
	
	cuadroalt(0,0,70,21); // UI bordes de Hora
	cuadroalt2(0,21,70,25);
	
	
	cuadro(3,6,18,14);
	
	cuadro(3,6,18,8);
	cuadro(3,6,18,12);
	
	cuadroalt(3,0,18,8);
	cuadroalt(3,0,18,12);
	gotoxy(37.5,2);cout<<"MI SISTEMA";
	mostrarFechaHora();
		
		gotoxy(5,7);cout<<"MENU";
	    gotoxy(5,9);cout<<"1) Area";
	    gotoxy(5,10);cout<<"2) Perimetro";
	    gotoxy(5,11);cout<<"3) Salir";
	    gotoxy(5,13);cout<<"OPCION: ";
	    gotoxy(14,13);cin>>opc;
	    
	    switch(opc) {
	    	case 1:
	    		menuArea();
	    		break;
	    	case 2:
	    		menuPerimetro();
	    		break;
	    	case 3:
	    		gotoxy(5,15);cout<<"Saliendo... "<<endl;
	    		salir = true;
	    		break;
	    	default:
	    		gotoxy(5,15);cout<<"Opcion invalida."<<endl;
	    		getch();
	    		gotoxy(12,13);cout<<"    ";
	    		break;
		}
	}
}

void menuArea() {
	int opc,L,A,B,H,R,RE;
	cuadro(23,6,39,15);
	cuadro(23,6,39,8);
	cuadro(23,6,39,13);
	
	cuadroalt(23,0,39,8);
	cuadroalt(23,0,39,13);
	
	gotoxy(25,7);cout<<"AREA";
	gotoxy(25,9);cout<<"1) Cuadrado";
	gotoxy(25,10);cout<<"2) Triangulo";
	gotoxy(25,11);cout<<"3) Rectangulo";
	gotoxy(25,12);cout<<"4) Circulo";
	gotoxy(25,14);cout<<"OPCION: ";
	gotoxy(34,14);cin>>opc;
	
	switch(opc) {
		case 1:
			cuadro(44,6,80,12);
			cuadro(44,6,80,8);
			cuadro(44,6,80,10);
			
			cuadroalt(44,0,80,8);
			cuadroalt(44,0,80,10);
			gotoxy(46,7);cout<<"CUADRADO";
			gotoxy(46,9);cout<<"Ingresa Lado: ";
			gotoxy(61,9);cin>>L;
			RE = (L * L);
			OcultarCursor();
			gotoxy(46,11);cout<<"El area del cuadrado es: "<<RE;
			getch();
			break;
		case 2:
			cuadro(44,6,80,13);
			cuadro(44,6,80,8);
			cuadro(44,6,80,11);
			
			cuadroalt(44,0,80,8);
			cuadroalt(44,0,80,11);
			gotoxy(46,7);cout<<"TRIANGULO";
			gotoxy(46,9);cout<<"Ingresa Base: ";
			gotoxy(61,9);cin>>B;
			gotoxy(46,10);cout<<"Ingresa Altura: ";
			gotoxy(61,10);cin>>H;
			RE = (B * H) / 2;
			OcultarCursor();
			gotoxy(46,12);cout<<"El area del triangulo es: "<<RE;
			getch();
			break;
		case 3:
			cuadro(44,6,80,13);
			cuadro(44,6,80,8);
			cuadro(44,6,80,11);
			
			cuadroalt(44,0,80,8);
			cuadroalt(44,6,80,11);
			gotoxy(46,7);cout<<"RECTANGULO";
			gotoxy(46,9);cout<<"Ingresa Longitud: ";
			gotoxy(64,9);cin>>L;
			gotoxy(46,10);cout<<"Ingresa Ancho: ";
			gotoxy(61,10);cin>>A;
			RE = (L * A);
			OcultarCursor();
			gotoxy(46,12);cout<<"El area del rectangulo es: "<<RE;
			getch();
			break;
		case 4:
			cuadro(44,6,80,12);
			cuadro(44,6,80,8);
			cuadro(44,6,80,10);
			
			cuadroalt(44,0,80,8);
			cuadroalt(44,0,80,10);
			gotoxy(46,7);cout<<"CIRCULO";
			gotoxy(46,9);cout<<"Ingresa Radio: ";
			gotoxy(61,9);cin>>R;
			RE = 3.1416 * (R * R);
			OcultarCursor();
			gotoxy(46,11);cout<<"El area del circulo es: "<<RE;
			getch();
			break;
		default:
			gotoxy(25,17);cout<<"Opcion invalida";
			getch();
			gotoxy(25,17);cout<<"               ";
			gotoxy(32,14);cout<<"    ";
			menuArea();
	}
}

void menuPerimetro() {
	int opc,L,L1,L2,L3,A,R,RE;
	cuadro(23,6,39,15);
	cuadro(23,6,39,8);
	cuadro(23,6,39,13);
	
	cuadroalt(23,0,39,8);
	cuadroalt(23,0,39,13);
	
	gotoxy(25,7);cout<<"PERIMETRO";
	gotoxy(25,9);cout<<"1) Cuadrado";
	gotoxy(25,10);cout<<"2) Triangulo";
	gotoxy(25,11);cout<<"3) Rectangulo";
	gotoxy(25,12);cout<<"4) Circulo";
	gotoxy(25,14);cout<<"OPCION: ";
	gotoxy(34,14);cin>>opc;
	
	switch(opc) {
		case 1:
			cuadro(44,6,80,12);
			cuadro(44,6,80,8);
			cuadro(44,6,80,10);
			
			cuadroalt(44,0,80,8);
			cuadroalt(44,0,80,10);
			
			gotoxy(46,7);cout<<"CUADRADO";
			gotoxy(46,9);cout<<"Ingresa longitud: ";
			gotoxy(64,9);cin>>L;
			RE = (4 * L);
			OcultarCursor();
			gotoxy(46,11);cout<<"El perimetro del cuadrado es: "<<RE;
			getch();
			break;
		case 2:
			cuadro(44,6,80,14);
			cuadro(44,6,80,8);
			cuadro(44,6,80,12);
			
			cuadroalt(44,0,80,8);
			cuadroalt(44,6,80,12);
			
			gotoxy(46,7);cout<<"TRIANGULO";
			gotoxy(46,9);cout<<"Ingresa Lado 1: ";
			gotoxy(62,9);cin>>L1;
			gotoxy(46,10);cout<<"Ingresa Lado 2: ";
			gotoxy(62,10);cin>>L2;
			gotoxy(46,11);cout<<"Ingresa Lado 3: ";
			gotoxy(62,11);cin>>L3;
			RE = (L1 + L2 + L3);
			OcultarCursor();
			gotoxy(46,13);cout<<"El perimetro del triangulo es: "<<RE;
			getch();
			break;
		case 3:
			cuadro(44,6,81,13);
			cuadro(44,6,81,8);
			cuadro(44,6,81,11);
			
			cuadroalt(44,0,81,8);
			cuadroalt(44,6,81,11);
			
			gotoxy(46,7);cout<<"RECTANGULO";
			gotoxy(46,9);cout<<"Ingresa longitud: ";
			gotoxy(65,9);cin>>L;
			gotoxy(46,10);cout<<"Ingresa ancho: ";
			gotoxy(65,10);cin>>A;
			RE = 2 * (L + A);
			OcultarCursor();
			gotoxy(46,12);cout<<"El perimetro del rectangulo es: "<<RE;
			getch();
			break;
		case 4:
			cuadro(44,6,80,12);
			cuadro(44,6,80,8);
			cuadro(44,6,80,10);
			
			cuadroalt(44,0,80,8);
			cuadroalt(44,6,80,10);
			
			gotoxy(46,7);cout<<"CIRCULO";
			gotoxy(46,9);cout<<"Ingresa radio: ";
			gotoxy(65,9);cin>>R;
			RE = 2 * 3.1416 * R;
			OcultarCursor();
			gotoxy(46,11);cout<<"El perimetro del circulo es: "<<RE;
			getch();
			break;
		default:
			gotoxy(25,17);cout<<"Opcion invalida";
			getch();
			gotoxy(25,17);cout<<"               ";
			gotoxy(32,14);cout<<"    ";
			menuPerimetro();
	}
}

void gotoxy(int x,int y) {
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}

void OcultarCursor() {
	cout<<"\e[?25l";
}

void ActivarCursor() {
	cout<<"\e[?25h";
}

void cuadro(int xs,int ys,int xi,int yi) {
	int i;
	for(i=xs;i<=xi;i++) {
		gotoxy(i,ys);cout<<char(196);
		gotoxy(i,yi);cout<<char(196);
	}
	
	for(i=ys;i<=yi;i++) {
		gotoxy(xs,i);cout<<char(179);
		gotoxy(xi,i);cout<<char(179);
	}
	
	gotoxy(xs,ys);cout<<char(218);
	gotoxy(xi,yi);cout<<char(217);
	gotoxy(xs,yi);cout<<char(192);
	gotoxy(xi,ys);cout<<char(191);
}

void cuadroalt(int xs,int ys,int xi,int yi) {
	gotoxy(xi,yi);cout<<char(180);
	gotoxy(xs,yi);cout<<char(195);

}

void cuadroalt2(int xs,int ys,int xi,int yi) {
	gotoxy(xi,yi);cout<<char(193);
	gotoxy(xi,ys);cout<<char(194);
}

void mostrarFechaHora() {
	time_t now = time(0);
	tm *ltm = localtime(&now);
	
	gotoxy(3,23);cout << setfill('0')<< setw(2)<< ltm->tm_mday<< "/"<< setfill('0')<< setw(2)<< 1 + ltm->tm_mon<< "/"<< 1900 + ltm->tm_year<<endl;
	gotoxy(75,23);cout << setfill('0')<< setw(2)<< ltm->tm_hour<< ":"<< setfill('0')<< setw(2)<< ltm->tm_min<<endl;
}