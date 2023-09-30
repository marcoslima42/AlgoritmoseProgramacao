#include <stdio.h>
#include <stdlib.h>

void positivo(int num){
    if(num>0)
        printf("\n\nE POSITIVO!");
    else
        printf("\n\nE NEGATIVO!");
}
int main()
{
    int num=0;
    printf("\nVERIFIQUE SE O NUMERO E POSITIVO OU NAO");
    scanf("%d", &num);
    positivo(num);

    return 0;
}
