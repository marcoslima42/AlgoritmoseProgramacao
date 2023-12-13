#include <stdio.h>
#define tam 10

int main(){
    int matriz[tam][tam];

    for(int i=0; i<tam; i++)
        for(int j=0; j<tam; j++){
            printf("MATRIZ[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    
    for(int i=0; i<tam; i++)
        for(int j=0; j<tam; j++){
            if(i!=j)
                printf("%d ", matriz[i][j]);
        }

    return 0; 
}