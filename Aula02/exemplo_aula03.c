#include <stdio.h>
#include <stdlib.h>

int main(){
    int* y = (int*) malloc(sizeof(int)); // Aloca a quantidade de memória de um inteiro( 32bits => 4 bytes / 64bits => 8bytes);
    *y = 20; // Atribuindo o valor 20 para o endereço alocado para y;
    int z = sizeof(int); // retorna o tamanho de um inteiro; 
    printf("*y = %d\nz = %d\n", *y, z);
};