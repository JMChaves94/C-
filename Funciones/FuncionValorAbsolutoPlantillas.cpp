//Plantillas de Funcion

//Ejemplo: Sacar el valor absoluto de un numero

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de funcion
template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){
	int n = -4;
	float n2 = -56.67;
	double n3 = -123.5678;
	
	mostrarAbs(n);
	mostrarAbs(n2);
	mostrarAbs(n3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero *= -1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
