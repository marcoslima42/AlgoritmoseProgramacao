#include <stdio.h>
#define tam 5
//incompleto
int main(){
    int zero[tam], i=0, zeros=0;
    
    for(i=0; i<tam; i++)
        zero[i]=0;

    for(i=0; i<tam; i++){
        printf("\nVetor[%d]: ", i+1);;
        scanf("%d", &zero[i]);
        if(zero[i]==0)
            zeros++;
    }
    
    printf("\nCOMPACTANDO VETOR...");
    i=0;
    
    while(zeros!=0){
        for(i=0; i<tam; i++){
            zero[i]=zero[i+1];
            zero[i+1]=0;
        }
        zeros--;
    }
    
    for(i=0; i<tam; i++){
        printf(" %d", zero[i]);
    }
    return 0;
}