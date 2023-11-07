#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 1000

void minusculo(char nome[], char down[]){
    for(int i=0; i<tam; i++)
        down[i]=tolower(nome[i]);
}

int main(){
    char nome[tam], down[tam];
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    minusculo(nome, down);

    printf("%s", down);
    return 0;
}