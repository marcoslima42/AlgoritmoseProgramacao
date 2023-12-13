#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 100

int main(){ 
    char nome[tam], nome2[tam];
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    int tamTerminador=0;
    for(int i=0; nome[i]!='\0'; i++)
        tamTerminador++;

    printf("\nInsira uma String 2: ");
    fflush(stdin);
    gets(nome2);

    int tamTerminador2=0;
    for(int i=0; nome2[i]!='\0'; i++)
        tamTerminador2++;

    printf("\n\n");
    for(int i=tamTerminador; i>=0; i--)
        if(nome[i]=='A' || nome[i]=='a')
            printf("%c", 42);
        else
            printf("%c", nome[i]);
    
    printf("\n\n");
    for(int i=tamTerminador2; i>=0; i--)
        if(nome2[i]=='A' || nome2[i]=='a')
            printf("%c", 42);
        else
            printf("%c", nome2[i]);

    return 0;
}