#include <stdio.h>

#define AVENIDAS 10
#define RUAS 29

// Subprograma para registrar um acidente na matriz de acidentes
void registrarAcidente(int matriz[AVENIDAS][RUAS], int avenida, int rua, int numAcidentes) {
    matriz[avenida][rua] += numAcidentes;
}

// Subprograma para imprimir o relatório de acidentes
void relatorioAcidentes(int matriz[AVENIDAS][RUAS]) {
    int acidentesRegistrados = 0;
    printf("Relatório de Acidentes:\n");
    for (int avenida = 0; avenida < AVENIDAS; avenida++) {
        for (int rua = 0; rua < RUAS; rua++) {
            if (matriz[avenida][rua] > 0) {
                printf("Acidentes na Avenida %d com a Rua %d: %d\n", avenida + 1, rua + 30, matriz[avenida][rua]);
                acidentesRegistrados = 1;
            }
        }
    }
    if (!acidentesRegistrados) {
        printf("Nenhum acidente registrado.\n");
    }
}

int main() {
    int matrizAcidentes[AVENIDAS][RUAS] = {0}; // Inicializa a matriz de acidentes com zeros
    int numAcidentes, avenida, rua;
    char opcao;

    // Entrada de dados
    printf("Insira os dados dos acidentes (Numero de Acidentes/Avenida/Rua) ou digite 'n' para encerrar:\n");

    do {
        do {
            printf("Numero de acidentes: ");
            scanf("%d", &numAcidentes);
            if (numAcidentes < 0) {
                printf("Numero de acidentes invalido. Tente novamente.\n");
            }
        } while (numAcidentes < 0); // Condição para o usuário não colocar número de acidentes negativos

        do {
            printf("Avenida (1 a 10): ");
            scanf("%d", &avenida);
            if (avenida < 1 || avenida > AVENIDAS) {
                printf("Numero de avenida invalida. Tente novamente.\n"); // Condição para o usuário não colocar números de avenidas além do permitido
            }
        } while (avenida < 1 || avenida > AVENIDAS);

        do {
            printf("Rua (30 a 58): ");
            scanf("%d", &rua);
            if (rua < 30 || rua > 58) {
                printf("Numero de rua invalida. Tente novamente.\n"); // Condição para o usuário não colocar números de ruas além do permitido
            }
        } while (rua < 30 || rua > 58);

        // Registra o acidente na matriz de acidentes
        registrarAcidente(matrizAcidentes, avenida - 1, rua - 30, numAcidentes);

        printf("Deseja inserir outro acidente? ('n' para nao, qualquer outra tecla para sim): ");
        scanf(" %c", &opcao);
    } while (opcao != 'n'); // Caso o usuário digite 'n', a inserção de dados é parada e o relatório de acidentes é imprimido

    // Gerar relatório de acidentes
    relatorioAcidentes(matrizAcidentes);

    return 0;
}
