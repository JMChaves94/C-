/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga
los siguientes campos: nombre, pais, numero_medallas. Y devuelva los datos
(Nombre, país) del atleta que ha ganado el mayor numero de medallas*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atl[100];

int main(){
	int nAtletas, mayor=0, posMayor=0;
	
	cout<<"Ingrese la cantidad de atletas: ";
	cin>>nAtletas;
	cout<<endl;
	
	for(int i=0;i<nAtletas;i++){
		fflush(stdin);
		cout<<i+1<<". Ingrese su nombre: ";
		cin.getline(atl[i].nombre,20,'\n');
		cout<<i+1<<". Ingrese su pais: ";
		cin.getline(atl[i].pais,20,'\n');
		cout<<i+1<<". Ingrese su numero de medallas: ";
		cin>>atl[i].numero_medallas;
		cout<<endl;
		
		if(atl[i].numero_medallas > mayor){
			posMayor = i;
			mayor = atl[i].numero_medallas;
		}
	}
	
	cout<<"\nDatos del atleta que mas medallas gano\n";
	cout<<"Nombre: "<<atl[posMayor].nombre<<endl;
	cout<<"Pais: "<<atl[posMayor].numero_medallas<<endl;
	
	getch();
	return 0;
}

