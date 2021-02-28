#include <stdio.h>

int main() {
    int x = 25;
    printf("x é: %d\n", x);

    int* y = &x; // y recebe o endereço de memória de x;
    *y = 30; // Modifica o valor atribuido para esse endereço de memória;
    printf("x é: %d\n", x);
}  