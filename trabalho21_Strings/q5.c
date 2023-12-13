#include <stdio.h>

int main() {
    char nome[1000];
    int i = 0; 

    printf("Digite nome: ");
    gets(nome);

    while (nome[i]!='\0') {
        while (nome[i] == ' ') {//se houver espacos
            i++;
        }

        if (nome[i] != '\0') {//inicio do nome
            printf("%c. ", nome[i]);
        }

        while (nome[i] != ' ' && nome[i] != '\0') {//proximo espaco
            i++;
        }
    }
    //sem solucao do DE ou DA

    return 0;
}