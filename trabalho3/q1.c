#include <stdio.h>
#include <stdlib.h>

float fatorial(float fator){
    int fact=1;
    for(int i=1;i<=fator;i++)
        fact=fact*i;
    return fact;
}

float r(float num, float fator){
    float resultado=0;
    int i=1;
    for(i; i<=fator; i++)
        resultado+=(i/fatorial(num));
    return resultado;
}

float s(float num, float fator){
    float resultado=0;
    int i=1;
    int j=2;
    for(i; i<=fator; i++){
        resultado+=((num*j)/fatorial(j));
        j++;
    }
    resultado+=num;
    return resultado;
}

float input(){
    float in=0;
    fflush(stdin);
    scanf("%f", &in);
    return in;
}

int main()
{
    float num=0, fator=0;

    num=input();
    fator=input();

    printf("\n\nO valor de S e %.2f", s(num, fator));
    printf("\n\nO valor de R e %.2f", r(num, fator));



    return 0;
}
