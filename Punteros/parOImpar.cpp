/*Punteros - Declaracion

&n = la direccion de n
*n = la variable cuya direccion esta almacenada en n

*/

/*Ejercicio: comprobar si un numero es par o impar, señalar la
posicion de memoria donde esta guardado el numero con punteros*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero, *dirNum;
	
	cout<<"Ingrese un numero: "; cin>>numero;
	
	dirNum = &numero; //Guardando la posicion de memoria
	
	if(*dirNum % 2 == 0){
		cout<<"El numero "<<*dirNum<<" es par"<<endl;
		cout<<"Posicion de memoria: "<<dirNum<<endl;
	}
	else{
		cout<<"El numero "<<*dirNum<<" es impar"<<endl;
		cout<<"Posicion de memoria: "<<dirNum<<endl;
	}
	
	
	getch();
	return 0;
}
