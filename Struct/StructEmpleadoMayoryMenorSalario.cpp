/*realizar un programa que lea un arreglo de estructuras los datos de N
empleados de la empresa y que imprima los datos del empleado con mayor
y menor salario*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Empleado{
	char nombre[20];
	float salario;
}emp[100];

int main(){
	int n_empleados, posMayor=0, posMenor=0;
	float mayor=0, menor=999999;
	
	cout<<"Indique la cantidad de empleados: ";
	cin>>n_empleados;
	cout<<endl;
	for(int i=0; i<n_empleados;i++){
		fflush(stdin); //Vaciar el buffer y permitir digitar los valores
		cout<<i+1<<". Ingrese su nombre: ";
		cin.getline(emp[i].nombre,20,'\n');
		cout<<i+1<<". Ingrese su salario: ";
		cin>>emp[i].salario;
		cout<<endl;
		if(emp[i].salario > mayor){
			posMayor = i;
			mayor = emp[i].salario;
		} 
		if(emp[i].salario < menor){
			posMenor = i;
			menor = emp[i].salario;
		} 
	}
	
	cout<<"\nImprimiendo Empleado con mayor salario: \n";
	cout<<"Nombre: "<<emp[posMayor].nombre<<endl;
	cout<<"Salario: "<<mayor<<endl;
	
	
	cout<<"\nImprimiendo Empleado con menor salario: \n";
	cout<<"Nombre: "<<emp[posMenor].nombre<<endl;
	cout<<"Salario: "<<menor<<endl;
	
	getch();
	return 0;
}
