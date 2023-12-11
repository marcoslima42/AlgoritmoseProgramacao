#include <stdio.h>

#include <stdio.h>

int contarAcertos(int gabarito[], int resposta[]) {
    int acertos = 0;
    for (int i = 0; i < 13; i++) {
        if (gabarito[i] == resposta[i]) {
            acertos++;
        }
    }
    return acertos;
}

int main() {
    int gabarito[13];
    printf("Digite o gabarito:\n");
    for (int i = 0; i < 13; i++) {
        scanf("%d", &gabarito[i]);
    }

    int numApostadores;
    printf("Digite o numero de apostadores: ");
    scanf("%d", &numApostadores);

    for (int apostador = 1; apostador <= numApostadores; apostador++) {
        int numCartao;
        printf("Apostador %d: Digite o numero do cartao: ", apostador);
        scanf("%d", &numCartao);

        int resposta[13];
        printf("Digite as respostas (1, 2 ou 3) do apostador %d separado por espacos:\n", apostador);
        for (int i = 0; i < 13; i++) {
            scanf("%d", &resposta[i]);
        }

        int acertos = contarAcertos(gabarito, resposta);

        printf("Apostador %d - Cartão %d: Acertos = %d\n", apostador, numCartao, acertos);

        if (acertos == 13) {
            printf("GANHADOR, PARABENS!\n");
        }
    }

    return 0;
}

