#include <stdio.h>

void encontrarMinimaxIndices(int matriz[6][6], int *linhaMinimax, int *colunaMinimax) {
    int maxValor = matriz[0][0];
    *linhaMinimax = 0;
    *colunaMinimax = 0;

    // Encontrar o índice da linha com o maior elemento
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (matriz[i][j] > maxValor) {
                maxValor = matriz[i][j];
                *linhaMinimax = i;
                *colunaMinimax = j;
            }
        }
    }

    // Encontrar o índice do "minimax" na linha identificada
    int minimax = matriz[*linhaMinimax][0];
    for (int j = 0; j < 6; j++) {
        if (matriz[*linhaMinimax][j] < minimax) {
            minimax = matriz[*linhaMinimax][j];
            *colunaMinimax = j;
        }
    }
}

int main() {
    int matriz[6][6];

    // Preencher a matriz (exemplo)
    printf("Digite os valores para a matriz 6x6:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int linhaMinimax, colunaMinimax;

    // Chamar a rotina para encontrar os índices do "minimax"
    encontrarMinimaxIndices(matriz, &linhaMinimax, &colunaMinimax);

    // Exibir resultados
    printf("\nÍndices do minimax: (%d, %d)\n", linhaMinimax, colunaMinimax);

    return 0;
}