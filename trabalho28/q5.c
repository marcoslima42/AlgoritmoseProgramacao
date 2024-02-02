#include <stdio.h>

void maior(float matriz[5][6], float vetorM[5]) {
    for (int i = 0; i < 5; i++) {
        float maiorValor = matriz[i][0];
        for (int j = 1; j < 6; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
            }
        }
        vetorM[i] = maiorValor;
    }
}

int main() {
    float matriz[5][6];
    float vetorM[5];

    printf("Digite os valores para a matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    maior(matriz, vetorM);

    printf("\nMaiores valores por linha:\n");
    for (int i = 0; i < 5; i++) {
        printf("Linha %d: %.2f\n", i + 1, vetorM[i]);
    }

    return 0;
}
