#include<stdio.h>
#define tam 5

int main()
{
    int i=0, a[tam], b[tam], c[tam];
    
    printf("Entre com os valores do vetor A");
    
    for(i=0; i<tam; i++){
        a[i]=0;
        b[i]=0;
        c[i]=0;
    }
    
    for(i=0; i<tam; i++){
        printf("\nNumero[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    for(i=0; i<tam; i++){
        if(a[i]%2==0)
            b[i]=a[i];
        else
            c[i]=a[i];
    }
    
    printf("\n\nVetor A: ");
    for(i=0; i<tam; i++){
        printf("%d ", a[i]);
    }
    
    printf("\n\nVetor B: ");
    for(i=0; i<tam; i++){
        if(b[i]!=0)
            printf("%d ", b[i]);
    }
    
    
    printf("\n\nVetor C: ");
    for(i=0; i<tam; i++){
        if(c[i]!=0)
            printf("%d ", c[i]);
    }
    
    return 0;
}