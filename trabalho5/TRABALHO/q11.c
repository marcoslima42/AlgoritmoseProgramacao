#include <stdio.h>

int main() {
    int X[15], G[7], Inter[15];
    printf("\nENTRE COM O VALORES DO VETOR X: ");
    for (int i = 0; i < 15; i++) {
    scanf("%d", &X[i]);
    }
    printf("\nENTRE COM O VALORES DO VETOR G:");
    for (int i = 0; i < 7; i++) {
    scanf("%d", &G[i]);
    }
    int tamInter = 0;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 7; j++) {
            if (X[i] == G[j]) {
                int again = 0;
                    for (int k = 0; k < tamInter; k++) {
                        if (X[i] == Inter[k]) {
                            again = 1;
                            break;
                        }
                    }
                    if (!again) {
                        Inter[tamInter] = X[i];
                        tamInter++;
                    }
            }
        }
    }

    printf("\n\nINTERSECCAO X e G:\n");
    for (int i = 0; i < tamInter; i++) {
        printf("%d ", Inter[i]);
    }
    return 0;
}