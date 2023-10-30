#include <stdio.h>
#define tam 10

int main(){
    int num[tam], i, somaPar=0, produtoImpar=1;

    printf("\nINSIRA UMA LISTA DE NUMEROS\n");

    for(i=0; i<tam; i++){
        printf("Numero[%d]: ", i);
        scanf("%d", &num[i]);
    }

    for(i=0; i<tam; i++){
        if((i%2)==0){
            somaPar+=i;
        }
        else{
            produtoImpar*=i;
        }
    }

    printf("\n\nNUMEROS LIDOS: ");
    for(i=0; i<tam; i++)
        printf("%d ", num[i]);

    printf("\n\nSOMA DOS ELEMENTOS DE INDICE PAR: %d", somaPar);
    printf("\n\nPRODUTO DOS ELEMENTOS DE INDICE IMPAR: %d", produtoImpar);

    return 0;
}