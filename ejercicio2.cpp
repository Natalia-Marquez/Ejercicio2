//
// Created by utec on 4/10/19.
//
#include "ejercicio2.h"
#include <iostream>
void menor_mayor (int *array, int tamanio){
    int menor=array[0];
    for (int a=0; a<tamanio; a++){
        if(menor>array[a]){
            menor=array[a];
        }
    }
    int mayor=array[0];
    for (int a=0; a<tamanio; a++){
        if(mayor<array[a]){
            mayor=array[a];
        }
    }
    cout<<menor<<" "<<mayor<<endl;
}

