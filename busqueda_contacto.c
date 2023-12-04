#include<stdio.h>
#include<string.h>

#define MAX_ELEMENTOS 100
#define NO_ECONTRADO -1
#define MAX_CARACTERES 200

typedef struct contacto
{
    int num_telefono;
    char nombre[MAX_CARACTERES];
    int edad;
    char e_mail[MAX_CARACTERES];
}contacto_t;


int buscar_contacto_algoritmo(contacto_t contactos[MAX_ELEMENTOS], char nombre_buscado[MAX_CARACTERES], int inicio, int fin){

    int medio = (inicio + fin) / 2;
    if(inicio > fin){
        return NO_ECONTRADO;
    }
    if(strcmp(contactos[medio].nombre, nombre_buscado) == 0){
        return medio;
    }else if(strcmp(contactos[medio].nombre, nombre_buscado) > 0){
        return buscar_contacto_algoritmo(contactos, nombre_buscado, inicio, medio - 1);
    }else{
        return buscar_contacto_algoritmo(contactos, nombre_buscado, medio + 1, fin);
    }


}

int buscar_contacto(contacto_t contactos[MAX_ELEMENTOS], int tope, char nombre_buscado[MAX_CARACTERES]){
    return buscar_contacto_algoritmo(contactos, nombre_buscado, 0, tope);
}

int main(){

    contacto_t contactos[MAX_ELEMENTOS] = {
        {34654378, "Ariana", 55, "ariana@outlook.com"},
        {12345678, "Carlos", 30, "carlos@email.com"},
        {23456789, "David", 40, "david@gmail.com"},
        {34567890, "Elena", 28, "elena@hotmail.com"},
        {45678901, "Fernando", 35, "fernando@gmail.com"},
        {56789012, "Gabriela", 42, "gabriela@yahoo.com"},
        {67890123, "Hector", 31, "hector@outlook.com"},
        {78901234, "Isabel", 27, "isabel@gmail.com"},
        {89012345, "Juan", 50, "juan@hotmail.com"},
        {90123456, "Karen", 38, "karen@yahoo.com"},
        {11223344, "Luis", 45, "luis@outlook.com"},
        {22334455, "Maria", 33, "maria@gmail.com"},
        {33445566, "Natalia", 29, "natalia@yahoo.com"},
        {44556677, "Oscar", 36, "oscar@hotmail.com"},
        {55667788, "Pablo", 41, "pablo@gmail.com"}
    };


    int tope = 15;
    int resultado = 0;
    char nombre[MAX_CARACTERES] =  "Pablo";
    resultado = buscar_contacto(contactos, tope, nombre);

    if(resultado != NO_ECONTRADO){
        printf("nombre: %s\n", contactos[resultado].nombre);
        printf("numero: %i\n", contactos[resultado].num_telefono);
        printf("e-mail : %s\n", contactos[resultado].e_mail);
        printf("edad: %i\n", contactos[resultado].edad);
    }else
        printf("NO ENCONTRADO.");
    return 0;
}