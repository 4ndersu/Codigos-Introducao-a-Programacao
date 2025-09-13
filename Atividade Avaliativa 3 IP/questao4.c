#include <stdio.h>
#define atletas 30 //número de atletas

int main(){
    
    int id[atletas], i, contador=0;
    float escore[atletas], somaescore=0.0, mediaescore;
    
    printf("Numero de identificacao e escore de cada atleta: \n");
    for(i=0; i<atletas; i++) {
        printf("Atleta %d\n", i + 1);
        printf("Numero de identificacao: ");
        scanf("%d", &id[i]);
        do {
            printf("Escore: ");
            scanf("%f", &escore[i]);
            
            if(escore[i] < 0.0 || escore[i] > 10.0){
                printf("Escore invalido, apenas valores entre 0 e 10 sao permitidos\n");
            }
        } while(escore[i] < 0.0 || escore[i] > 10.0); //Quando o escore nao e entre valores 0 e 10, nao registrara o atleta ate um valor valido ser inserido.
        
        somaescore=somaescore+escore[i];
        contador=contador + 1;
    }
mediaescore=somaescore/contador;
 
 printf("\nAtletas com escore igual ou superior a media (%.2f):\n", mediaescore);
 
 for (i = 0; i < atletas; i++) {
        if (escore[i] >= mediaescore) {
            printf("Numero de identificacao: %d, Escore: %.2f\n", id[i], escore[i]);//Imprime apenas os atlestas com escore maior ou igual a média
        }
    }
   return 0;
}