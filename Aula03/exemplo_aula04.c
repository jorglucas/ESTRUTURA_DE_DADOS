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

int verificarLista(LISTA* l, int key){
    int posicaoChave = -1;
    for(int i = 0; i < l->numeroDeElementos; i++){
        if(l->A[i].chave == key){
            posicaoChave = i;
            break;
        } 
    }
    return posicaoChave;
}

int receberChave(){
    int key;
    printf("Digite a chave para receber a posição dela na lista: \n");
    scanf("%d", &key);
    return key;
}

void definirChavesDaLista(LISTA* l, int i){
    for(int i = 0; i < l->numeroDeElementos; i++){
        l->A[i].chave = 20 + i;
    }
    return;
}

void definirTamanhoDaLista(LISTA* l){
    printf("Digite o tamanho da lista, obedecendo o limite de 50 elementos:\n");
    scanf("%d", &l->numeroDeElementos);
}

int main() {
    LISTA l;
    
    definirTamanhoDaLista(&l);
    definirChavesDaLista(&l, 0);
    
    int key = receberChave();    
    int posicaoChave = verificarLista(&l, key);

    posicaoChave == -1 ? printf("Chave não encontrada!\n") : printf("A chave está na posição %d\n", posicaoChave);
}
