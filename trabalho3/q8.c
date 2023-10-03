#include <stdio.h>
#include <stdlib.h>

int positivo(int num){
    int flag=0;
    if(num>0)
        flag=1;
    else if(num<0)
        flag=-1;
    else
        flag=0;
    return flag;
}
int main()
{
    int num=0;
    printf("\nVERIFIQUE SE O NUMERO E POSITIVO OU NAO");
    scanf("%d", &num);
    num=positivo(num);

    printf("%d", num);
    return 0;
}
