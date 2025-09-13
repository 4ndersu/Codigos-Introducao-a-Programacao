#include <stdio.h>

int main()
{
    float salario, premio, vendas;
    
    printf("Salario do funcionario e vendas efetuadas no mês: ");
    scanf("%f %f", &salario, &vendas);
    
    if(vendas> 100 && vendas <= 500){
        premio = 50.0;
    } else if(vendas > 500.0 && vendas <= 750.0) {
        premio = 70.0;
    } else if(vendas > 750.0) {
        premio = 100.0;
    } 
    
     printf("\nPremio: %f R$", premio);
    salario += premio;
    printf("\nSalario com premio: %f R$", salario);
    return 0;
}