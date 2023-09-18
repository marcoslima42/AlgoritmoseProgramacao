#include <stdio.h>


int main(){
    float real=0, maior=0, menor=0;
    int cont=1, primeiraVez=1;

    printf("\nINSIRA 15 NUMEROS REAIS E DESCUBRA O MAIOR E MENOR\n");
    for(int i=1; i<=15; i++){
        printf("\nNumero %d: ", cont);
        cont++;
        scanf("%f", &real);
    
    if(primeiraVez==1){
        maior=menor=real;
        primeiraVez=0;
    }

    if(real>maior)
        maior=real;
    if(real<menor)
        menor=real;
    }


    printf("\nO maior numero e o %.2f", maior);
    printf("\nO menor numero e o %.2f", menor);


    return 0;
}
