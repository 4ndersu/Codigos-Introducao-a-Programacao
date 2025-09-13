#include <stdio.h>

//subprograma para calcular a soma dos três maiores números
int SomaTresMaiores(int w, int x, int y, int z) {
    int soma;
    int menor;

    //encontra o menor número entre os quatro
    menor = w;
    if (x < menor){
        menor = x;
    }
    if (y < menor){
        menor = y;
    }
    if (z < menor){
        menor = z;
    }
    //soma dos três maiores números
    soma = w + x + y + z - menor;

    return soma;
}

int main() {
    int n1, n2, n3, n4, resultado;
    char continuar;

    do {
        printf("Digite quatro numeros inteiros: ");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

        //chama o subprograma de soma
       resultado = SomaTresMaiores(n1, n2, n3, n4);

        printf("A soma dos tres maiores numeros e: %d\n", resultado);

        printf("Deseja continuar? s-sim n-nao ");
        scanf(" %c", &continuar);
    } while (continuar == 's');

    return 0;
}