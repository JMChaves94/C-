/*Mostrar los meses del año pidiendo al usuario ingresar numeros del 1 al 12, mostrar el mes que corresponde*/

#include<iostream>

using namespace std;

int main(){
	int nroDelMes;
	cout<<"Ingrese un numero de mes: "; cin>>nroDelMes;
	switch(nroDelMes){
		case 1: cout<<"\nEnero"<<endl;break;
		case 2: cout<<"\nFebrero"<<endl;break;
		case 3: cout<<"\nMarzoo"<<endl;break;
		case 4: cout<<"\nAbril"<<endl;break;
		case 5: cout<<"\nMayo"<<endl;break;
		case 6: cout<<"\nJunio"<<endl;break;
		case 7: cout<<"\nJulio"<<endl;break;
		case 8: cout<<"\nAgosto"<<endl;break;
		case 9: cout<<"\nSeptiembre"<<endl;break;
		case 10: cout<<"\nOctubre"<<endl;break;
		case 11: cout<<"\nNoviembre"<<endl;break;
		case 12: cout<<"\nDiciembre"<<endl;break;
		default: cout<<"\nEl numero ingresado debe ser en el rango 1-12"<<endl;break;
	}
	
	return 0;
}
