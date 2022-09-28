/*escriba un programa que solicite una edad (un valor entero) e indique en la salida estandar si la edad introducida esta en el rango de 18-25*/

#include<iostream>

using namespace std;

int main() {
	int edad;
	
	cout<<"Ingrese su edad: "; cin>>edad;
	
	if(edad >= 18 && edad <= 25){
		cout<<"\nLa edad se encuentra en el rango de 18 a 25"<<endl;
	}
	else{
		cout<<"\nLa edad no se encuentra en el rango de 18 a 25"<<endl;
	}
	
	
	return 0;
}
