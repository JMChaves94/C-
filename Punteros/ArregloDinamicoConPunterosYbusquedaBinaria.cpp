/*
Hacer una funcion para almacenar N numeros en un arreglo dinamico,
posteriormente en otra funcion buscar un numero en particular.
NOTA: usar cualquier metodo de busqueda (secuencial o binaria)
*/

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

//Prototipos de Funcion
void pedirDatos();
void buscarDato(int *, int);

int *elemento, numElementos;

int main()
{
    pedirDatos();
    buscarDato(elemento, numElementos);

    delete[] elemento; //Liberar la memoria utilizada para el arreglo dinamico

    getch();
    return 0;
}

//Desarrollo de Funciones
void pedirDatos()
{
    cout<<"Digite el numero de elementos que tendra el arreglo: ";
    cin>>numElementos;
    cout<<"\n";

    elemento = new int[numElementos]; //Creamos el arreglo

    for(int i = 0; i < numElementos; i++)
    {
        cout<<"Ingrese el valor en la posicion "<<i<<": ";
        cin>>*(elemento + i);
    }
}

void buscarDato(int *elemento, int numElementos)
{
    int inf, sup, mitad, dato;

    cout<<"\nDigite el dato a buscar en el arreglo: ";
    cin>>dato;

    bool igual = false;
    inf  = 0;
    sup = numElementos;

    while(inf != sup)
    {
        mitad = (inf + sup) / 2;
        if(*(elemento + mitad) == dato)
        {
            igual = true;
            break;
        }
        if(*(elemento + mitad) > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if(*(elemento + mitad) < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if(igual)
        cout<<"\nEl numero ha sido encontrado en la posicion "<<mitad<<endl;
    else
        cout<<"\nEl numero NO ha sido encontrado"<<endl;
}

