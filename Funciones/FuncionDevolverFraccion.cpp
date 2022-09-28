/*Escriba un programa que devuelva la parte fraccionaria de cualquier
numero introducido por el usuario. Por ejemplo, si se introduce el
numero 256.879, deberia desplegarse el numero 0.879*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipos de funciones
void pedirDato();
void devolverFraccion(double n);

//Variable Global
double n;

int main(){
	pedirDato();
	devolverFraccion(n);
	getch();
	return 0;
}

void pedirDato(){
	cout<<"Ingrese numero fraccionario: "; 
	cin>>n;
}

void devolverFraccion(double n){
	double frac = n - int(n);
	cout<<"La fraccion es: "<<frac<<endl;
}
