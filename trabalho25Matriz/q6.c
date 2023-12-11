#include <stdio.h>
#define tam 3

int main(){
    int matriz[tam][tam], somaPrincipal=0, somaSecundaria=0;
    
    for(int i=0; i<tam; i++)
        for(int j=0; j<tam; j++){
            printf("\nMATRIZ[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
        }

    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(i==j)
                somaPrincipal+=matriz[i][j];
            if(i+j+1==tam)
                somaSecundaria+=matriz[i][j];
        }
    }

    printf("\nSoma da diagonal secundaria %d", somaSecundaria);
    printf("\nSoma da diagonal Principal %d", somaPrincipal);
    return 0;
}