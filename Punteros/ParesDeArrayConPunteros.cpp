/*
Rellenar un array de 10 numeros, posteriormente utilizando punteros
indicar cuales son numeros pares y su posicion en memoria
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numeros[10], *dirNum;
	
	for(int i=0; i<10; i++){
		cout<<"Ingrese un numero["<<i<<"]: ";
		cin>>numeros[i];
	}
	
	dirNum = numeros;
	
	for(int i=0;i<10;i++){
		if(*dirNum % 2 == 0){
			cout<<"El numero "<<*dirNum<<" es par"<<endl;
			// * devuelve el numero, sin * devuelve la posicion
			cout<<"Posicion: "<<dirNum<<endl;
		}
		dirNum++;
	}
	
	getch();
	return 0;
}
