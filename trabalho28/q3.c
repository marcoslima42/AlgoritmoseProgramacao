#include <stdio.h>

#define tam 5

int main() {
    int matriz[tam][tam];
    int matrizTransposta[tam][tam];

    // Solicitar valores para a matriz
    printf("Digite os valores para a matriz %dx%d:\n", tam, tam);
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular matriz transposta
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            matrizTransposta[i][j] = matriz[j][i];
        }
    }

    // Imprimir matriz transposta
    printf("\nMatriz Transposta:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%d\t", matrizTransposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
