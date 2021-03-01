// Sequencial (cinema)

/*
    1. Montar uma estrutura que guarde a idade da pessoa; ok
    2. Preencher a lista com 20 pessoas com idade entre 18 e 90;
    3. Receber a idade da pessoa;
    4. Verificar se é idoso;
    5. Incluir no começo da lista.
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 30

typedef int IDADE;

typedef struct {
    IDADE idade;
} PESSOA;

typedef struct {
    PESSOA fila[MAX];
} LISTA;

void preencherLista(LISTA *l){
    for(int i = 0; i < MAX - 5; ++i){
        l->fila[i].idade = 18 + (rand() % 72);
    }
    int novaIdade, i = 0;
    while(i < 5)
        scanf("%d", &novaIdade);
        if(novaIdade < 18 || novaIdade > 90) printf("Digite uma idade entre 18 e 90 anos.\n");
        else
        {
            if(novaIdade >= 65)
            {
                //move todos uma casa para direita e inclui a novaIdade no começo
            }
            else
            {
                //inclui a novaIdade no final
            }
            ++i;
        }
    }

}

int main(){
    srand(time(NULL));
    LISTA l;

    preencherLista(&l);
}