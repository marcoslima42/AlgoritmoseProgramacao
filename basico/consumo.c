#include <stdlib.h>
#include <stdio.h>

int main(){
    float distancia, combustivel, consumo;
    distancia=combustivel=consumo=0;

    printf("\nDIGITE A DISTANCIA PERCORRIDA E A QUANTIDADE EM LITROS DE COMBUSTIVEL CONSUMIDA: ");
    scanf("%f %f", &distancia, &combustivel);

    consumo=distancia/combustivel;
    printf("O consumo foi de %.2f km/l", consumo);

    return 0;
}
