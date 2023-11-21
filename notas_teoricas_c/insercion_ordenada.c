#include <stdbool.h>
#include <stdio.h>

#define MAX_VECTOR 10

void imprimir_vector(int vector[MAX_VECTOR], int tope) {
	for (int i = 0; i < tope; i++) {
		printf("%i ", vector[i]);
	}
	printf("\n");
}

void insertar_ordenadamente(int vector[MAX_VECTOR], int* tope, int numero_nuevo) {
	bool agregado = false;
	for (int i = *tope; i > 0; i--) {
		if (vector[i-1] > numero_nuevo) {
			vector[i] = vector[i-1];
		} else if (!agregado) {  // Entra si agregado == false
			vector[i] = numero_nuevo;
			agregado = true;
		}
	}

	if (!agregado) {
		vector[0] = numero_nuevo;
	}
	
	(*tope)++;
}

void insertar_ordenadamente_while(int vector[MAX_VECTOR], int* tope, int numero_nuevo) {
	int i = *tope;
	while (i > 0 && vector[i-1] > numero_nuevo) {
		vector[i] = vector[i-1];
		i--;
	}
	vector[i] = numero_nuevo;
	(*tope)++;
}


int main() {
	int mi_vector[MAX_VECTOR] = {1, 3, 5, 7};
	int tope = 4;

	imprimir_vector(mi_vector, tope);

	insertar_ordenadamente_while(mi_vector, &tope, 6);
	imprimir_vector(mi_vector, tope);

	return 0;
}
