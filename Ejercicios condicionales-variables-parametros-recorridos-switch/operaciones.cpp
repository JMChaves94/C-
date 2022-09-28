#include <iostream>

using namespace std;

int main(){
	
	int numeroUno, numeroDos, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	
	cout<<"Ingrese un numero: ";cin>>numeroUno;
	
	cout<<"\nIngrese otro numero: ";cin>>numeroDos;
	
	cout<<"\n";
	
	suma = numeroUno + numeroDos;
	resta = numeroUno - numeroDos;
	multiplicacion = numeroUno * numeroDos;
	division = numeroUno / numeroDos;
	
	cout<<"\n";
	
	cout<<"La suma es: "<<suma;
	
	cout<<"\nLa resta es: "<<resta;
	
	cout<<"\nLa multiplicacion es: "<<multiplicacion;
	
	cout<<"\nLa division es: "<<division<<endl;
	
	return 0;
}
