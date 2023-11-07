#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 1000

void maiusculo(char nome[], char up[]){
    for(int i=0; i<tam; i++)
        up[i]=toupper(nome[i]);
}

int main(){
    char nome[tam], up[tam];
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    maiusculo(nome, up);

    printf("%s", up);
    return 0;
}