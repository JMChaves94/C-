/*Escribe un programa que lea de la entrada estandar un vector de numeros
y muestre en la salida estandar los numeros del vector con sus indices*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100],n;
	
	cout<<"Digite el numero de elementos del arreglo: "; cin>>n;
	
	for (int i=0;i<n;i++){
		cout<<"Digite un numero: "; cin>>numeros[i]; //Guardando los elementos del vector
	}
	
	//Ahora, mostramos los elementos con sus indices asociados
	
	for (int i=0;i<n;i++){
		cout<<"Posicion: "<<i<<" -> "<<numeros[i]<<endl;
	}
	
	return 0; 
}

