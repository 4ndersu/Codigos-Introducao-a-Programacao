#include <stdio.h>
#include <stdbool.h> 

#define MODELOS 5
#define CORES 6
#define ANOS 3
#define COMBUSTIVEIS 3

//Subprograma para obter o preço de um carro da matriz
float obter_preco(float matriz_precos[50][MODELOS][CORES][ANOS][COMBUSTIVEIS], int codigo, int modelo, int cor, int ano, int combustivel) {
    return matriz_precos[codigo - 1][modelo][cor][ano][combustivel];
}

int main() {
    
    float matriz_precos[50][MODELOS][CORES][ANOS][COMBUSTIVEIS];

    // Preenchendo a matriz com os dados de entrada do teclado
    for (int codigo = 1; codigo <= 50; codigo++) {
        for (int modelo = 0; modelo < MODELOS; modelo++) {
            for (int cor = 0; cor < CORES; cor++) {
                for (int ano = 0; ano < ANOS; ano++) {
                    for (int combustivel = 0; combustivel < COMBUSTIVEIS; combustivel++) {
                        printf("Digite o preco do carro %d (modelo %d, cor %d, ano %d, combustivel %d): ", codigo, modelo + 1, cor + 1, ano + 2009, combustivel + 1);
                        scanf("%f", &matriz_precos[codigo - 1][modelo][cor][ano][combustivel]);
                    }
                }
            }
        }
    }

    // Respondendo a consultas
    int codigo, modelo, cor, ano, combustivel;
    char sair;
    bool continuar = true; 

    while (continuar) {
        printf("\nDigite o código do carro (1-50) ou 's' para sair: ");
        scanf("%d", &codigo);

        if (codigo == 's') {
            printf("Programa encerrado.\n");
            continuar = false;
        } else {
            printf("Digite o modelo do carro (1-5): ");
            scanf("%d", &modelo);
            printf("Digite a cor do carro (1-6): ");
            scanf("%d", &cor);
            printf("Digite o ano de fabricacao do carro (1-3): ");
            scanf("%d", &ano);
            printf("Digite o tipo de combustivel do carro (1-3): ");
            scanf("%d", &combustivel);

            // Verifica se os valores de entrada estão dentro do intervalo permitido
            if (codigo < 1 || codigo > 50 || modelo < 1 || modelo > MODELOS || cor < 1 || cor > CORES || ano < 1 || ano > ANOS || combustivel < 1 || combustivel > COMBUSTIVEIS) {
                printf("Valores de entrada invalidos. Tente novamente.\n");
            } else {
                // Obtendo e exibindo o preço do carro
                float preco = obter_preco(matriz_precos, codigo, modelo - 1, cor - 1, ano - 1, combustivel - 1);
                printf("O preço do carro %d é %f\n", codigo, preco);
                
                printf("Deseja sair? (s para sim, qualquer outra tecla para continuar): ");
                scanf(" %c", &sair);
                if (sair == 's') {
                    printf("Programa encerrado.\n");
                    continuar = false; 
                }
            }
        }
    }

    return 0;
}
