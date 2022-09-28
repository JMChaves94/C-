/*matriz de tipo entera de 2x2, llenarla de numeros y luego copiar
todo su contenido a otra matriz*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[2][2] = {{1,2},{3,4}};
	int matriz2[2][2];
	
	//pasando contenido de matriz a matriz2
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			matriz2[i][j] = matriz[i][j];
		}
	}
	
	//mostrando matriz 2
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}
	
	
	getch();
	return 0;
}
