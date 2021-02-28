/* 
    Diferença entre modicar uma estrutura passada
    como parâmetro e um ponteiro apontada para o 
    endereço de memória de uma determinada estrutura.
*/

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
    LISTA l;
    for(int i = 0; i < MAX; i++){
        l.A[i].chave = i;
    }

    void modificaParametro();
    modificaParametro(l);

    for(int i = 0; i < MAX; i++){
        printf("Depois modificaParametro: %d\n", l.A[i].chave);
    }

    void modificaPonteiro();
    modificaPonteiro(&l);

    for(int i = 0; i < MAX; i++){
        printf("Depois modificaPonteiro: %d\n", l.A[i].chave);
    }   

}

void modificaParametro(LISTA l) {
    for(int i = 0; i < MAX; i++){
        l.A[i].chave = -1;
    }
}

void modificaPonteiro(LISTA* l) {
    for(int i = 0; i < MAX; i++){
        l->A[i].chave = -2;
    }
}