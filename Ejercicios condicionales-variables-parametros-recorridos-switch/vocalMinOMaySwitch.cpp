/*
Escriba un programa que lea de la entrada est�ndar un car�cter e indique en la salida
est�ndar si el caracter es una vocal min�scula, es una vocal may�scula o no es una vocal
*/

#include<iostream>
#include <string.h>
using namespace std;

int main(){
			char letra;
			cout<<"Ingrese un caracter: "; cin>>letra;
	
		
		
			switch(letra){
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u': cout<<"\nEs una vocal minuscula"<<endl; break;
				case 'A':
				case 'E': 
				case 'I': 
				case 'O': 
				case 'U': cout<<"\nEs una vocal mayuscula"<<endl; break;  
				default: cout<<"\nEl caracter ingresado no es una vocal"<<endl; break;
			}
		 
		
		
	
	
	
			return 0;
}
