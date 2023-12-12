#include <stdio.h>
#define tam 5

int main(){
    int vetor[tam], i;

    for(i=0; i<tam; i++){
        printf("\nVetor[%d]: ", i+1);;
        scanf("%d", &vetor[i]);
    }
    int aux=0;
    for(i=0; i<tam; i++){
        for(int j=0; j<tam-1; j++){
            if(vetor[j]<vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }

    for(i=0; i<tam; i++){
        printf("\n %d", vetor[i]);
    }
    return 0;
}