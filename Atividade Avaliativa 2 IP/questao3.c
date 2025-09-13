#include <stdio.h>;

int main(){
    float altura, mediaid;
    int cod, idade, somaid = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite o codigo da pessoa: ");
        scanf("%d", &cod);
        printf("Digite a idade da pessoa: ");
        scanf("%d", &idade);
        printf("Digite a altura da pessoa: ");
        scanf("%f", &altura);
        somaid += idade;

        if(idade < 18){
            printf("O atleta %d tem menos de 18 anos", cod);
        }
    }

    mediaid = somaid / 5.0;
    printf("A media de idade do grupo e: %.2f", mediaid);
    return 0;
}