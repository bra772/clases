#include <stdio.h>
#include <stdbool.h>

int factorial(int n){
    if (n == 0)
        return 1;

    return n *factorial(n - 1);
}

int main(){
    int resultado;
    resultado = factorial(4);

    printf("factorial: %i", resultado);

    return 0;
}