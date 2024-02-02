#include <stdio.h>

void soma(int matriz[5][7], int vetor[7]) {
    for (int j = 0; j < 7; j++) {
        vetor[j] = 0; 
        for (int i = 0; i < 5; i++) {
            vetor[j] += matriz[i][j];
        }
    }
}

int main() {
    int matriz[5][7];
    int vetor[7];

    printf("Digite os valores para a matriz 5x7:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    soma(matriz, vetor);
    printf("\nSoma das colunas:\n");
    for (int j = 0; j < 7; j++) {
        printf("Coluna %d: %d\n", j + 1, vetor[j]);
    }

    return 0;
}
