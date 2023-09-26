#include <stdio.h>

int main(){
    float produto=1, n=0, parar=0;

    while(parar==0){
        printf("\n\nDigite um numero para saber o produto: ");
        //fflush(stdin);
        scanf("%f", &n);
        if(n==0){
            parar=1;
            n=1;
        }
        produto=produto*n;
        
    }

    printf("O produto e %.2f", produto);
    return 0;
}