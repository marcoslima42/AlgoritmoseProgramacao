// Online C compiler to run C program online
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

        printf("\n\n");
        for(int i=0; i<20; i++){
            printf("%c", 219);
        }

        //output
        printf("\n%d,", maior);
        if(maior>n1 && menor<=n1)
            printf(" %dsadsd,", n1);
        else if(maior>n2 && menor<=n2)
            printf(" %d,", n2);
        else
            printf(" %d,fgjhg", n3);

        printf(" %d.", menor);

        //printf("\n\ndebugui %d,", n1);
        //printf("debugui %d,", n2);
        //printf("debugui %d", n3);
    }




    return 0;
}
