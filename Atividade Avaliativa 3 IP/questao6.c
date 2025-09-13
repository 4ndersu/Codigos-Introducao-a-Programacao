#include <stdio.h>
#include <stdlib.h>
#define lin 5
#define col 5

int main(){
    int i, j;
    int M[lin][col];
    
   //a) e b)
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            M[i][j] = rand() % 100; // gera uma matriz com números aleatórios 
            printf("[%d]", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
      
    //c)
    for(i = 0; i < lin; i++) {
        int maiorlin = M[i][0]; // assume que o primeiro elemento da linha é o maior
        for(j = 1; j < col; j++) {
            if(M[i][j] > maiorlin) {
                maiorlin = M[i][j]; // atualiza o maior elemento se encontrar um maior
            }
        }
        printf("Maior elemento linha %d: %d\n", i, maiorlin);
    }
    
    printf("\n");
    
    //d)
    for(j = 0; j < col; j++) {
        int maiorcol = M[0][j]; // assume que o primeiro elemento da coluna é o maior
        for(i = 1; i < lin; i++) {
            if(M[i][j] > maiorcol) {
                maiorcol = M[i][j]; // atualiza o maior elemento se encontrar um maior
            }
        }
        printf("Maior elemento coluna %d: %d\n", j, maiorcol);
    }
    
    printf("\n");
    
    //e)
    for(i = 0; i < lin; i++) {
        int menorlin = M[i][0]; // assume que o primeiro elemento da linha é o menor
        for(j = 1; j < col; j++) {
            if(M[i][j] < menorlin) {
                menorlin = M[i][j]; // atualiza o maior elemento se encontrar um menor
            }
        }
        printf("Menor elemento linha %d: %d\n", i, menorlin);
    }
    
    printf("\n");
    
    //f)
    for(j = 0; j < col; j++) {
        int menorcol = M[0][j]; // assume que o primeiro elemento da coluna é o menor
        for(i = 1; i < lin; i++) {
            if(M[i][j] < menorcol) {
                menorcol = M[i][j]; // atualiza o maior elemento se encontrar um maior
            }
        }
        printf("Menor elemento coluna %d: %d\n", j, menorcol);
    }
    
    printf("\n");
    
    
    printf("\n");
    

    
    printf("\n");

    //h) e i)
    printf("Elementos maiores que a media de cada coluna:\n");
    for(j = 0; j < col; j++) {
        printf("Coluna %d:\n", j);
        float soma = 0.0;
        for(i = 0; i < lin; i++) {
            soma += M[i][j];
        }
        float media = soma / lin; // Calcula a média de cada coluna
         printf("Media dos valores da coluna %d: %f\n", j, media);
        int contador = 0;
        for(i = 0; i < lin; i++) {
            if (M[i][j] > media) {
                printf("%d ", M[i][j]);
                contador++;
            }
        }
        if (contador == 0) {
            printf("Nenhum elemento e maior que a media.");
        }
        printf("\nNumero de elementos: %d", contador);
        printf("\n\n");
    }
    
    //g) e j)
  printf("Elementos maiores que a media de cada linha:\n");
    for(int i = 0; i < lin; i++) {
        float soma = 0;
        for(int j = 0; j < col; j++) {
            soma += M[i][j];
        }
        float media = soma / col; // Calcula a média dos elementos de cada linha
        printf("Media dos valores da linha %d: %f\n", i, media);
        
        printf("Valores maiores que a media na linha %d: ", i);
        int contador = 0;
        for(int j = 0; j < col; j++) {
            if (M[i][j] > media) {
                printf("%d ", M[i][j]);
                contador++;
            }
        }
        if (contador == 0) {
            printf("Nenhum elemento e maior que a media.");
        }
        printf("\nNumero de elementos: %d", contador);
        printf("\n\n");
    }
    
    //k)
    printf("Elementos menores que a media de cada coluna:\n");
    for(int j = 0; j < col; j++) {
        float soma = 0.0;
        for(int i = 0; i < lin; i++) {
            soma += M[i][j];
        }
        float media = soma / lin; // Calcula a média de cada coluna
        printf("Media dos valores da coluna %d: %f\n", j, media);
        
        printf("Valores menores que a media na coluna %d: ", j);
        int contador = 0;
        for(int i = 0; i < lin; i++) {
            if (M[i][j] < media) { // Verifica se o elemento é menor que a média
                printf("%d ", M[i][j]);
                contador++;
            }
        }
        if (contador == 0) {
            printf("Nenhum elemento e menor que a media.");
        }
        printf("\nNumero de elementos : %d\n\n", contador);
    }
    
    //l)
    printf("Elementos menores que a media de cada linha:\n");
    for(int i = 0; i < lin; i++) {
        float soma = 0.0;
        for(int j = 0; j < col; j++) {
            soma += M[i][j];
        }
        float media = soma / col; // Calcula a média de cada linha
        printf("Media dos valores da linha %d: %.2f\n", i, media);
        
        printf("Valores menores que a media na linha %d: ", i);
        int contador = 0;
        for(int j = 0; j < col; j++) {
            if (M[i][j] < media) { // Verifica se o elemento é menor que a média
                printf("%d ", M[i][j]);
                contador++;
            }
        }
        if (contador == 0) {
            printf("Nenhum elemento e menor que a media.");
        }
        printf("\nNumero de elementos : %d\n\n", contador);
    }

    

    

    return 0;
}
