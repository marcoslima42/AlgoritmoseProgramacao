#include <stdio.h>

void saida(float km, float litros){
    float consumo=0;
    scanf("%f %f", &km, &litros);
    consumo=litros/km;
    if(consumo <8)
        printf("\nVENDA O CARRO");
    else if(consumo==8 || consumo<=12)
        printf("\nECONOMICO!");
    else if(consumo>12)
        printf("SUPER ECONOMICO!");
}

int main(){
    float km=0, litros=0;

    printf("Progama de Consumo Km/l\n");
    saida(km, litros);
}