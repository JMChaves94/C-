/*
Escribir una plantilla de funcion llamada maximo() que devuelva el
valor maximo de 3 argumentos que se transmitan a la funcion cuando sea
llamada. Suponga que los 3 argumentos serán del mismo tipo de datos.
*/

#include<iostream>
#include<conio.h>
using namespace std;

//Plantilla de funcion
template <class TIPO>
void maximo(TIPO n1, TIPO n2, TIPO n3);



int main(){
	maximo(55, 45, 42);
	
	getch();
	return 0;
}


template <class TIPO>
void maximo(TIPO n1, TIPO n2, TIPO n3){
	TIPO max;
	
	if(n1>n2 and n1>n3){
		max = n1;
	}
	else if(n2>n1 and n2>n3){
		max = n2;
	}
	else{
		max = n3;
	}
	
	cout<<"El maximo es: "<<max<<endl;
}
