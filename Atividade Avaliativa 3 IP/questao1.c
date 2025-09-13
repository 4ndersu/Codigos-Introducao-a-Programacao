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

    //deslocar valor do elemento inicial para o indice seguinte do arranjo, fazendo o ultimo elemento perder o valor contido nele
    for (i = N - 1; i > 0; i--) {
        arr[i] = arr[i - 1]; 
    }
    arr[0] = 0; //atribuir valor 0 ao primeiro elemento do arranjo

    printf("Arranjo depois do deslocamento: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}