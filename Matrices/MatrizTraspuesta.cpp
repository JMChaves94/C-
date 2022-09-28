/*realizar un programa que lea una matriz de 3x3 y cree su matriz traspuesta
la matriz traspuesta es aquella en la que la columna i era la fila y de la matriz
original.
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int matriz[3][3];
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<"Ingrese un numero: ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<endl;
	
	cout<<"matriz original\n";
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<endl;
	
	cout<<"matriz traspuesta\n";
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout<<matriz[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	getch();
	return 0;
}
