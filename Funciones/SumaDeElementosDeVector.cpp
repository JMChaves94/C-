/*Realizar una funcion que tome como parametros un vector
de numeros enteros y devuelva la suma de sus elementos*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tamanio;

int main(){
	pedirDatos();
	
	cout<<"\nLa suma de los elementos del vector es: "<<calcularSuma(vec, tamanio)<<endl;
	
	getch();
	return 0;
}


void pedirDatos(){
	cout<<"Digite el numero de elementos del vector: ";
	cin>>tamanio;
	
	for(int i=0; i<tamanio;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

int calcularSuma(int vec[], int tamanio){
	int suma=0;
	
	for(int i=0; i<tamanio; i++){
		suma += vec[i];
	}
	
	return suma;
}
 
