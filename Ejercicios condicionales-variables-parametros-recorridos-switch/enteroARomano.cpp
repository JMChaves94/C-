/*pasar numero entero al mismo valor pero en numeros romanos*/

/*
M=1000
D=500
C=100
L=50
X=10
V=5
I=1
*/
#include<iostream>

using namespace std;

int main(){
	int nroEntero, unidades, decenas, centenas, unidadDeMil;
	
	cout<<"Ingrese un numero: "; cin>>nroEntero;
	
	//nroEntero = 2152 -> 2000+100+50+2 (dividir en unidades)
	
	unidades = nroEntero%10; nroEntero /= 10; /*nroEntero = 2152 cuando dividimos entre 10 la coma corre
	un valor hacia la izquierda, por ende unidades = 2, luego divido por 10 porque tenia el valor de 2152
	al haber tomado las unidades solo queda 215*/
	
	decenas = nroEntero%10; nroEntero /= 10;
	/*solo quedan 215, entonces al dividir por 10 su residuo va a ser 5, luego al dividir por 10, queda 21*/
	
	centenas = nroEntero%10; nroEntero/=10;
	/*queda 21, al obtener el residuo de dividir por 10, queda 1, luego al dividir por 10, queda 2*/
	
	unidadDeMil = nroEntero%10; nroEntero/=10;
	/*queda 2, al obtener el residuo de dividir por 10, queda , luego al dividir por 10, queda 0*/
	
	
		switch(unidadDeMil){
			case 1: cout<<"M"; break;
			case 2: cout<<"MM"; break;
			case 3: cout<<"MMM";break;
			
		}
		
		switch(centenas){
			case 1: cout<<"C"; break;
			case 2: cout<<"CC"; break;
			case 3: cout<<"CCC";break;
			case 4: cout<<"CD";break;
			case 5: cout<<"D";break;
			case 6: cout<<"DC";break;
			case 7: cout<<"DCC";break;
			case 8: cout<<"DCCC";break;
			case 9: cout<<"CM";break;
		}
		
		switch(decenas){
			case 1: cout<<"X"; break;
			case 2: cout<<"XX"; break;
			case 3: cout<<"XXX";break;
			case 4: cout<<"XL";break;
			case 5: cout<<"L";break;
			case 6: cout<<"LX";break;
			case 7: cout<<"LXX";break;
			case 8: cout<<"LXXX";break;
			case 9: cout<<"XC";break;
		}
		
		switch(unidades){
			case 1: cout<<"I"; break;
			case 2: cout<<"II"; break;
			case 3: cout<<"III";break;
			case 4: cout<<"IV";break;
			case 5: cout<<"V";break;
			case 6: cout<<"VI";break;
			case 7: cout<<"VII";break;
			case 8: cout<<"VIII";break;
			case 9: cout<<"IX";break;
		}
		
		if (nroEntero > 3999 || nroEntero < 1){
			cout<<"\nLos numeros romanos van del rango 1-3999"<<endl;
		
		}
			
	
	
	return 0;
}
