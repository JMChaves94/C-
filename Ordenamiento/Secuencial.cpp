//Busqueda Secuencial

//a[5] = {3,4,2,1,5}; dato = 4
#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	int vector[] = {3,4,2,1,5};
	int i, dato;
	char bandera = 'F';
	
	dato = 10;
	//Busqueda Secuencial
	i=0;
	while((bandera=='F') and (i<5)){
		if(vector[i] == dato){
			bandera = 'V';
		}
		i++;
	} 
	
	if(bandera == 'F'){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(bandera == 'V'){
		cout<<"El numero a buscar se encontro en la posicion: "<<i-1<<endl;		
	}
	
	
	getch();
	return 0;
}
