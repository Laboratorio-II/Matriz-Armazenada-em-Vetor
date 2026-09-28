#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

// Cria uma matriz com todos os elementos iguais a zero
Matriz* criaMatriz(int linhas, int colunas) {
    Matriz *m = (Matriz*) malloc(sizeof(Matriz));

    m->num_linhas = linhas;
    m->num_colunas = colunas;

    // Um único vetor com espaço para todos os elementos
    m->matriz = (int*) calloc(linhas * colunas, sizeof(int));

    return m;
}

// Faz o equivalente a m[linha][coluna] = valor
void atualizaElemento(Matriz *m, int linha, int coluna, int valor) {
    // Complete aqui. Lembre-se de que os elementos estão guardados
    // em um único vetor, linha por linha, que começa em m->matriz.
}

// Faz o equivalente a valor = m[linha][coluna]
int recuperaElemento(Matriz *m, int linha, int coluna) {
    // Complete aqui. Lembre-se de que os elementos estão guardados
    // em um único vetor, linha por linha, que começa em m->matriz.
    return 0;
}

// Imprime a matriz, uma linha por vez
void imprimeMatriz(Matriz *m) {
    for (int i = 0; i < m->num_linhas; i++) {
        for (int j = 0; j < m->num_colunas; j++) {
            printf("%d ", recuperaElemento(m, i, j));
        }
        printf("\n");
    }
}

// Libera a memória usada pela matriz
void liberaMatriz(Matriz *m) {
    if (m != NULL) {
        free(m->matriz);
        free(m);
    }
}
