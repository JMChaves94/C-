/*
Escriba un programa que lea dos numeros y determine cual de ellos es el mayor
*/

#include<iostream>

using namespace std;

int main(){
	int numeroUno, numeroDos;
	
	cout<<"Ingrese 2 numeros: "; cin>>numeroUno>>numeroDos;
	
	
	if(numeroUno == numeroDos){
		cout<<"Ambos numeros son iguales"<<endl;
	}
	else if (numeroUno > numeroDos){
		cout<<"El mayor es: "<<numeroUno<<endl;	
	}
	else{
		cout<<"El mayor es: "<<numeroDos<<endl;
	}
	
	
	return 0;
}
