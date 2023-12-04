#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_CARACTER 100
#define MAX_LIBROS 1500
#define MAX_FILAS 4
#define MAX_COL 3


typedef struct libro
{
    int precio;
    char autor[MAX_CARACTER];
    char titulo[MAX_CARACTER];
}libro_t;


int buscar_libro_caro(libro_t estante[MAX_LIBROS], int tope){
    int libro_mas_caro = 0;
    int mayor_precio = estante[0].precio;
    for (int i = 0; i < tope; i++){
        if(estante[i].precio > mayor_precio){
            libro_mas_caro = i;
            mayor_precio = estante[i].precio;
        }
    }
    return libro_mas_caro;
}

//libro_t libro_mas_caro(libro_t estanteria[MAX_FILAS][MAX_COL]){
//    libro_t libro_mas_caro = estanteria[0][0];
//    int mayor_precio = estanteria[0][0].precio;
//    int libro_actual;
//    for(int j = 0; j < MAX_FILAS; j++){
//        libro_actual = buscar_libro_caro(estanteria[j]);
//        if (estanteria[j][libro_actual].precio > mayor_precio){
//            mayor_precio = estanteria[j][libro_actual].precio;
//            libro_mas_caro = estanteria[j][libro_actual];
//        }
//    }
//    return libro_mas_caro;
//}
//
void ordenar_libros_autor(libro_t libros[MAX_LIBROS], int tope_libros){
    for(int i = 1; i < tope_libros; i++){
        int j = i;
        libro_t elemento_a_insertar = libros[i];
        while (j > 0 && strcmp(libros[j - 1].autor, elemento_a_insertar.autor) > 0)
        {
            libros[j] = libros[j -1];
            j--;
        }
        libros[j] = elemento_a_insertar;
    }

}
int dinero_ahorrado(int billetes,int billete_actual, int tope, int dinero){
    if (billete_actual)
}

void puedo_pagarlos(libro_t libros[MAX_LIBROS], int libro_actual, int tope, int precio_libros, int dinero_ahorrado){
    //cond de corte
    if (libro_actual == tope)
    {
        if (precio_libros <= dinero_ahorrado)
        {
            return true;
        }else{
            return false;
        }
    }
    // proceso 
    precio_libros += libros[libro_actual].precio;

    return puedo_pagarlos(libros, libro_actual + 1, tope, precio_libros, dinero_ahorrado);
}


int main(){
    libro_t libros[MAX_LIBROS] = {
        {4, "Aggg", "Reee"},
        {567, "Bgggg", "tyyyy"},
        {444, "Tyyy", "yuyuy"},
        {678, "Cghgh", "ttttt"},
        {10000, "Basss", "rrrr"},
        {23000, "Hyuu", "tyty"},
        {444, "Dffff", "rrrr"},
    };
    int tope = 7;

    // Imprimir información de los libros
    for (int i = 0; i < 7; ++i) {
        printf("Libro %d:\n", i + 1);
        printf("  Precio: %d\n", libros[i].precio);
        printf("  Autor: %s\n", libros[i].autor);
        printf("  Título: %s\n", libros[i].titulo);
        printf("\n");
    }
    ordenar_libros_autor(libros, tope);
    
    for (int i = 0; i < 7; ++i) {
        printf("Libro %d:\n", i + 1);
        printf("  Precio: %d\n", libros[i].precio);
        printf("  Autor: %s\n", libros[i].autor);
        printf("  Título: %s\n", libros[i].titulo);
        printf("\n");
    }

    int libro_mas_caro = buscar_libro_caro(libros, tope);

    printf("Libro mas caro: %i, precio: %i\n", libros[libro_mas_caro].titulo, libros[libro_mas_caro].precio);

    int billetes = {4, 700, 2000, 2000, 2000, 300000, 6};

    int dinero_total = 0;

    return 0;
}