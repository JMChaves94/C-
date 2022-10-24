/*Asignacion dinamica de arreglos

new: reserva el numero de bytes solicitado por la declaracion
delete: libera un bloque de bytes reservado con anterioridad

numeros[10]; -> estatico

Ejemplo: pedir al usuario n calificaciones y almacenarlos en  un
arreglo dinamico

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h> //funciona new y delete
using namespace std;

//prototipo de funcion
void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
	pedirNotas();
	mostrarNotas();
	
	delete[] calif;
		
	getch();
	return 0; 
}

void pedirNotas(){
	cout<<"Digite el numero de calificaciones: ";
	cin>>numCalif;
	
	calif = new int[numCalif]; //crear el arreglo de tipo dinamico
	
	for(int i=0;i<numCalif;i++){
		cout<<"Ingrese una nota: ";
		cin>>calif[i];
	}
		
}

void mostrarNotas(){
	cout<<"\n\nMostrando notas del Usuario:\n";
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
}
