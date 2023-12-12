#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
    char string[100000];
    int tam=0, j=0;
    
    printf("Entre com frase: ");
    gets(string);
    
    //funcao para descobrir o tamanho da funcao 
    tam = strlen(string);

    for (int i = 0; i < tam; i++) {
        if (!(string[i] == ' ' && string[i+1] == ' ')){
            string[j++] = string[i];
        }
    }
    string[j] = '\0';

    printf("Com reducao dos espacos: %s\n", string);

    return 0;
}