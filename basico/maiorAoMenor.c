#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1=0, n2=0, n3=0, maior=0, menor=0, process=0;
    scanf("%d", &n1);

    //processamento
    if (n1<=0){
        printf("\n\nNumero Invalido");
        printf("\n\nPROGRAMA FINALIZADO");
    }
    else{
        scanf("%d", &n2);
        if(n2<=0){
            printf("\n\nNumero Invalido");
            printf("\n\nPROGRAMA FINALIZADO");
        }
        else{
            scanf("%d", &n3);
            if(n3<=0){
                printf("\n\nNumero Invalido");
                printf("\n\nPROGRAMA FINALIZADO");
            }
            else{
                process=1;
            }
        }
    }

    if(process==1){
        maior=n1;
        if(n2>maior)
            maior=n2;
        if(n3>maior)
            maior=n3;

        menor=n1;
        if(n2<menor)
            menor=n2;
        if(n3<menor)
            menor=n3;

        //output
        printf("\n%d,", maior);

        if(maior==n1 || maior==n2 || maior==n3)
            printf(" %d,", maior);
        else if(menor==n1 || menor==n2 || menor==n3)
            printf(" %d,", menor);
        else
            if(maior>n2 && menor<n2)
                printf(" %d,", n1);
            else if(maior>n2 && menor<n2)
                printf(" %d,", n2);
            else if(maior>n3 && menor<n3)
                printf(" %d,", n3);

        printf(" %d.", menor);
    }
    return 0;
}
