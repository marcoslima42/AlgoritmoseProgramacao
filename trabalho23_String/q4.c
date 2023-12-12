#include <stdio.h>
#include <string.h>
#define tam 10
int main(){
    int num[tam];

    printf("\nEntre com os numeros: ");
    
    for(int i=0; i<tam; i++)
        scanf("%d", &num[i]);


    for(int i=0; i<tam; i++){
        if(num[i]==1)
            printf("a");
        else if(num[i]==3)
            printf("c");
        else if(num[i]==4)
            printf("d");
        else if(num[i]==12)
            printf("m");
        else if(num[i]==14)
            printf("o");
        else if(num[i]==15)
            printf("p");
        else if(num[i]==17)
            printf("r");
        else if(num[i]==19)
            printf("t");
        else if(num[i]==20)
            printf("u");
    }
    return 0;
}