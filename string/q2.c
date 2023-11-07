#include <stdio.h>
#include <string.h>
#define tam 1000

int main(){
    char nome[tam];
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);
    //if(nome[0]=='a' || nome[0]=='A')
    //    printf("%s", nome);
    if(nome[0]==65 || nome[0]==97)
        printf("%s", nome);
    return 0;
}