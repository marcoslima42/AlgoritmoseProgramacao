#include <stdio.h>
#define tam 50

int main(){
    int zero[tam], compaq[tam], i=0;
    
    for(i=0; i<tam; i++){
        zero[i]=0;
        compaq[i]=0;
    }

    for(i=0; i<tam; i++){
        printf("\nVetor[%d]: ", i+1);;
        scanf("%d", &zero[i]);
    }
    
    int j=0;
    printf("\nCOMPACTANDO VETOR...");
    for(i=0; i<tam; i++){        
        if(zero[i]!=0){
            compaq[j]=zero[i];
            j++;
        }
    }

    for(i=0; i<tam; i++){
        printf(" %d", compaq[i]);
    }
    return 0;
}