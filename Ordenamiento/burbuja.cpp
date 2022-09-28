//metodo burbuja

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[] = {4,1,2,3,5};
	int i,j,aux;
	
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(vector[j] > vector[j+1]){
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}
		}
	}
	
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
