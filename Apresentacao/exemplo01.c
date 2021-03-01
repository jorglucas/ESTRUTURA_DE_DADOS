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

void removendoParticipante(LISTA* l, int nmrSorteado){
    system("clear");
    int i = 0;
    while(i < MAX - 1)
    {
        /*
        l->rifa[nmrSorteado].codigo = -1;
        int aux = l->rifa[nmrSorteado + 1].codigo;
        l->rifa[nmrSorteado + 1].codigo = l->rifa[nmrSorteado].codigo;
        l->rifa[nmrSorteado].codigo = aux;
        ++i;
        */
    }

    for(int j = 0; j < MAX; j++){
        printf("%d\n", l->rifa[j].codigo);
    }
}

void sorteandoCodigo(LISTA* l, int nmrSorteado){
    // system("clear");
    printf("%s, você foi o sorteado com o código %d!\n\n", l->rifa[nmrSorteado].nome, l->rifa[nmrSorteado].codigo);
    printf("%s cumpriu os requisitos? [s/n]\n", l->rifa[nmrSorteado].nome);

    char resposta;
    scanf(" %c", &resposta);

    if(resposta == 's') printf("PARABAINS!\n");
    else if(resposta == 'n') 
    {
        removendoParticipante(l, nmrSorteado);
        sorteandoCodigo(l, rand() % 50);
    }
    else sorteandoCodigo(l, nmrSorteado);
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