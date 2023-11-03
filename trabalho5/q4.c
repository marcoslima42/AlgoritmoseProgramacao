#include <stdio.h>
#define tam 5

int main(){
    int zero[tam], i=0, j=0, aux=0, aux2=0;
    
    for(i=0; i<tam; i++){
        if(zero[i]==0){
            aux=zero[i];
            zero[i]=zero[i+1];
            zero[i+1]=aux;
        }
    }
    
    for(i=0; i<tam; i++){
        printf(" %d");
    }
    
    return 0;
}