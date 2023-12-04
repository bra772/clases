#include <stdio.h>


int fibonacci(int n){
    //casos bases
    if (n == 1 || n == 2){
        return 1;
    }
    //llamada recursiva
    return fibonacci(n - 1) + fibonacci(n -2);
}

int main(){


    return 0;
}