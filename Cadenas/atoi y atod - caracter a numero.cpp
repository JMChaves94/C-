//atoi y atof - cadenas a numeros

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[] = "123";
	char cadena[] = "234.345";
	int numero, numero2;
	
	numero = atoi(cad);
	numero2 = atof(cad);
	
	cout<<numero<<endl;
	cout<<numero2<<endl;
	
	getch();
	return 0;
}
