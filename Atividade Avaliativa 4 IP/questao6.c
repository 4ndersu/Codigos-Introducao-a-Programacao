#include <stdio.h>

#define NUM_PRODUTOS 50
#define DIAS_SEMANA 6

//struct para armazenar dados do produto
typedef struct {
    int codigo;
    char tipo;
    int vendas[DIAS_SEMANA];
    float MediaSemana;
} Produto;

//subprograma para ler as informações de vendas de um produto em um dia específico
void LerVendas(Produto *produto, int dia) {
    int qtd;
    printf("Digite a quantidade vendida do produto %d para o dia %d: ", produto->codigo, dia + 1);
    scanf("%d", &qtd);
    produto->vendas[dia] = qtd;
}

//subprograma para calcular a média de vendas da semana para um produto
void CalcularMediaSemana(Produto *produto) {
    float TotalVendas = 0;
    for (int i = 0; i < DIAS_SEMANA; i++) {
        TotalVendas = TotalVendas + produto->vendas[i];
    }
    produto->MediaSemana = (float)TotalVendas / DIAS_SEMANA;
}

int main() {
    
    Produto produtos[NUM_PRODUTOS];

    for (int i = 0; i < NUM_PRODUTOS; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Codigo do produto: ");
        scanf("%d", &produtos[i].codigo);
        printf("Tipo do produto (P, M ou G): ");
        scanf(" %c", &produtos[i].tipo);

        for (int j = 0; j < DIAS_SEMANA; j++) {
            LerVendas(&produtos[i], j);
        }

        //calcula a média de vendas da semana para este produto
        CalcularMediaSemana(&produtos[i]);
        printf("\n");
    }

    //imprimir relatório
    printf("Relatorio de vendas:\n");
    for (int i = 0; i < NUM_PRODUTOS; i++) {
        printf("Produto %d - Tipo: %c\n", produtos[i].codigo, produtos[i].tipo);
        printf("Vendas por dia: ");
        for (int j = 0; j < DIAS_SEMANA; j++) {
            printf("%d ", produtos[i].vendas[j]);
        }
        printf("\n");
        printf("Media da semana: %.2f\n", produtos[i].MediaSemana);
    }

    return 0;
}
