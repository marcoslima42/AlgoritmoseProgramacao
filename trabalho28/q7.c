#include <stdio.h>

int primo(int num) {
    if (num < 2) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int qtdPrimo(int matriz[7][7]) {
    int contadorPrimos = 0;

    for (int i = 0; i < 7; i++) {
        if (primo(matriz[i][i])) {
            contadorPrimos++;
        }
    }

    return contadorPrimos;
}

int main() {
    int matriz[7][7];
    printf("Digite os valores para a matriz 7x7:\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    int primosNaDiagonal = qtdPrimo(matriz);

    printf("\nQuantidade de primos na diagonal principal: %d\n", primosNaDiagonal);

    return 0;
}
