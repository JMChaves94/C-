//Insercion

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[] = {4,2,3,1,5};
	int i, posicion, aux;
	
	for(i=0;i<5;i++){
		posicion = i;
		aux = vector[i];
		
		while((posicion>0) and (vector[posicion-1] > aux)){
			vector[posicion] = vector[posicion-1];
			posicion--;
		}
		vector[posicion] = aux;
	}	
	cout<<endl;
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<vector[i]<<" ";
	}
	cout<<endl;
	cout<<"Orden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<vector[i]<<" ";
	}
	
	getch();
	return 0;
}
