#include <stdio.h>

int main(){
    float numerador=1, denominador=0, soma=0;

    for(denominador=1; denominador<=4; denominador++){
        soma+=(numerador/denominador);
        numerador+=2;
    }

    printf("A SOMA TEM COMO RESULTADO %.2f", soma);

    return 0;
}