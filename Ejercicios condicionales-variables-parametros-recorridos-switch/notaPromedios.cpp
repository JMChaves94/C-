#include<iostream>

using namespace std;

int main(){
	
	float alumnoUno, alumnoDos, alumnoTres, alumnoCuatro, notaFinalMedia = 0;
	int contador = 0;
	cout<<"Ingrese la nota final del primer alumno: "; cin>>alumnoUno;
	contador = contador + 1;
	cout<<"Ingrese la nota final del segundo alumno: "; cin>>alumnoDos;
	contador = contador + 1;
	cout<<"Ingrese la nota final del tercer alumno: "; cin>>alumnoTres;
	contador = contador + 1;
	cout<<"Ingrese la nota final del cuarto alumno: "; cin>>alumnoCuatro;
	contador = contador + 1;
	
	notaFinalMedia = (alumnoUno + alumnoDos + alumnoTres + alumnoCuatro) / contador;
	
	cout<<"La nota promedio es: "<<notaFinalMedia<<endl;
	return 0;
}
