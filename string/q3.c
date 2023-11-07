#include <stdio.h>
#include <string.h>
#define tam 1000

int main(){
    char nome[tam];
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    for(int i=0; i<4; i++)
        printf("%c", nome[i]);

    return 0;
}