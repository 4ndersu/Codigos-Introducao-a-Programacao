#include <stdio.h>
#include <stdlib.h>
#define lin 4
#define col 4
#define valor_real 2.0 //valor real que multiplicará todos os elementos da matriz na letra g)

int main(){
    int i, j;
    int M[lin][col];
    
   //a) e b)
    printf("Matriz original :\n");
    
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            M[i][j] = rand() % 100; // gera uma matriz com números aleatórios 
            printf("[%d]", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
  
  //c)
for(i = 0; i < col; i++) {
    int temp = M[0][i]; // Armazena o elemento da primeira linha temporariamente
    M[0][i] = M[i][0];  // Coloca o elemento da primeira coluna na primeira linha
    M[i][0] = temp;     // Coloca o elemento da primeira linha na primeira coluna
}
printf("Matriz invertida :\n");
for(i = 0; i < lin; i++) {
    for(j = 0; j < col; j++) {
        printf("[%d]", M[i][j]);
    }
    printf("\n");
}
  
   printf("\n");
  
  //d)  
 printf("Diagonal Principal: ");
    for(i = 0; i < lin; i++) {
        printf("[%d] ", M[i][i]);
    }
    printf("\n");

   printf("Diagonal Secundária: ");
    for(i = 0; i < lin; i++) {
        printf("[%d] ", M[lin - i - 1][i]);
    }
    printf("\n");
    printf("\n");
    
    //e)
    printf("Matriz com os valores da segunda coluna zerados :\n");
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            M[i][1]=0; 
            printf("[%d]", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");

//f)
int produto[col]; // declaração do vetor com o produto dos elementos de cada coluna
        for(j = 0; j < col; j++) {
            produto[j]= 1;
            for(i = 0; i < lin; i++) {
           produto[j] *= M[i][j]; // Calcula o produto dos elementos da coluna
        }
            printf("Coluna %d: %d\n", j, produto[j]); // Imprime o produto da coluna
    }
        
        printf("\n");
    
    printf("\n");

    //g)
    
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            M[i][j] *= valor_real; // Multiplique cada elemento da matriz pelo valor real
        }
    }
    
    // Imprima a matriz resultante
    printf("Matriz multiplicada por %f :\n", valor_real);
    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            printf("[%d]", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}