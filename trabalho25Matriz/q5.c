#include <stdio.h>
#define tam 5
int main() {
    
    int matriz[tam][tam];

    // Leitura da matriz M
    printf("Digite os elementos da matriz M(5,5):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    
    int somaLinha4 = 0, somaColuna2 = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, somaTotal = 0;

    for (int i = 0; i < 5; i++) {
        // Soma da linha 4
        somaLinha4 += matriz[3][i];

        // Soma da coluna 2
        somaColuna2 += matriz[i][1];

        // Soma da diagonal principal
        somaDiagonalPrincipal += matriz[i][i];

        // Soma da diagonal secundária
        somaDiagonalSecundaria += matriz[i][4 - i];

        // Soma total dos elementos da matriz
        for (int j = 0; j < 5; j++) {
            somaTotal += matriz[i][j];
        }
    }

    
    printf("\nSoma da linha 4: %d\n", somaLinha4);
    printf("Soma da coluna 2: %d\n", somaColuna2);
    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria);
    printf("Soma total dos elementos da matriz: %d\n", somaTotal);

    printf("\nMatriz M(5,5) e suas somas:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
