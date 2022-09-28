//Busqueda Binaria

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int vector[] = {1,2,3,4,5};
	int inf, sup, mitad, dato;
	char bandera = 'F';
	
	dato = 2;
	
	//Algoritmo de la busqueda binaria
	
	inf = 0;
	sup = 5;
	
	while(inf<=sup){
		mitad = (inf+sup)/2;
		
		if(vector[mitad] == dato){
			bandera = 'V';
			break;
		}
		
		if(vector[mitad]>dato){
			sup = mitad-1;
			mitad = (inf+sup)/2;
		}
		
		if(vector[mitad]<dato){
			inf = mitad+1;
			mitad = (inf+sup)/2;
		}
	}
	
	if(bandera == 'V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;
	}
	else if(bandera == 'F'){
		cout<<"El numero no ha sido encontrado"<<endl;
	}
	
	getch();
	return 0;
}
