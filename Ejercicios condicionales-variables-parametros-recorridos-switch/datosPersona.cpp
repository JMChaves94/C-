/*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.
Tras leer los datos, el programa debe mostrarlos en la salida estándar.*/

#include <iostream>

using namespace std;

int main() {
	int edad;
	char sexo[10];
	float metros;
	
	cout<<"Ingrese su edad: "; cin>>edad;
	cout<<"\nIngrese su sexo con la primera letra: "; cin>>sexo;
	cout<<"\nIngrese su altura en metros: "; cin>>metros;
	
	cout<<"Su edad es: "<<edad<<endl;
	cout<<"Su sexo es: "<<sexo<<endl;
	cout<<"Su altura es: "<<metros<<endl;
	
	
	return 0;
}


