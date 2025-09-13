#include <stdio.h>
#include <stdlib.h>
#define max_lin 100
#define max_col 100

void preencher_matriz_esparsa(int matriz[max_lin][max_col], int linhas, int colunas) {


    int total_elementos = linhas * colunas;
    int elementos_nao_nulos = total_elementos / 3; 
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = 0;
        }
    }

    for (i = 0; i < elementos_nao_nulos; i++) {
        int linha = rand() % linhas;
        int coluna = rand() % colunas;
        int valor = rand() % 100 + 1; 
        matriz[linha][coluna] = valor;
    }
}

void imprimir_matriz_esparsa(int matriz[max_lin][max_col], int linhas, int colunas) {
    int i, j;
    printf("Matriz esparsa:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
printf("\n");
}

void formar_matriz_condensada(int matriz[max_lin][max_col], int linhas, int colunas) {
    int i, j;
    printf("Matriz condensada:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] != 0) {
                printf("%d %d %d\n", matriz[i][j], i, j);
            }
        }
    }
}

int main() {
    int matriz[max_lin][max_col];
    int linhas, colunas;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    preencher_matriz_esparsa(matriz, linhas, colunas);
    imprimir_matriz_esparsa(matriz, linhas, colunas);
    formar_matriz_condensada(matriz, linhas, colunas);

    return 0;
}
