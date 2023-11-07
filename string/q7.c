#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 1000

int novamente(char nome[], char caracter){
    int qtd=0;
    // int size = strlen(nome);
    // nome[i]='\0';
    for(int i=0; i < tam && nome[i]!='\0'; i++)
        if(nome[i]==caracter)
            qtd++;

    return qtd;
}

int main(){
    char nome[tam], caracter=' ';
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    printf("\nInsira o caracter que deseja ver a quantidade de vezes em que repete o mesmo: ");
    fflush(stdin);
    scanf("%c", &caracter);

    printf("%d", novamente(nome, caracter));

    return 0;
}