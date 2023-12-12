//q7

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string1[1000], string2[1000];
    int pos, tamString1, tamString;

    printf("Primeira frase: ");
    gets(string1);

    printf("Segunda frase: ");
    gets(string2);

    printf("posicao: ");
    scanf("%d", &pos);

    tamString1 = strlen(string1);
    tamString = strlen(string2);

    if (pos > tamString1) {
        pos = tamString1;
    }

    for (int i = tamString1; i >= pos; i--) {
        string1[i + tamString] = string1[i];
    }

    for (int i = 0; i < tamString; i++) {
        string1[pos + i] = string2[i];
    }

    printf("Retorno apos a modificacao: %s\n", string1);

    return 0;
}