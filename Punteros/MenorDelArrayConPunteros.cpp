/*
Rellenar un array con n numeros, posteriormente usando punteros
determinar el menor elemento del arreglo
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, *dirNum, vecNum[999], menor=99999;
	
	cout<<"Ingrese la longitud del array: ";
	cin>>n;
	
	
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese elemento: "<<endl;
		cin>>vecNum[i];
	}
	
	dirNum = vecNum;
	
	for(int i=0; i<n; i++){
		if(*dirNum < menor){
			menor = *dirNum;
		} 
		dirNum++;
	}
	
	cout<<"El elemento menor es: "<<menor<<endl;
	
	getch();
	return 0;
}
