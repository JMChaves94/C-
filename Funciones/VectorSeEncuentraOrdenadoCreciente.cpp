/*Realizar funcion que tome como parametros un vector y su tamaño
y diga si el vector esta ordenado crecientemente

Comprobar que para todas las posiciones del vector, salvo para la 0
el elemento del vector es mayor o igual que el elemento que le precede
en el vector*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void estaOrdenado(int vec[], int);

int vec[100], tamanio;

int main(){
	pedirDatos();
	estaOrdenado(vec, tamanio);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese la cantidad de elementos del vector: ";
	cin>>tamanio;
	
	for (int i=0; i<tamanio; i++){
		cout<<i+1<<". Ingrese el elemento: ";
		cin>>vec[i];
	}
}

void estaOrdenado(int vec[], int tamanio){
	int verificador=0;
	for(int i=0; i<tamanio-1; i++){		
			if(vec[i] > vec[i+1]){
				cout<<"El vector no esta ordenado"<<endl;
				break;
			}
			else{
				verificador ++;
			}
		
		
	}
	
	if (verificador == tamanio-1){
		cout<<"El vector se encuentra ordenado"<<endl;
	}
	
	
	
	
}
