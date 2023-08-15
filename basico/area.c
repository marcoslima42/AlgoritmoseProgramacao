#include <stdio.h>
#include <stdlib.h>

int main()
{
    int area, largura, comprimento;
    area=largura=comprimento=0;

    printf("INSIRA LARGURA E COMPRIMENTO DO RETANGULO: ");
    scanf("%d %d", &largura, &comprimento);
    area=largura*comprimento;

    printf("\nAREA = %d", area);

    return 0;
}
