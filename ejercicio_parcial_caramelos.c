#include <stdio.h>
#include <stdbool.h>

#define MAX_NOMBRE 100
#define MAX_CASAS 200

const int PRECIO_ROMPEMUELAS = 150;
const int PRECIO_CARAMELOS = 5;

typedef struct casa {
    char direccion[MAX_NOMBRE];
    int cant_plata;
    int cant_caramelos;
} casa_t;

bool alcanza_para_rompemuelas(casa_t casas_recorridas[MAX_CASAS], int casa, int* caramelos_vendidos, int* cantidad_recaudada) {
    if (casa < 0 || *cantidad_recaudada >= PRECIO_ROMPEMUELAS) {
        return *cantidad_recaudada >= PRECIO_ROMPEMUELAS;
    }

    int caramelos_vendidos_actual = 0;
    int cantidad_recaudada_actual = 0;

    if (casas_recorridas[casa].cant_caramelos > 0) {
        caramelos_vendidos_actual = casas_recorridas[casa].cant_caramelos;
        cantidad_recaudada_actual = casas_recorridas[casa].cant_caramelos * PRECIO_CARAMELOS;
    }

    cantidad_recaudada_actual += casas_recorridas[casa].cant_plata;

    if (cantidad_recaudada_actual < *cantidad_recaudada || *cantidad_recaudada == 0) {
        *caramelos_vendidos = caramelos_vendidos_actual;
        *cantidad_recaudada = cantidad_recaudada_actual;
    }

    return alcanza_para_rompemuelas(casas_recorridas, casa - 1, caramelos_vendidos, cantidad_recaudada);
}

int main() {
    casa_t casas[MAX_CASAS] = {
        {"casa1", 150, 0},
        {"casa2", 100, 0},
        {"casa3", 10, 0},
        {"casa4", 10, 0},
        {"casa5", 10, 1},
        {"casa6", 10, 1},
        {"casa7", 10, 1},
        {"casa8", 10, 0},
        {"casa9", 10, 1},
        {"casa10", 150, 1},
    };

    int tope = 10;
    int cant_plata = 0;
    int cant_caramelos = 0;
    bool alcanza = alcanza_para_rompemuelas(casas, tope - 1, &cant_caramelos, &cant_plata);

    if (alcanza) {
        printf("Sí alcanza. Caramelos vendidos: %d, Cantidad recaudada: %d\n", cant_caramelos, cant_plata);
    } else {
        printf("No alcanza\n");
    }

    return 0;
}
