#include <stdio.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int numeroDeElementos;
} LISTA;

int main(){
    int definirTamanho();
    void exibirLista();
    LISTA l;
    l.numeroDeElementos = definirTamanho(&l);
    for(int i = 0; i < l.numeroDeElementos; i++){
        l.A[i].chave = i + 20;
    }
    exibirLista(&l);
}

int definirTamanho(LISTA* l){
    l->numeroDeElementos = 51;
    return l->numeroDeElementos;
}

void exibirLista(LISTA* l){
    printf("Lista: \" ");
    for(int i = 0; i < l->numeroDeElementos; i++){
        printf("%d ", l->A[i].chave);
    }

    printf("\"\n");
}