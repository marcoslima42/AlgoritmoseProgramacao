#include <stdio.h>
#include <string.h>
#define tam 1000

int main(){
    char nome[tam];

    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);
    
    printf("%s", nome);
    
    return 0;
}