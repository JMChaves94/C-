#include<iostream> 

using namespace std;

int main(){
	int numero;
		
	cout<<"ingrese el numero: ";cin>>numero;
	
	if(numero>0){
	cout<<"el numero es positivo";
	}
	
	if(numero==0){
	cout<<"el numero es neutro";
	}
	
	if(numero<0){
	cout<<"el numero es negativo";
	}
	return 0;
}
