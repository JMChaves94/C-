/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo
para que muestre la diagonal principal de la matriz*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[10][10], filas, columnas;
	
	cout<<"Ingrese nro de filas: ";
	cin>>filas;
	
	cout<<"Ingrese nro de columnas: ";
	cin>>columnas;
	
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			if (i == j){
				cout<<matriz[i][j];
			}
			cout<<"\n";
		}
	}
	
	return 0;
}
