#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 100

void repetido(char nome[]){
    int tamString=0;

    tamString = strlen(nome);

    // "Ana Banana"
    // resposta: 'n', 'a' 

    for(int i=0; i<=tamString; i++){
        //n[i]==n[i+1]? printf n[i]
    }


}

int main(){
    char nome[tam];
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    repetido(nome);

    return 0;
}