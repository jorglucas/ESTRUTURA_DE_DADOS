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

int inserirElemLista(LISTA* l, REGISTRO reg, int i){
    int j;
    
}

void definirChavesDaLista(LISTA* l, int i){
    for(int i = 0; i < l->numeroDeElementos; i++){
        l->A[i].chave = 20 + i;
    }
    return;
}

void definirTamanhoDaLista(LISTA* l){
    l->numeroDeElementos = 10;
}

int main() {
    LISTA l;
    
    definirTamanhoDaLista(&l);
    definirChavesDaLista(&l, 0);

}
