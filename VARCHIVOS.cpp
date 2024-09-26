#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

main(){
FILE *alias;
	 alias = fopen("EJEMPLO.DAT", "rb");
	 if (alias==NULL)
	 {
	 cout << "\n\r No se puede abrir el archivo !!!";
	 getch();
	 return 0;
	 } 
 	return 0;
}
