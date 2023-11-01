#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_CARACTER 20
#define MAX_NOMBRES 20

void ingresar_nombres(char nombres[MAX_NOMBRES][MAX_CARACTER], int* tope){
    char nuevo_nombre[MAX_CARACTER];
    if(*tope < MAX_NOMBRES){
        printf("Ingrese un nuevo nombre:  ");
        scanf(" %s", nuevo_nombre);
        strcpy(nombres[*tope], nuevo_nombre);
        (*tope)++;
        printf("Agregado.\n");
    }else{  
        printf("lista llena\n");
    }
}

void ordenar_nombres(char nombres[MAX_NOMBRES][MAX_CARACTER], int tope){
    char elemento_a_insertar[MAX_CARACTER];
    int j = 0;

    for(int i = 1; i < tope; i++){
        strcpy(elemento_a_insertar, nombres[i]);
        j = i;
        while(j > 0 && strcmp(elemento_a_insertar, nombres[j - 1]) < 0){
            strcpy(nombres[j], nombres[j - 1]);
            j--;
        }
        strcpy(nombres[j], elemento_a_insertar);
    }

}

int main(){
    char nombres[MAX_NOMBRES][MAX_CARACTER] = {
        "Zote",
        "Analia",
        "Andy",
        "Bella",
        "Marta",
        "Tom",
        "Maquiavelo",
    };
    int tope = 7;

    int accion = 0;

    do
    {
        printf("Que desea hacer?:\n");
        printf("Opciones:\n");
        printf("1. Agregar nombre\n");
        printf("2. Salir\n");
        printf("Seleccione una opción: ");
        scanf(" %d", &accion);
        switch (accion)
        {
        case 1:
            ingresar_nombres(nombres, &tope);
            break;
        case 2:
            break;
        default:
            printf("opcion, invalida.");
            break;
        }
    } while (accion != 2);
    

    for (int i = 0; i < tope; i++) {
        if (nombres[i][0] != '\0') {
            printf("%c\n", nombres[i][0]);
        }
    }
    
    ordenar_nombres(nombres, tope);

    printf("Nombres ordenados:\n");
    for (int i = 0; i < tope; i++) {
        printf("%s\n", nombres[i]);
    }

    return 0;
}