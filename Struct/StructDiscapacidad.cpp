/*Defina una estructura que sirva para representar a una persona.
La estructura debe contener 2 campos: el nombre de la persona y un valor
de tipo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene 2 nuevos vectores.
Uno que contenga las personas que no tienen ninguna discapacidad y otro que 
contenga las personas con discapacidad*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Persona{
	char nombre[20];
	char discapacidad;
};

struct Discapacitados{
	char nombre[20];
};

struct no_Discapacitados{
	char nombre[20];
};

int main(){
	int n,contV=0,contF=0;
	
	cout<<"Digite la cantidad de personas: "; 
	cin>>n; 
	cout<<endl;
	
	Persona persona[n];
	Discapacitados discapacitados[n];
	no_Discapacitados no_discapacitados[n];
	
	for(int i=0;i<n;i++){
		fflush(stdin);
		cout<<"Digite el nombre de la persona "<<i+1<<": "; 
		cin.getline(persona[i].nombre,20,'\n');
		fflush(stdin);
		cout<<"Indique si la persona "<<i+1<<" tiene o no discapacidad con V o F: "; 
		cin>>persona[i].discapacidad; 
		cout<<endl;
	}
	
	for(int i=0;i<n;i++){
		if(persona[i].discapacidad == 'V'){
			strcpy(discapacitados[contV].nombre,persona[i].nombre);
			contV++;
			} 
		else if (persona[i].discapacidad == 'F'){
			strcpy(no_discapacitados[contF].nombre,persona[i].nombre);
			contF++;
			}	
	}
	
	cout<<"\nPersonas con discapacidad\n";
	for(int i=0;i<contV;i++){
		cout<<discapacitados[i].nombre<<endl;
	}
	
	cout<<"\nPersonas sin discapacidad\n";
	for(int i=0;i<contF;i++){
		cout<<no_discapacitados[i].nombre<<endl;
	}
	
	getch();
	return 0;
}
