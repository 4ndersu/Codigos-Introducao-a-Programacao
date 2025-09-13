#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5

int main() {
    int matriz[LIN][COL];
    int i, j;
    

    for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
           matriz[i][j] = rand() % 100; // gera uma matriz com números aleatórios
           printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    // Encontrando o maior elemento da matriz
    int maior = matriz[0][0];
    for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    
    printf("Maior elemento da matriz : %d\n", maior);

    // Encontra o elemento minimax
    int minimax = maior; // Inicializa o minimax com o maior elemento
    int linha_minimax = 0;
    for(i = 0; i < LIN; i++) {
        for(j = 0; j < COL; j++) {
            if(matriz[i][j] == maior) { // Se encontrar o maior elemento, encontre o menor elemento na mesma linha
                for(int k = 0; k < COL; k++) {
                    if(matriz[i][k] < minimax) {
                        minimax = matriz[i][k];
                        linha_minimax = i;
                    }
                }
            }
        }
    }
    
    // Imprimindo o elemento minimax
    printf("O elemento minimax da matriz : %d\n", minimax);
    printf("Ele esta na linha %d da matriz.\n", linha_minimax+1);
    
    return 0;
}
