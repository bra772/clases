#include<stdio.h>
#define MAX_ELEMENTOS 100

int suma_valores_vector(int vector[MAX_ELEMENTOS], int n){
    if (n == 0)
        return vector[n];

    return vector[n] + suma_valores_vector(vector, n - 1);

    
}

int sumar_valores(int vector[MAX_ELEMENTOS], int tope){
    suma_valores_vector(vector, tope);
}

int main(){
    int vector[MAX_ELEMENTOS] = {2, 3, 4, 5, 6, 8, 9, 1, 0, 100, 1};
    int tope = 11;
    int resultado = sumar_valores(vector, tope);
    int resultado2 = suma_valores_vector(vector, 3);

    printf("%i %i", resultado, resultado2);

    return 0;
}