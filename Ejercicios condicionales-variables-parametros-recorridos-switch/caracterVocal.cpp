/*
Escriba un programa que lea de la entrada est�ndar un car�cter en indique en la salida
est�ndar si el car�cter es una vocal min�scula o no.
*/

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Ingrese un caracter: "; cin>>letra;
	
	switch(letra){
		case 'a': 
		case 'b': 
		case 'i':
		case 'o':
		case 'u': cout<<"Es una vocal minuscula";break;
		default: cout<<"No es una vocal minuscula";break;	
	}
	
	return 0;
}


/*caracter se usa comilla simple. Ejemplo: 'a'*/
