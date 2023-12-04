#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define MAX_NOMBRE 100
#define MAX_DEUDORES 100
#define VALOR_FAVOR 50000
#define MAX_FILAS 4
#define MAX_COL 3

typedef struct deuda{
    char nombre[MAX_NOMBRE];
    int deuda_pesos;
    int deuda_favores;
} deuda_t;

void insercion_ordenada(int vector[MAX_FILAS], int* tope, int elemento){
    int i = *tope;

    while(i > 0 && vector[i - 1] > elemento){
        vector[i] = vector[i - 1];
        i--;
    }
    vector[i] = elemento;
    (*tope)++;

}

int lingote_mas_pesado(int fila_lingotes[MAX_COL]){
    int lingote_mas_pesado = 0;
    int mayor_peso = fila_lingotes[lingote_mas_pesado];
    for(int i = 1; i < MAX_COL; i++){
        if(fila_lingotes[i] > mayor_peso){
            lingote_mas_pesado = i;
            mayor_peso = fila_lingotes[i];
        }
    }
    return lingote_mas_pesado;
}

void guardar_lingotes_pesados(int lingotes[MAX_FILAS][MAX_COL], int lingotes_pesados[MAX_FILAS], int* tope){
    int lingote_actual = 0;

    for (int j = 0; j < MAX_FILAS; j++){
        lingote_actual = lingote_mas_pesado(lingotes[j]);
        insercion_ordenada(lingotes_pesados, tope, lingotes[j][lingote_actual]);
    }
}


bool puede_cubrir_deuda(deuda_t deudores[MAX_DEUDORES], int deudor, int tope, int dinero_deuda, int dinero_favores){
    //caso base
    if(deudor == tope){
        if(dinero_deuda >= dinero_favores){
            return false;
        }else{
            return true;
        }
    }
    //Proceso
    dinero_deuda += deudores[deudor].deuda_pesos;
    dinero_favores += (deudores[deudor].deuda_favores * VALOR_FAVOR);

    return puede_cubrir_deuda(deudores, deudor + 1, tope, dinero_deuda, dinero_favores);
}

int main(){
    deuda_t deudores[MAX_DEUDORES] = {
        {"TUKI", 30000, 1},
        {"tukii", 300000, 1},
        {"alskjdalswdj", 300000, 1},
        {"sssss", 30000, 1}
    };
    int tope = 4;

    int lingotes[MAX_FILAS][MAX_COL] = {
        {1, 2, 3},
        {2, 4, 66},
        {1, 77, 4},
        {44, 5, 6}
    };

    int vector_lingotes[MAX_FILAS];
    int tope_lingotes = 0;

    guardar_lingotes_pesados(lingotes, vector_lingotes, &tope_lingotes);
    for (int i = 0; i < tope; i++)
    {
        printf(" %i", vector_lingotes[i]);
    }
    

    bool resultado = puede_cubrir_deuda(deudores, 0, tope, 0, 0);

    if(resultado){
        printf("Puede");
    }else{
        printf("no puede ");
    }

    return 0;
}

