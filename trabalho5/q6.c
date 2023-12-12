#include <stdio.h>
#define tam 10

int main(){
    double vetor[tam];
    int i;

    for(i=0; i<tam; i++){
        printf("\nVetor[%d]: ", i+1);;
        scanf("%lf", &vetor[i]);
    }

    double aux=0;
    for(i=0; i<tam; i++){
        for(int j=0; j<tam-1; j++){
            if(vetor[j]>vetor[j+1]){
                aux=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=aux;
            }
        }
    }
    
    int qtd=1;
    printf("Os tres menores: ");
    for(i=0; i<tam; i++){
        if(qtd<=3)
            printf("%.2lf ", vetor[i]);
        qtd++;
    }

    return 0;
}