#include <stdio.h>
#include <string.h>
#define tam 1000

int main(){
    char nome[tam];
    int tamString=0, ponto=0, numero=0, minusculo=0;

    printf("\nInsira uma String: ");
    fflush(stdin);
    gets(nome);
    
    printf("%s", nome);
    //quantos caracteres
    tamString=strlen(nome);

    //quantos sao de pontuacao
    for(int i=0; i<tamString; i++){
        if(nome[i]=='.' || nome[i]==',' || nome[i]=='?' || nome[i]=='!' || nome[i]==':' || nome[i]==';')
            ponto++;

        if(nome[i]>=48 && nome[i]<=57)
            numero++;

        if(nome[i]>=97 && nome[i]<=122)
            minusculo++;
    }

    printf("\nA string tem %d caracteres", tamString);
    printf("\nQuantidade de pontuacoes %d", ponto);  
    printf("\nQuantidade de numeros %d", numero);  
    printf("\nQuantidade de letras minusculas %d", minusculo); 

    return 0;
}