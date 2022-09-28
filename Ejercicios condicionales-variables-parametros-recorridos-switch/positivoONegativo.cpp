/*
Ingresar un numero y determinar si es positivo o negativo
*/

#include<iostream>

using namespace std;

int main() {
	int numero;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	if(numero==0){
		cout<<"\nEl numero ingresado es neutro"<<endl;
	}
	else if(numero>0){
		cout<<"\nEl numero ingresado es positivo"<<endl;
	}
	else{
		cout<<"\nEl numero ingresado es negativo"<<endl;
	}
	
	return 0;
}
