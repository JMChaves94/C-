/*Escriba una funcion llamada alCuadrado() que calcule el cuadrado
del valor que se le transmite y despliegue el resultado. la funcion
debera ser capaz de elevar al cuadrado numeros flotantes*/

#include<iostream>
#include<conio.h>
using namespace std;
//Prototipo de funciones

void pedirNumero();
void alCuadrado(float num);

//Variable global
float n;

int main(){
	pedirNumero();
	alCuadrado(n);
	getch();
	return 0;
}


void pedirNumero(){
	
	cout<<"Ingrese un numero: ";
	cin>>n;
}

void alCuadrado(float num){
	float cuadrado = num * num;
	
	cout<<"El cuadrado es: "<<cuadrado<<endl;
}
