
#include <stdio.h>

//subprograma que calcula o fatorial
int fatorial(int n){
    
    int fat=1, i;

    for(i=2; i<=n; i++){
     fat=fat*i;   
    }
return fat;
}

int main()
{
    int m, i;
    
    printf("Digite o valor inteiro:\n");
    scanf("%d", &m);
    
    
    for(i=1;i<=m; i++){
      printf("Fatorial de %d: %d\n",i, fatorial(i));//chama o subprograma
    }

    return 0;
}