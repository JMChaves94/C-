/*Rellenar una matriz pidiendo al usuario el numero de filas y columnas
mostrar la matriz en pantalla*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[10][10], filas, columnas;
	
	cout<<"Ingresar numero de filas: ";
	cin>>filas;
	
	cout<<"Ingresar numero de columnas: ";
	cin>>columnas;
	
	
	//Almacenando elementos en la matriz
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	//Mostrar la matriz
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
