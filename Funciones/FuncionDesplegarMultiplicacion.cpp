/*Ejercicio: Escriba una funcion llamada mult() que acepte 2 numeros
 en punto flotante como parametros, multiplique estos 2 numeros
 y despliegue el resultado.*/
 
 /*Dato: si en vez de retornar, dice desplegar, se debe usar void*/
 
 
 #include<iostream>
 #include<conio.h>
 using namespace std;
 
 //Prototipos de funciones
 void pedirDatos();
 void mult(float x, float y);
 
 //Variables globales
 float num1, num2;
 
 int main(){
 	
 	pedirDatos();
 	
 	mult(num1, num2);
 	
 	getch();
 	return 0; 
}
 
 

void pedirDatos(){
	cout<<"Ingrese 2 numeros: ";
	cin>>num1>>num2;
}

void mult(float x, float y){
	float multiplicacion = x * y;
	
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
