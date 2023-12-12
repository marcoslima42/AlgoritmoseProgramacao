#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 100

int main(){
    char nome[tam];
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    int tamTerminador=0;
    for(int i=0; nome[i]!='\0'; i++)
        tamTerminador++;

    printf("\n\n");
    for(int i=tamTerminador; i>=0; i--)
        printf("%c", nome[i]);

    return 0;
}