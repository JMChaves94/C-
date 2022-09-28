/*desarrolle un programa que lea de la entrada estandar un vector de enteros
y determine el mayor elemento del vector*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[100], n, mayor=0;
	
	cout<<"Digite un numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese elemento: ";
		cin>>vector[i];
		
		if(vector[i] > mayor){
			mayor = vector[i];
		}
	}
	
	cout<<"\nEl numero mayor es: "<<mayor<<endl;
	
	return 0;
}
