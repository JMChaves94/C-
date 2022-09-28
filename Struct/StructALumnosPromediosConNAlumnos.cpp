/*usando StructAlumnoYProm pero para N alumnos.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alum[100];

int main(){
	int n;
	
	cout<<"Ingrese cantidad de alumnos: ";
	cin>>n;
	float promedio[n];
	cout<<endl;
	
	for(int i=0; i<n;i++){
		fflush(stdin);
		cout<<"Ingrese su nombre: ";
		cin.getline(alum[i].nombre,20,'\n');
		cout<<"Ingrese su sexo: ";
		cin.getline(alum[i].sexo,10,'\n');
		cout<<"Ingrese su edad: ";
		cin>>alum[i].edad;
		cout<<endl;
		
		cout<<"\nNotas del alumno \n";
		cout<<"Nota1: ";cin>>alum[i].prom.nota1;
		cout<<"Nota2: ";cin>>alum[i].prom.nota2;
		cout<<"Nota3: ";cin>>alum[i].prom.nota3;
		cout<<endl;
		promedio[i] = (alum[i].prom.nota1 + alum[i].prom.nota2 + alum[i].prom.nota3) / n;
		
	}
	
	
	
	
	cout<<"\nDatos del Alumno\n";
	for(int i=0; i<n;i++){
		cout<<"Nombre: "<<alum[i].nombre<<endl;
		cout<<"Sexo: "<<alum[i].sexo<<endl;
		cout<<"Edad: "<<alum[i].edad<<endl;
		cout<<"Promedio: "<<promedio[i]<<endl;
	}
	getch();
	return 0;
}

