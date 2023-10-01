#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ePot(int num, int pot){
    int potencia=0;
    potencia=pow(num, pot);
    printf("\nMEU PATRAO, O RESULTADO DA SUA POTENCIA E %d", potencia);
}

int main()
{
    int num=0, pot=0;
    printf("\nENESIMA POTENCIA");
    printf("\n\nDigite a base: ");
    scanf("%d", &num);
    printf("\n\nDigite expoente: ");
    scanf("%d", &pot);
    ePot(num, pot);

    return 0;
}
