#include<stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_PARTIDAS 10
#define MAX_ENANITOS 7


int puntos_conseguidos(int partidas_enanito[MAX_PARTIDAS]){
    int puntaje = 0;

    for(int i = 0; i < MAX_PARTIDAS; i++){
        puntaje += partidas_enanito[i];
    }
    return puntaje;
}

int mejor_enanito(int enanitos[MAX_ENANITOS][MAX_PARTIDAS]){
    int puntaje_mayor = puntos_conseguidos(enanitos[0]);
    int mejor_enanito = 0;
    int puntaje_actual = 0;
    for(int i = 1; i < MAX_ENANITOS; i++){
        puntaje_actual = puntos_conseguidos(enanitos[i]);
        if(puntaje_actual > puntaje_mayor){
            puntaje_mayor = puntaje_actual;
            mejor_enanito = i;
        }

    }
    return mejor_enanito;
}


int main(){


    int matriz[MAX_ENANITOS][MAX_PARTIDAS] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60}
    };
    int ganador = 0;
    ganador = mejor_enanito(matriz);

    printf("ganador: %i\n", ganador);

    return 0;
}