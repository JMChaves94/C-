/*Punteros - Declaracion

&n = la direccion de n
*n = la variable cuya direccion esta almacenada en n

*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, *dirNum;
	
	num = 20;
	dirNum = &num;
		
	cout<<"Numero: "<<*dirNum<<endl;
	cout<<"Direccion de memoria: "<<dirNum<<endl;
	
	getch();
	return 0;
}

