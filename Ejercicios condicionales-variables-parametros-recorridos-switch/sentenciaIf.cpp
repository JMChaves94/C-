#include<iostream>

using namespace std;
	
int main(){
	int numero, dato = 5;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	if(numero == dato){
		cout<<"\nEl numero es 5"<<endl;
	}
	else{
		cout<<"\nEl numero es distinto de 5"<<endl;
	}
	
	return 0;
}
