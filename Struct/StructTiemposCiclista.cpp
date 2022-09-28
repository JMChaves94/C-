/*Defina una estructura que indique el tiempo empleado por un ciclista en una
etapa. La estructura debe tener 3 campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado
en correr todas las etapas*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Etapas{
	int horas;
	int minutos;
	int segundos;
}etapa[100];

int main(){
	int nEtapas, horasT=0, minutosT=0, segundosT=0;
	
	cout<<"Ingrese numero de etapas: ";
	cin>>nEtapas;
	cout<<endl;
	
	for(int i=0;i<nEtapas;i++){
		//Pidiendo los datos al usuario
		cout<<"Horas: "; cin>>etapa[i].horas;
		cout<<"Minutos: "; cin>>etapa[i].minutos;
		cout<<"Segundos: "; cin>>etapa[i].segundos;
		cout<<endl;
		
		horasT = horasT + etapa[i].horas;
		minutosT = minutosT + etapa[i].minutos;
		if(minutosT >= 60){
			minutosT -= 60;
			horasT ++;
		}
		segundosT = segundosT + etapa[i].segundos;
		if(segundosT >= 60){
			segundosT -= 60;
			minutosT ++;
		}
	}
	
	cout<<"\nTiempo total empleado\n";
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	
	getch();
	return 0;
}
