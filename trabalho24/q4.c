#include <stdio.h>
#include <string.h>
#define tam 3

int main(){
    float peso[tam], menor=0, maior=0;
    int id1=0, id2=0;

    for(int i=0; i<tam; i++){
        printf("\nBOI[%d]: ", i+1);
        fflush(stdin);
        scanf("%f", &peso[i]);
        if(peso[i]==0)
            break;
    }

    for(int i=0; i<tam; i++){
        printf("\n Indetificador %d, peso: %.2f ", i, peso[i]);
    }

    maior=peso[0];
    menor=peso[0];

    for(int i=0; i<tam; i++){
        if(maior<peso[i]){
            maior=peso[i];
            id1=i;
        }

        if(menor>peso[i]){
            menor=peso[i];
            id2=i;
        }
    }
    

    printf("\nIdentificador do BOI mais Gordo: %d", id1);
    printf("\nIdentificador do BOi mais Magro %d", id2);
    
    return 0;
}