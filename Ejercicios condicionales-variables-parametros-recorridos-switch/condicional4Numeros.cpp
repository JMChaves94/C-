/*
Leer de la entrada estandar 3 numeros. Despues debe leer un cuarto numero e indicar si el numero
coincide con alguno de los introducidos con anterioridad
*/

#include<iostream>

using namespace std;

int main(){
	int nro1, nro2, nro3, nro4;
	
	cout<<"Ingrese 3 numeros: "; cin>>nro1>>nro2>>nro3;
	
	cout<<"Ingrese un cuarto numero: "; cin>>nro4;
	
	if(nro4 == nro1 || nro4 == nro2 || nro4 == nro3){
		cout<<"\nEl numero coincide con alguno de los introducidos anteriormente"<<endl;
	}
	else{
		cout<<"\nEl numero no coincido con ninguno de los introducidos anteriormente"<<endl;
	}
	
	
	
	return 0;
}
