#include <stdio.h>
#define tam 5

void verificar(int matriz[tam][tam], int i, int j){
    for(int linha=0; linha<tam; linha++){
        for(int coluna=0; coluna<tam; coluna++){
            
        }
    }

    if(matriz)
}

int main(){
    int matriz[5][5], valor=0;;
    printf("INSIRA A DISTANCIA ENTRE CIDADES: ");

    for(int i =0; i<tam; i++){
        for(int j=0; j<tam; j++){
            printf("MATRIZ[%d][%d]: ", matriz[i][j]);
            matriz[i][j]=verificar(matriz, i, j);
        }
    }

    return 0;
}