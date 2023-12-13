#include <stdio.h>
#define tam 10

int main(){
    int vetor[tam], i;

    for(i=0; i<tam; i++){
        printf("\nVetor[%d]: ", i+1);;
        scanf("%d", &vetor[i]);
    }
    int media=0;
    for(i=0; i<tam; i++){
        media+=vetor[i];
    }
    media/=tam;

    for(i=0; i<tam; i++){
        if(media==vetor[i]){
            printf("\n a media %d e igual ao elemento na posicao %d", media, i);
        }
    }
    return 0;
}