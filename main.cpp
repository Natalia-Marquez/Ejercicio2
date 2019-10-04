#include <iostream>
#include "ejercicio2.h"

using namespace std;
int main() {
    int tamanio, elemento;
    cout<<"Ingrese la longitud del array: ";
    cin>>tamanio;
    int *array = new int [tamanio];

    cout<<"Ingresar los elementos: ";
    for (int a=0; a<tamanio; a++) {
        cin >> elemento;
        array[a]=elemento;
    }

    menor_mayor (array, tamanio);


    return 0;
}