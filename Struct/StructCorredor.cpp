/*Hacer una estructura llamada corredor, en la cual se tendran los siguientes
cam,pos: nombre, edad, sexo, club, pedir datos al usuario para un corredor
y asignarle una categoria de competicion
- juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria
de competicion.
*/

#include<iostream>
#include<conio.h>
#include<string.h> //copiar cadenas

using namespace std;

struct Corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}corredor1;

int main(){

	char categoria[20];
	
	cout<<"Nombre: ";
	cin.getline(corredor1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>corredor1.edad;
	fflush(stdin); //Vaciar el buffer y permitir digitar los valores
	cout<<"Sexo: ";
	cin.getline(corredor1.sexo,10,'\n');
	cout<<"Club: ";
	cin.getline(corredor1.club,20,'\n');
	
	if(corredor1.edad < 18){
		strcpy(categoria,"Juvenil");
	}
	else if(corredor1.edad >= 18 and corredor1.edad <=40){
		strcpy(categoria,"Senior");
	}
	else{
		strcpy(categoria,"Veterano");
	}
	
	cout<<"\n\nDatos del corredor: "<<endl;
	cout<<"Nombre: "<<corredor1.nombre<<endl;
	cout<<"Edad: "<<corredor1.edad<<endl;
	cout<<"Sexo: "<<corredor1.sexo<<endl;
	cout<<"Club: "<<corredor1.club<<endl;
	cout<<"Categoria: "<<categoria<<endl;
	getch();
	return 0;
}
