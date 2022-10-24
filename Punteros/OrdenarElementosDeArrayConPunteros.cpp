/*Pedir al usuario N numeros, almacenarlos en un arreglo dinamico
posteriormente ordenar los numeros en orden ascendente y mostrarlos
en pantalla.
NOTA: usar cualquier metodo de ordenamiento*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void ordenarArregloEnOrdenAscendente(int *, int);
void mostrarArregloOrdenado(int *, int);

int nElementos, *elemento;

int main(){
	pedirDatos();
	ordenarArregloEnOrdenAscendente(elemento, nElementos);
	mostrarArregloOrdenado(elemento, nElementos);
	
	delete[] elemento; //liberamos memoria utilizada para el array 
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del Arreglo: ";
	cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0; i<nElementos;i++){
		cout<<"Digite un numero["<<i<<"]: ";
		cin>>*(elemento+i);
	} 
}

void ordenarArregloEnOrdenAscendente(int *elemento, int nElementos){
	int aux;
	
	//ordenar el arreglo con metodo burbuja
	for(int i=0; i<nElementos;i++){
		for(int j=0; j<nElementos-1;j++){
			if(*(elemento+j) > *(elemento+j+1)){
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArregloOrdenado(int *elemento, int nElementos){
	cout<<"\n\nMostrando el Arreglo ordenado: \n\n";
	for(int i=0; i<nElementos;i++){
		cout<<*(elemento+i)<<endl;
	}
}
