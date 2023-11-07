#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define tam 100

void repetido(char nome[]){
    int k=0, cont=0;
    char again[tam];

    fflush(stdin);
    for(int i=0; i<tam && nome[i]!='\0'; i++)
        for(int j=1; j<tam-1 && (cont==0 || cont>2); j++)
            if(nome[i]==nome[j]){
                again[k]=nome[i];
                k++;
                cont++;
                if(i==tam-1){
                    again[k]='\0';
                }
            }

    printf("%s", again);
    

}

int main(){
    char nome[tam];
    
    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);

    repetido(nome);

    return 0;
}