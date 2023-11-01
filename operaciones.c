#include <stdio.h>
#include "utiles.h"

// Pre: vector1 y vector2 tienen que estar ordenados de la misma manera.
// 		0 <= tope1, tope2 <= MAX_ELEMENTOS
// Pos: Carga en vector_resultado la intersección de los vectores 1 y 2.
// 		Carga en tope_resultado la cantidad de elementos de vector_resultado.
void intersectar(
	int vector1[MAX_ELEMENTOS], int tope1,
	int vector2[MAX_ELEMENTOS], int tope2,
	int vector_resultado[MAX_ELEMENTOS], int* tope_resultado
) {
	*tope_resultado = 0;

	int i = 0;
	int j = 0;

	while (i < tope1 && j < tope2) {
		if (vector1[i] == vector2[j]) {
			vector_resultado[*tope_resultado] = vector1[i];
			(*tope_resultado)++;
			i++;
			j++;
		} else if (vector1[i] < vector2[j]) {
			i++;
		} else if (vector2[j] < vector1[i]) {
			j++;
		}
	}
}

// Pre: vector1 y vector2 tienen que estar ordenados de la misma manera.
// 		0 <= tope1, tope2 <= MAX_ELEMENTOS
// Pos: Carga en vector_resultado la unión de los vectores 1 y 2.
// 		Carga en tope_resultado la cantidad de elementos de vector_resultado.
void unir(
	int vector1[MAX_ELEMENTOS], int tope1,
	int vector2[MAX_ELEMENTOS], int tope2,
	int vector_resultado[2*MAX_ELEMENTOS], int* tope_resultado
) {
	*tope_resultado = 0;

	int i = 0;
	int j = 0;

	while (i < tope1 && j < tope2) {
		if (vector1[i] == vector2[j]) {
			vector_resultado[*tope_resultado] = vector1[i];
			(*tope_resultado)++;
			i++;
			j++;
		} else if (vector1[i] < vector2[j]) {
			vector_resultado[*tope_resultado] = vector1[i];
			(*tope_resultado)++;
			i++;
		} else if (vector2[j] < vector1[i]) {
			vector_resultado[*tope_resultado] = vector2[j];
			(*tope_resultado)++;
			j++;
		}
	}

	while (i < tope1) {
		vector_resultado[*tope_resultado] = vector1[i];
		(*tope_resultado)++;
		i++;
	}

	while (j < tope2) {
		vector_resultado[*tope_resultado] = vector2[j];
		(*tope_resultado)++;
		j++;
	}
}

// Pre: vector1 y vector2 tienen que estar ordenados de la misma manera.
// 		0 <= tope1, tope2 <= MAX_ELEMENTOS
// Pos: Carga en vector_resultado la mezcla de los vectores 1 y 2.
// 		Carga en tope_resultado la cantidad de elementos de vector_resultado.
void mezclar(
	int vector1[MAX_ELEMENTOS], int tope1,
	int vector2[MAX_ELEMENTOS], int tope2,
	int vector_resultado[2*MAX_ELEMENTOS], int* tope_resultado
) {
	*tope_resultado = 0;

	int i = 0;
	int j = 0;

	while (i < tope1 && j < tope2) {

		if (vector1[i] <= vector2[j]) {
			vector_resultado[*tope_resultado] = vector1[i];
			(*tope_resultado)++;
			i++;
		} else { // vector1[i] > vector[j]
			vector_resultado[*tope_resultado] = vector2[j];
			(*tope_resultado)++;
			j++;
		}
	}

	while (i < tope1) {
		vector_resultado[*tope_resultado] = vector1[i];
		(*tope_resultado)++;
		i++;
	}

	while (j < tope2) {
		vector_resultado[*tope_resultado] = vector2[j];
		(*tope_resultado)++;
		j++;
	}
}

// Pre: vector1 y vector2 tienen que estar ordenados de la misma manera.
// 		0 <= tope1, tope2 <= MAX_ELEMENTOS
// Pos: Carga en vector_resultado la diferencia de los vectores 1 y 2.
// 		Carga en tope_resultado la cantidad de elementos de vector_resultado.
void restar(
	int vector1[MAX_ELEMENTOS], int tope1,
	int vector2[MAX_ELEMENTOS], int tope2,
	int vector_resultado[MAX_ELEMENTOS], int* tope_resultado
) {
	*tope_resultado = 0;

	int i = 0;
	int j = 0;

	while (i < tope1 && j < tope2) {
		if (vector1[i] == vector2[j]) {
			i++;
			j++;
		} else if (vector1[i] < vector2[j]) {
			vector_resultado[*tope_resultado] = vector1[i];
			(*tope_resultado)++;
			i++;
		} else if (vector2[j] < vector1[i]) {
			j++;
		}
	}

	while (i < tope1) {
		vector_resultado[*tope_resultado] = vector1[i];
		(*tope_resultado)++;
		i++;
	}
}

int main() {
	int vector_primos[MAX_ELEMENTOS] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23};
	int vector_impares[MAX_ELEMENTOS] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
	int tope_primos = 10;
	int tope_impares = 12;

	printf("Vector primos: ");
	imprimir_vector(vector_primos, tope_primos);
	printf("\nVector impares: ");
	imprimir_vector(vector_impares, tope_impares);

	int vector_interseccion[MAX_ELEMENTOS];
	int tope_interseccion = 0;
	intersectar(
		vector_primos, tope_primos,
		vector_impares, tope_impares,
		vector_interseccion, &tope_interseccion
	);
	printf("\nVector intersección: ");
	imprimir_vector(vector_interseccion, tope_interseccion);

	int vector_union[2*MAX_ELEMENTOS];
	int tope_union = 0;
	unir(
		vector_primos, tope_primos,
		vector_impares, tope_impares,
		vector_union, &tope_union
	);
	printf("\nVector unión: ");
	imprimir_vector(vector_union, tope_union);

	int vector_mezcla[2*MAX_ELEMENTOS];
	int tope_mezcla = 0;
	mezclar(
		vector_primos, tope_primos,
		vector_impares, tope_impares,
		vector_mezcla, &tope_mezcla
	);
	printf("\nVector mezcla: ");
	imprimir_vector(vector_mezcla, tope_mezcla);

	int vector_diferencia[2*MAX_ELEMENTOS];
	int tope_diferencia = 0;
	restar(
		vector_primos, tope_primos,
		vector_impares, tope_impares,
		vector_diferencia, &tope_diferencia
	);
	printf("\nVector diferencia (primos - impares): ");
	imprimir_vector(vector_diferencia, tope_diferencia);

	restar(
		vector_impares, tope_impares,
		vector_primos, tope_primos,
		vector_diferencia, &tope_diferencia
	);
	printf("\nVector diferencia (impares - primos): ");
	imprimir_vector(vector_diferencia, tope_diferencia);

	return 0;
}
