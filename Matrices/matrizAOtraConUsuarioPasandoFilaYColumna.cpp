
/*hacer una matriz preguntando al usuario el numero de filas y columnas,
llenarla de numeros aleatorios, copiar el contenido a otra matriz
y mostrarla en pantalla*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int filas, columnas; //iniciando variables de filas y columnas
	
	cout<<"Ingrese el numero de filas: ";
	cin>>filas; //Se ingresa nro de filas y se almacena en variable filas
	
	cout<<"Ingrese el numero de columnas: ";
	cin>>columnas; //Se ingresa nro de columnas y se almacena en variable col..
	
	int matriz[filas][columnas]; //se declara matriz con las f y c declaradas
	int otraMatriz[filas][columnas];//se declara otra matriz donde se va a copiar
	
	
	//Se ingresan elementos en la matriz original
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout<<"Ingrese un numero: ";
			cin>>matriz[i][j];
		}
	}
	
	
	//Se copia el contenido de la matriz a otraMatriz
	
	
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			otraMatriz[i][j] = matriz[i][j];
		}
	}
	
	//Se imprime la otraMatriz
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout<<otraMatriz[i][j];
		}
		cout<<"\n";
	}
	
	
	
	
	getch();
	return 0;
}
