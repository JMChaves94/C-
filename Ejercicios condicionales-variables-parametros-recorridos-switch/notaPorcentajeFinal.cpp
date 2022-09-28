/*La calificacion final de un estudiante es la media ponderada de tres notas:
la nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la
entrada estándar las tres notas de un alumno y escriba en la salida estandar su nota final*/


#include<iostream>

using namespace std;

int main(){
	float notaPractica, notaTeorica, notaParticipacion, notaFinal = 0;
	
	cout<<"Ingrese la nota practica del alumno: "; cin>>notaPractica;
	cout<<"Ingrese la nota teorica del alumno: "; cin>>notaTeorica;
	cout<<"Ingrese la nota de participacion del alumno: "; cin>>notaParticipacion;
	
	notaPractica*= 0.30;
	notaTeorica *= 0.60;
	notaParticipacion *= 0.10;
	
	notaFinal = notaPractica + notaTeorica + notaParticipacion;
	
	cout<<"\nLa nota final del alumno es: "<<notaFinal<<endl;
	
	
	
	
	return 0;
}
