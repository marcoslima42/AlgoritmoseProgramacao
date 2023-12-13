#include <stdio.h>
#define tam 8

int main(){
    int vetor[tam], i;

    for(i=0; i<tam; i++){
        printf("\nVetor[%d]: ", i+1);;
        scanf("%d", &vetor[i]);
    }

    int posX=0;
    printf("\nposicao x: ");
    do{
        scanf("%d", &posX);
        if(posX>(tam-1) || posX<0)
            printf("\nValor invalido");
    }while(posX>(tam-1) || posX<0);
    
    int posY=0;
    printf("\nposicao y: ");
    do{
        scanf("%d", &posY);
        if(posY>(tam-1) || posY<0)
            printf("\nValor invalido");
    }while(posY>(tam-1) || posY<0);

    printf("\n\nA soma dos elementos das posicoes escolhidas e %d", vetor[posX]+vetor[posY]);

    return 0;
}