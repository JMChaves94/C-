#include<iostream>

using namespace std;

int main(){
	
	float a, b, resultado = 0;
	
	cout<<"Ingrese valor de a: "; cin>>a;
	cout<<"Ingrese valor de b: "; cin>>b;
	
	resultado = (a / b) + 1;
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
