#include <stdio.h>
#include <stdbool.h>
#define TAMANHO 5

//subprograma que calcula a média movel
float CalcularMediaMovel(int valores[]) {
    float media = 0, soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        soma = soma + valores[i];
    }
    media= soma/TAMANHO;
    return media;
}

//subprograma para armazenar novos valores
void ArmazenarValor(int valores[], int NovoValor) {
    //move todos os valores uma posição para a esquerda
    for (int i = 0; i < TAMANHO - 1; i++) {
        valores[i] = valores[i + 1];
    }
    //adiciona novos valores ao vetor, descartando os valores mais antgos
    valores[TAMANHO - 1] = NovoValor;
}


int main() {
    int valores[TAMANHO] = {0};
    int NovoValor;
    int encerrar = 0;

    printf("Digite valores inteiros positivos(se digitar um valor negativo, o programa sera encerrado) :\n");

    while (!encerrar) {
        scanf("%d", &NovoValor);
        
        if (NovoValor >= 0) {
            ArmazenarValor(valores, NovoValor);
            float media = CalcularMediaMovel(valores);
            printf("Media movel: %.2f\n", media);
        } else {
            encerrar = 1; 
        }
    }

    return 0;
}
