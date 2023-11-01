/* Página para ver el ordenamiento visualmente: https://visualgo.net/en/sorting */
#include <stdio.h>

#define MAX_VECTOR 10

void intercambiar(int vector[MAX_VECTOR], int posicion1, int posicion2) {
	int aux = vector[posicion1];
	vector[posicion1] = vector[posicion2];
	vector[posicion2] = aux;
}

void imprimir_vector(int vector[MAX_VECTOR], int tope) {
	for (int i = 0; i < tope; i++) {
		printf("%i ", vector[i]);
	}
	printf("\n");
}

void ordenar_burbujeo(int vector[MAX_VECTOR], int tope) {
	for (int i = 0; i < tope-1; i++) {
		for (int j = 0; j < tope-i-1; j++) {
			if (vector[j] > vector[j+1]) {
				intercambiar(vector, j, j+1);
			}
		}
	}
}

void ordenar_seleccion(int vector[MAX_VECTOR], int tope) {
	for (int i = 0; i < tope-1; i++) {
		int minimo = i;
		for (int j = i+1; j < tope; j++) {
			if (vector[j] < vector[minimo]) {
				minimo = j;
			}
		}
		intercambiar(vector, i, minimo);
	}
}

void ordenar_insercion(int vector[MAX_VECTOR], int tope) {
	for (int i = 1; i < tope; i++) {
		int elemento_a_insertar = vector[i];
		int j = i;
		while (j > 0 && vector[j-1] > elemento_a_insertar) {
			vector[j] = vector[j-1];
			j--;
		}
		vector[j] = elemento_a_insertar;
	}
}

int main() {
	int mi_vector[MAX_VECTOR] = {8, 7, 9, 4, 1, 5};
	int tope = 6;

	imprimir_vector(mi_vector, tope);

	// ordenar_burbujeo(mi_vector, tope);
	ordenar_seleccion(mi_vector, tope);
	// ordenar_insercion(mi_vector, tope);

	imprimir_vector(mi_vector, tope);

	return 0;
}
