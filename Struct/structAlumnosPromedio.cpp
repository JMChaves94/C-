/*Hacer una estructura llamada alumno, en la cual se tendran los siguientes 
campos: nombre, edad, promedio, pedir datos al usuario para 3 alumnos,
comprobar cual de los 3 tiene el mejor promedio y posteriormente
imprimir los datos del alumno*/

#include<iostream>
#include<conio.h>
#include<string.h>
 
using namespace std;


struct Alumno{
	char nombre[20];
	int edad;
	float promedio;
}alumnos[3];


int main(){
	setlocale(LC_CTYPE,"Spanish"); 
	float prom=0;
	string persona;
	
	//Carga de datos
	for(int i=0; i<3; i++){
		
		cout<<"Nombre: ";
		cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Edad: ";
		cin>>alumnos[i].edad;
		cout<<"Promedio: ";
		cin>>alumnos[i].promedio;
		cout<<endl;
		fflush(stdin); //Vaciar el buffer y permitir digitar los valores
		//Obtenemos el mayor promedio
		if(alumnos[i].promedio > prom){
			prom = alumnos[i].promedio;
			persona = alumnos[i].nombre;
		}
	}
	

	
	//Impresion de datos
	for(int i=0;i<2;i++){
		cout<<"Nombre: "<<alumnos[i].nombre<<endl;
		cout<<"Edad: "<<alumnos[i].edad<<endl;
		cout<<"Promedio: "<<alumnos[i].promedio<<endl;

		
		cout<<"\n";
	}
	
	cout<<"\nEl mayor promedio\n "<<endl;
	cout<<prom<<" corresponde a ÑÑÑ"<<persona<<endl;
	
	getch();
	return 0;
}

