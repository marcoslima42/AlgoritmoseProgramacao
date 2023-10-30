#include <stdio.h>
#define tam 10

int main(){
    int num[tam], i=0, neg=0, pos=0;

    printf("\nINSIRA UMA LISTA DE NUMEROS\n\n");
    for(i=0; i<tam; i++){
        printf("\nNumero na posicao[%d]: ", i);
        scanf("%d", &num[i]);
    }

    printf("\n\nNumeros Lidos: ");
    for(i=0; i<tam; i++)
        printf("%d ", num[i]);
    
    printf("\n\nIndices dos numeros negativos: ");
    for(i=0; i<tam; i++){
        if(num[i]<0){
            printf("%d ", i);
            neg++;
        }
    }
        if(neg==0)
            printf("\nNAO HOUVE ENTRADAS DE NUMEROS NEGATIVOS!");

    printf("\n\nIndices dos numeros positivos: ");
    for(i=0; i<tam; i++){
        if(num[i]>0){
            printf("%d ", i);
            pos++;
        }
    }
        if(pos==0)
            printf("\nNAO HOUVE ENTRADAS DE NUMEROS POSITIVOS!");

    return 0;
}