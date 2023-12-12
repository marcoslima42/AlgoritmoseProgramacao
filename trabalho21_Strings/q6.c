#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char entrada[1000];

    printf("Digite uma string: ");
    gets(entrada);

    int inicio = 0;
    int fim = strlen(entrada) - 1;
    int ePalindromo = 1;

    while (inicio < fim) {
        while (!((entrada[inicio] >= 'a' && entrada[inicio] <= 'z') || (entrada[inicio] >= 'A' && entrada[inicio] <= 'Z')) && inicio < fim) {
            inicio++;
        }
        while (!((entrada[fim] >= 'a' && entrada[fim] <= 'z') || (entrada[fim] >= 'A' && entrada[fim] <= 'Z')) && fim > inicio) {
            fim--;
        }

        if (tolower(entrada[inicio]) != tolower(entrada[fim])) {
            ePalindromo = 0;
            break;
        }

        inicio++;
        fim--;
    }

    if (ePalindromo) {
        printf("Eh um palíndromo!\n");
    } else {
        printf("Não eh um palíndromo.\n");
    }

    return 0;
}