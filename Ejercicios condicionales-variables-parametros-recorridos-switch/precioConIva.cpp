#include <iostream>

using namespace std;

int main(){
	float precio, precioConIva;
	
	cout<<"El precio del producto es: "; cin>>precio;
	cout<<"\n";
	
	precioConIva = precio * 0.21;
	
	cout<<"El precio del producto + iva es de: $"<<precioConIva<<endl;
	
	return 0;
}
