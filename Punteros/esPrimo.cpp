/*Punteros - Declaracion

&n = la direccion de n
*n = la variable cuya direccion esta almacenada en n

*/

/*Ejercicio: determinar si un numero es primo o no, con punteros
y ademas indicar en que posicion de memoria se guardo el numero*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dirNum, aux=0;
	
	cout<<"Ingrese un numero: ";
	cin>>num;
	
	dirNum = &num;
	
	for(int i=2; i<num; i++){
		if(num % i == 0){
			aux++;			
		}
	}
	if(aux != 0){
		cout<<"El numero: "<<*dirNum<<" no es primo"<<endl;
		cout<<"Direccion de memoria: "<<dirNum<<endl;
	}
	else{
		cout<<"El numero: "<<*dirNum<<" es primo"<<endl;
		cout<<"Direccion de memoria: "<<dirNum<<endl;		
	}
	
	getch();
	return 0;
}
