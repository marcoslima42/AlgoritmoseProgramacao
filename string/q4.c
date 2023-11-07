#include <stdio.h>
#include <string.h>
#define tam 1000

int main(){
    char nome[tam];
    int tamanho = 0;
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    tamanho = strlen(nome);

    printf("%d",tamanho);

    return 0;
}