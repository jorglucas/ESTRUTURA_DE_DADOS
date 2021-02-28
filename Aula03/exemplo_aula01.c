/* 
    Lista linear -> Estrutura de dados na qual cada elemento é precedido por um elemento e sucedido por outro
    (exceto o primeiro que não tem predecessor e o último que não tem sucessor).
    Os elementos estão em uma data ordem (por exemplo, a ordem de inclusão ou ordenados por uma chave);

    Lista linear sequencial -> É uma lista na qual a ordem lógica dos elementos (a ordem "vista" pelo user)
    é a mesma ordem física (em memória principal) dos elementos. isto é, elementos vizinhos na lista estarão
    em posições vizinhas de memória. 

    Modelagem -> Modelaremos usando um arranjo de registros;
    Registros conterão as informações de interesse do usuário;
    Nosso arranjo terá um tamanho fixo e constrolaremos o número
    de elementos com uma variável condicional.
*/

#include <stdio.h>

#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
    // outros campos...
} REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int nroElem;
} LISTA;

int main() {
    
}