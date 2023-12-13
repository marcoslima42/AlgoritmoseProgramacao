#include <stdio.h>
#define tam 5

void percorrerVetor(int x){
    int a[tam], b[tam], c[tam], i=0, imprimir=1;
    for(i=0; i<tam; i++){
        if(x==1){
            printf("\nVetor A[%d]: ", i+1);
            scanf("%d", &a[i]);
        }
        else if(x==2){
            printf("\nVetor B[%d]: ", i+1);
            scanf("%d", &b[i]);
            c[i]=a[i]+b[i];
        }
        else{
            if(imprimir==1){
                printf("\nVetor C: ");
                imprimir=0;
            }
            printf(" %d", c[i]);
        }
    }
}

int main(){
    int x=1;
    printf("\n\nSOMA DE VETORES");
    
    for(int i=0; i<3; i++){
        percorrerVetor(x);
        x++;
    }
    return 0;
}