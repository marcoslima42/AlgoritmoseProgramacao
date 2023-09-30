#include <stdio.h>
#include <stdlib.h>

int dobro(int num){
    num*=2;
    return num;
}
int main()
{
    int num=0;
    printf("\nFUNCAO DOBRO");
    printf("\nDigite o numero: ");
    scanf("%d", &num);
    num=dobro(num);
    printf("O dobro do seu numero e %d", num);

    return 0;
}
