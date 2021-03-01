// Sequencial (sorteio)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX 50

typedef int TIPOCODIGO;
typedef char NOMEDOUSUARIO;

typedef struct {
    TIPOCODIGO codigo;
    NOMEDOUSUARIO nome[10];
} CADASTRO;

typedef struct {
    CADASTRO rifa[MAX];
} LISTA;

void sorteandoCodigo(LISTA* l, int nmrSorteado){
    printf("%d\n", nmrSorteado);
    printf("PARABÉNS, [ %d ] (%s) você foi o sorteado!!\n", l->rifa[nmrSorteado].codigo, l->rifa[nmrSorteado].nome);
};

void preenchendoLista(LISTA* l, int i){
    while(i < MAX){
        TIPOCODIGO codigoAleatorio = rand() % 100; 
        TIPOCODIGO repetido = 0;

        for(int j = 0; j < i; j++){
            if(codigoAleatorio == l->rifa[j].codigo){
                repetido = 1;
                break;
            }
        }
        if(repetido == 0){
            l->rifa[i].codigo = codigoAleatorio;
            FILE *arquivo = fopen("db.txt", "r");
            if(arquivo == NULL) printf("Erro, nao foi possivel abrir o arquivo\n");
            else{
                int cont = 0;
                while(cont < codigoAleatorio){
                    fscanf(arquivo, "%s", l->rifa[i].nome);
                    ++cont;
                }
                fclose(arquivo);
            }
            ++i;
        }
    }
};

int main(){
    srand(time(NULL));
    LISTA l;
    preenchendoLista(&l, 0);
    sorteandoCodigo(&l, rand() % 50);
};