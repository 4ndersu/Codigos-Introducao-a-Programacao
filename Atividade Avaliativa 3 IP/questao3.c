#include <stdio.h>
#define N 5 // Tamanho do vetor definido pelo usuário

int main() {
    int i, multiplo5 = 0;
    
    int vetor1[N], vetor2[N]; // Declaração dos vetores

    printf("Elementos do vetor: \n");
    
    // Preenche o vetor1 com valores fornecidos pelo usuário
    for(i = 0; i < N; i++) {
        scanf("%d", &vetor1[i]);
        
        // verifica se o elemento é múltiplo de 5 e, se for, é armazenado no vetor2
        if(vetor1[i] % 5 == 0) {
            vetor2[multiplo5] = vetor1[i];
            multiplo5++; // Adiciona no contador de elementos múltiplos de 5
        }
    }
    
    // Verifica se foram fornecidos elementos múltiplos de 5
    if (multiplo5 == 0) {
        printf("Nao foi fornecido nenhum elemento multiplo de 5\n");
    } else {
        // Se foram fornecidos, imprime o vetor2 com os múltiplos de 5
        printf("Vetor com multiplos de 5: ");
        for (i = 0; i < multiplo5; i++) {
            printf("%d ", vetor2[i]);
        }
    }
    
    return 0;
}