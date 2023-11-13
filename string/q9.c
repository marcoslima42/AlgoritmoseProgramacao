#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 100

void repetido(char nome[]){
    int tamString=0, vaiRepetir=0, jaRepetiu=0;

    tamString = strlen(nome);

    // "Ana Banana"
    // resposta: 'n', 'a' 

    for(int i=0; i<=tamString-1; i++){
        vaiRepetir=jaRepetiu=0;
        for(int j=i+1; j<tamString; j++){
            if(nome[i]==nome[j])
                vaiRepetir=1;
        }
        for(int j=0; j<i; j++){
            if(nome[i]==nome[j])
                jaRepetiu=1;
        }
        
        if(vaiRepetir && !jaRepetiu)
            printf("\n ' %c ' ", nome[i]);
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