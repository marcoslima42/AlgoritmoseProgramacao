#include <stdio.h>
#include <stdlib.h>

void qtdDias(int ano, int mes){
    int resultado=0, biss=0;
    mes*=30;
    resultado=mes+(ano*365);
    printf("Existe ano bissexto no seu intervalo de tempo, se sim digite quantos: ");
    fflush(stdin);
    scanf("%d", &biss);
    printf("A quantidade total de dias e %d", resultado+biss);
}

int main()
{
    int mes=0, ano=0;
    printf("\nDigite a quantidade de anos: ");
    fflush(stdin);
    scanf("%d", &ano);
    printf("\nDigite a quantidade de meses: ");
    fflush(stdin);
    scanf("%d", &mes);

    qtdDias(ano, mes);

    return 0;
}