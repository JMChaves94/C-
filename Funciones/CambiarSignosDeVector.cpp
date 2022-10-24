/*Realizar una funcion que tome como parametros un vector de 
numeros y su tamaño y cambie el signo de los elementos del vector*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[], int);

int vec[100], tamanio;

int main(){
	pedirDatos();
	cambiarSigno(vec, tamanio);
	mostrarVector(vec, tamanio);
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"\nIngrese la cantidad de elementos del vector: ";
	cin>>tamanio;
	
	for (int i=0; i<tamanio; i++){
		cout<<i+1<<". Ingrese elemento: ";
		cin>>vec[i];
	}
}

void cambiarSigno(int vec[], int tamanio){
	for (int i=0; i<tamanio; i++){
		vec[i] *= -1;
	}
}

void mostrarVector(int vec[], int tamanio){
	cout<<"\nMostrando los elementos del vector con signo cambiado\n";
	for(int i=0; i<tamanio; i++){
		cout<<vec[i]<<" ";
	}
}
