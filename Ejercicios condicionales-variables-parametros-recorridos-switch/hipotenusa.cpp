/*Escribe un programa que lea de la entrada est�ndar los 2 catetos de un tri�ngulo rect�ngulo y escriba en la salida est�ndar su hipotenusa*/


#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float primerCateto, segundoCateto, hipotenusa = 0;
	
	cout<<"Ingrese el primer cateto: "; cin>>primerCateto;
	cout<<"Ingrese el segundo cateto: "; cin>>segundoCateto;
	
	
	hipotenusa = sqrt((primerCateto * primerCateto) + (segundoCateto * segundoCateto));
	cout.precision(2);
	cout<<"\nEl valor de la hipotenusa es: "<<hipotenusa<<endl;
	
	
	return 0;
}
