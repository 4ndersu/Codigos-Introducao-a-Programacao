#include <stdio.h>
#define N 5

int main() {
    int i;
    int arr[N]={2,10,5,1,7};

 
    printf("Arranjo inicial: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //deslocar valor do elemento para o indice anterior do arranjo, fazendo o primeiro elemento do arranjo perder seu valor inicial
    for (i = 0; i < N - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    arr[N - 1] = 0; //atribuir valor 0 ao ultimo elemento do arranjo
    
    printf("Arranjo depois do deslocamento: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
