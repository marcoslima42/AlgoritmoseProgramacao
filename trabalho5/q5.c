#include <stdio.h>
#define tam 16

int main(){
    int vetor[tam], i=0, aux=0;

    for(i=0; i<tam; i++){
        printf("Vetor[%d]: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<(tam/2); i++){
        aux=vetor[i];
        vetor[i]=vetor[i+8];
        vetor[i+8]=aux;
    }

    printf("\n");
    for(i=0; i<(tam); i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}