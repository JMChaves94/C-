/*
Escriba un programa que lea tres numeros y determine cual de ellos es el mayor
*/

#include<iostream>

using namespace std;

int main(){
	int nro1, nro2, nro3;
	
	cout<<"Ingrese 3 numeros: "; cin>>nro1>>nro2>>nro3;
	
	if(nro1 == nro2 && nro1 == nro3){
		cout<<"\nLos 3 numeros son iguales"<<endl;
	}
	else if(nro1 > nro2 && nro1 > nro3){
		cout<<"\nEl mayor es: "<<nro1<<endl;
	} 
	else if(nro2 > nro3 && nro2 > nro1){
		cout<<"\nEl mayor es: "<<nro2<<endl;
	}
	else{
		cout<<"\nEl mayor es: "<<nro3<<endl;
	}
	
	return 0;
}
