#include <stdio.h>
#define tam 5
float media(float *vetor){
    int notaMedia=0;
    for(int i=0; i<tam; i++){
        notaMedia+=vetor[i];
    }
    notaMedia/=tam;
    return notaMedia;
}

int main(){
    float vetor[tam];
    int i;
    
    for(i=0; i<tam; i++){
        printf("\nVetor[%d]: ", i+1);;
        scanf("%f", &vetor[i]);
    }

    printf("\n\n Nota media do aluno %.2f ", media(vetor));

    return 0;
}