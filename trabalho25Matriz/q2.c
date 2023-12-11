#include <stdio.h>
#include <windows.h>
#define linha 3
#define coluna 3

void imprimirMatriz (int matriz[linha][coluna]){
    for(int i=0; i<linha; i++){
        printf("\n\t\t");
        for(int j=0; j<coluna; j++){
            printf("%2.1d ", matriz[i][j]);
        }
    }
}

int main(){
    int matriz[linha][coluna];

    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            printf("\nMATRIZ[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    system("cls");
    printf("\n\tMatriz Original");
    imprimirMatriz(matriz);
    
    printf("\n\tMatriz Alterada");
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            if(matriz[i][j]<0 && (i!=j && i+j+1!=linha))
                matriz[i][j]=0;      
        }
    }

    imprimirMatriz(matriz);
    return 0;
}