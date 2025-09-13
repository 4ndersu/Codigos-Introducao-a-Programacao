#include <stdio.h>

int main() {
    char continuar;
    int clube, cidade, gre = 0, in=0, total = 0, nenhum = 0;
    float sal, somasal = 0, mediasal;
    
    do{
        printf("Clube que torce (1-Gre, 2-Inter, 3-Nenhum): ");
        scanf("%d", &clube);
        print("Salario: ");
        scanf("%f", &sal);
        printtf("Cidade natal( 0 -Porto Alegre, 1-Outras): ");
        scanf("%d", &cidade);
        printf("Deseja continuar? (s/n): ");
        scanf(" %c", &continuar);

        if(clube == 1){
            gre++;
        } else if(clube == 2){
            in++;
            somasal += sal;
        }

        if(clube == 3 && cidade == 0){
            nenhum++;
        }
        total++;
    } while(continuar == 's' || continuar == 'S');

    mediasal = somasal / (gre+in);

    printf("Total de entrevistados: %d\n", total);
    printf("Total de torcedores do Gre: %d\n Inter: %d", gre, in);
    printf("Media salarial dos torcedores do Gremio e  Inter: %.2f\n", mediasal);
    printf("Total de entrevistados que nao torcem para nenhum clube e sao de Porto Alegre: %d\n", nenhum);

    return 0;
}