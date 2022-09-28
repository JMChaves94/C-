#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a, b, c, resultado1 = 0, resultado2 = 0;
	
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	
	resultado1 = (-b + sqrt(( pow(b,2) - (4*a*c)))) / (2*a);
	
	resultado2 = (-b - sqrt(( pow(b,2) - (4*a*c)))) / (2*a);
	
	cout<<"\nEl primer resultado de la funcion cuadratica es: "<<resultado1<<endl;
	cout<<"\nEl segundo resultado de la funcion cuadratica es: "<<resultado2<<endl;
	
	
	return 0;
}

