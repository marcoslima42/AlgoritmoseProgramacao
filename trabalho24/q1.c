#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define tam 5

void elevarCubo(int cubo[]){
    for(int i=0; i<tam; i++){
        cubo[i]=cubo[i]*cubo[i]*cubo[i];
        printf("%d ", cubo[i]);
    }
}

int main(){
    int numero[tam], cubo[tam];
    
    for(int i=0; i<tam; i++){
        printf("Vetor[%d]: ", i+1);
        fflush(stdin);
        scanf("%d", &numero[i]);
        cubo[i]=numero[i];
    }

    printf("\n\n");
    elevarCubo(cubo);

    return 0;
}
