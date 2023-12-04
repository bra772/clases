#include<stdio.h>
#include<stdbool.h>
#include <string.h>

#define MAX_ELEMETOS
#define MAX_CARACTERES
#define MENOS_ENCONTRADOS


typedef struct memoria {
char descripcion[200];
int importancia;
bool sobre_algoritmos;
} memoria_t;

int encontrar_memoria(memoria_t memorias[MAX_ELEMETOS], int tope, int memoria_actual, int pos_menor_importancia){
    
    if (memoria_actual == tope - 1)
    {
        if (memorias[memoria_actual].importancia > memorias[pos_menor_importancia].importancia)
        {
            return pos_menor_importancia;
        }else{
            return memoria_actual;
        }
    }
    if (memorias[memoria_actual].importancia < memorias[pos_menor_importancia].importancia && memorias[memoria_actual].sobre_algoritmos)
        pos_menor_importancia = memoria_actual;


    return encontrar_memoria(memorias, tope, memoria_actual + 1, pos_menor_importancia);
    
}

int main(){
    memoria_t memorias[MAX_ELEMETOS] = {
        {"Memoria1", 21, true},
        {"Memoria2", 0, false},
        {"Memoria3", 2, true},
        {"Memoria4", 1, true},
        {"Memoria5", 44, true},
        {"Memoria6", 43, true},
        {"Memoria7", 33, true},
        {"Memoria8", 55, true},
        {"Memoria9", 26, true},
        {"Memoria10", 28, true},
        {"Memoria11", 28, true},
    };
    int tope = 11;

    int resultado = 0;

    resultado = encontrar_memoria(memorias, tope, 0, 0);

    printf("resultado %i", resultado);

    return 0;
}