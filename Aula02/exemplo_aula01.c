#include <stdio.h>
#include <math.h>
#define alturaMaxima 225 // O compilador define a palavra 'alturaMAxima' como sendo 225.

/*
    A sintaxe struct{...} define uma estrutura com os campos definidos dentro das chaves;
    A sintaxe typedef...PesoAltura define o nome PesoAltura para o que foi definido nas reticências.
*/

typedef struct {
    int peso; // Peso em kg;
    int altura; // Altura em cm;
} PesoAltura;

/*
    Definimos que a palavra CHAVE poderá ser usado no código para representar o tipo int (inteiro),
    into é, demos um novo nome para o tipo int.  
*/
typedef int CHAVE;

int main() {
    // Criando uma estrutura do tipo PesoAltura:
    PesoAltura pessoa1;
    // Acessando e atribuindo valores para os campos dessa estrutura:
    pessoa1.peso = 80; 
    pessoa1.altura = 185; 
    printf("O peso: %d\nA altura: %d\n", pessoa1.peso, pessoa1.altura);
};