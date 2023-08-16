#include <stdlib.h>
#include <stdio.h>

int main(){
    float capital=0, taxa=0, tempo=0, juros=0;
    printf("\nJUROS SIMPLES\n");
    printf("\nDIGITE O VALOR DO CAPITAL E A TAXA DE JUROS(%% MENSAL): ");
    scanf("%f %f", &capital, &taxa);
    printf("\n\nINSIRA O TEMPO(MENSAL): ");
    scanf("%f", &tempo);

    taxa = taxa/100;
    juros=capital*taxa*tempo;

    printf("\n\n\nO VALOR INICIAL E DE %.2f", capital);
    printf("\nO VALOR DO JUROS E DE %.2f", juros);
    printf("\nO VALOR TOTAL COM O REAJUSTE(JUROS) E DE %.2f", capital+juros);

    return 0;
}
