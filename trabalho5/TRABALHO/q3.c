#include <stdio.h>
#define tam 40
int main(){
    int vetor[tam], i=0, pares=0;

    for(i=0; i<tam; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor: ");
    for(i=0; i<tam; i++){
        if(pares==0){
            printf(" %d", vetor[i]);
            if(i==tam-1){
                pares=1;
                i=0;
            }
        }
        else{
            if(pares==1)
                printf("\nNUMEROS PARES:");
            if(vetor[i]%2==0)
                printf(" %d", vetor[i]);
            pares++;
        }
    }
    return 0;
}