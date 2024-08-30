#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>

using namespace std;
void gotoxy(int x,int y);
void OcultarCursor();
void ActivarCursor();
void cuadro(int xs,int ys,int xi,int yi);

main() {
	int col,con;
	
	system("mode con: cols=80 lines=24");
	col = 15;
	con = 0;
	
	OcultarCursor();
	gotoxy(30,8);cout<<"Cargando 0";
	cuadro(5,5,70,20);
	cuadro(14,9,66,11);
	for (int x=1;x<=51;x++) {
		system("Color 1F");
		gotoxy(col,10);cout<<char(219);
		gotoxy(39,8);cout<<con<<" %";
		con = con + 2;
		col++;
		Sleep(50);
	}
	ActivarCursor();
	gotoxy(15,2);
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