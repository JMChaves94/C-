/*transmisión de Direcciones

Ejemplo: Intercambiar el valor de 2 variables

*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de funcion
void intercambio(float *, float *);

int main(){
	float num1 = 20.8, num2 = 6.78;
	
	cout<<"Primer Numero: "<<num1<<endl;
	cout<<"Segundo Numero: "<<num2<<endl;
	
	intercambio(&num1, &num2); 
	//direccion de memoria donde estan almacenados los 2 numeros
	//llamada a la funcion intercambio
	
	cout<<"\n\nDespues del intercambio: \n\n";
	cout<<"El nuevo valor de num1 es: "<<num1<<endl; 
	cout<<"El nuevo valor de num2 es: "<<num2<<endl;
	
	getch();
	return 0;
}


void intercambio(float *dirNum1, float *dirNum2){
	float aux;
	
	//Intercambiar los valores de las variables
	aux = *dirNum1;
	*dirNum1 = *dirNum2;
	*dirNum2 = aux;
}
