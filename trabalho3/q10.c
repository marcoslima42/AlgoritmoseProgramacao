#include <stdio.h>
#include <stdlib.h>

void power(int base, int expoente){
    int produto=base;
    for(int i=1; i<=expoente; i++){
        produto=*base;
    }
    printf("A sua potencia e %d", resultado);
}

int main()
{
    int base=0, expoente=0;
    printf("\nDigite sua base: ");
    scanf("%d", &base);
    printf("\nDigite seu expoente: ");
    scanf("%d", &expoente);
    power(base, expoente);

    return 0;

}
