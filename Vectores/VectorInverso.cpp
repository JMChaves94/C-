/*Escribe un programa que defina un vector de numeros y muestre
en la salida estandar el vector en orden inverso - del ultimo al primer elem*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[10], n;
	
	cout<<"Ingrese la cantidad de elementos del vector: "; cin>>n;
	
	for (int i=0; i<n; i++){
		//Carga de elementos en vector
		cout<<"\nIngrese elemento: "; cin>>vector[i];
	}
	
	//Mostrar elementos en orden inverso
	
	for (int i=n-1;i>=0;i--){
		cout<<vector[i]<<endl;
	}
	
	
	
	return 0;
}

