/*
Leer un numero entero y determinar si es par o impar 
*/

#include<iostream>

using namespace std;

int main(){
	int nroEntero;
	
	cout<<"Ingrese un nro entero: "; cin>>nroEntero;
	
	if(nroEntero % 2 == 0){
		cout<<"\nEl numero ingresado es par"<<endl;
	}
	else{
		cout<<"\nEl numero ingresado es impar"<<endl;
	}
	
	
	return 0;
}
