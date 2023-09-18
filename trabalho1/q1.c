#include <stdio.h>

int main(){
    float real=0, maior=0, menor=0;
    int cont=1;

    printf("\nINSIRA 15 NUMEROS REAIS E DESCUBRA O MAIOR E MENOR\n\n");
    for(int i=0; i<=15; i++){
        printf("\n\nNumero %d: ", cont);
        cont++;
        scanf("%f", &real);
        if(real>maior)
            maior=real;
        if(real<menor)
            menor=real;
    }

    printf("\n\nO maior numero e o %.2f", real);
    printf("\n\nO menor numero e o %.2f", real);

    return 0;    
}