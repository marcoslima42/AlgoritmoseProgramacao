#include <stdlib.h>
#include <stdio.h>

int main(){
    int num=0;
    printf("\nDIGITE UM NUMERO: ");
    scanf("%d",&num);

    printf("\nSUCESSOR '%d'", num+1);
    printf("\nANTECESSOR '%d'", num-1);

    return 0;
}
