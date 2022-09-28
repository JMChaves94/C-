/*Escribe un programa que defina un vector de numeros y calcule si existe
algun numero en el vector cuyo valor equivale a la suma del resto de 
numeros del vector*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[1000],n,suma=0,mayor=0;
	
 	cout<<"Ingrese la cantidad de numero que ingresara en el arreglo: ";
 	cin>>n;
 	
 	for(int i=0;i<n;i++){
 		cout<<"Ingrese el numero "<<i+1<<" : "; cin>>vector[i];
 			suma +=vector[i];
 			
 		if(vector[i]>mayor){
 			mayor= vector[i];
 			
		 }
	 }
	
	if(mayor==suma-mayor){
		cout<<"Encontramos que el numero: "<<mayor<<" coincide con la suma de los demas elementos del vector";
	 	}
	
	else{
		cout<<"No coincide ninguno";
		 }
	 	getch();

	
	
	return 0;
}
