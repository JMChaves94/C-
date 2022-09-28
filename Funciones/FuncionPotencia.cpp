/*Escriba una funcion nombrada funpot() que eleve un numero entero
que se le transmita a una potencia en numero entero positivo y 
despliegue el resultado. El numero entero positivo debera ser el
segundo valor transmitido a la funcion.*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funciones
void pedirDatos();
void funpot(int x, int y);


//variables globales
int numero, exponente;

int main(){
	pedirDatos();
	funpot(numero, exponente);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese un numero: "; cin>>numero;
	cout<<"Ingrese el exponente de elevacion: "; cin>>exponente;
}

void funpot(int x, int y){
	long resultado=1;
	for(int i=0; i<y; i++){
		resultado *= x;
	}
	cout<<"El resultado es: "<<resultado<<endl;
}
