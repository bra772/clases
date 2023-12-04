#include<stdio.h>
#include<stdbool.h>
#define MAX_ELEMENTOS 1000
#define NO_EXISTE -1


int busqueda_binaria_algoritmo( int vector[MAX_ELEMENTOS], int buscado,
    int inicio, int fin){
    // 1) caso base
    if (fin < inicio)
    {
        return NO_EXISTE;
    }
    // 1) caso base
    int centro = (inicio + fin) / 2; 
    
    if(vector[centro]== buscado){
        return centro;
    }
    // 2) llamada recursiva
    if(vector[centro] < buscado){
        //cambio el fina
        return busqueda_binaria_algoritmo(vector, buscado, centro, fin);
    }else{
        return busqueda_binaria_algoritmo(vector, buscado, inicio, centro -1);

    }

}


//Recursividad indirecta
int busqueda_binaria(int vector[MAX_ELEMENTOS], int tope,
     int valor_buscado){
    
    busqueda_binaria_algoritmo(vector, valor_buscado, 0, tope - 1);

}


int main(){



    return 0;
}