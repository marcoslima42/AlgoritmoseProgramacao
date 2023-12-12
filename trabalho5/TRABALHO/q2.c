#include <stdio.h>
#define tam 20

int main(){
    int n[tam], i=0, entrada=1, aux=0, mudar=0;

    //entrada do vetor
    for(i=0; i<tam; i++){
        if(entrada==1){
            printf("\n\nVetor N[%d]: ", i+1);
            scanf("%d", &n[i]);
            if(i==tam-1){
                i=-1;
                entrada=0;
            }
        }
        else{
            if(i==0)
                printf("\n\n\n Vetor N: ");
            printf(" %d", n[i]);
        }
    }

    //troca das posicoes
    mudar=tam-1;
    for(i=0; i<tam/2; i++){
        aux=n[i];
        n[i]=n[mudar];
        n[mudar]=aux;
        mudar--;
    }

    printf("\n\n");
    for(i=0; i<tam; i++)
        printf("  %d", n[i]);

    return 0;
}