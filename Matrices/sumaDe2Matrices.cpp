/*realice un programa que calcule la suma de 2 matrices cuadradas
de 3x3*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matrizUno[3][3], matrizDos[3][3], matrizSuma[3][3];
		
	//Rellenando matrizUno
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese un numero para la primer matriz: ";
			cin>>matrizUno[i][j];	
		}	
	}
	
	cout<<endl;
	
	//Rellenando matrizDos
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Ingrese un numero para la segunda matriz: ";
			cin>>matrizDos[i][j];	
		}	
	}
	cout<<endl;
	cout<<"Matriz Suma\n"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matrizSuma[i][j] = matrizUno[i][j] + matrizDos[i][j];	
		}	
	}
	
	//Imprimir matrizSuma
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matrizSuma[i][j]<<" ";	
		}
		cout<<"\n";	
	}
	
	
	getch();
	return 0;
}
