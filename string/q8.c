#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 100

void imprimir(char nome[], char letra){
    for(int i=0; i < tam && nome[i]!='\0'; i++)
        if(nome[i]!=letra)
            printf("%c", nome[i]);

}

int main(){
    char nome[tam], letra=' ';
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    printf("\nInsira uma letra: ");
    fflush(stdin);
    scanf("%c", &letra);

    imprimir(nome, letra);

    return 0;
}