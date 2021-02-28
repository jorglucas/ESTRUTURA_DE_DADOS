#include <stdio.h>
#include <stdlib.h>

#define alturaMaxima 255; 

typedef struct {
    int peso;
    int altura;
} PesoAltura;

int main(){
    PesoAltura* pessoa1 = (PesoAltura*) malloc(sizeof(PesoAltura));

    pessoa1->peso = 80;
    pessoa1->altura = 185;
    printf("%d\n%d\n", pessoa1->peso, pessoa1->altura);

};