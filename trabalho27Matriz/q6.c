#include <stdio.h>

int main(){
    int matriz[61][10];

    for(int i=0; i<61; i++)
        for(int j=0; j<10; j++){
            printf("MATRIZ[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    
    int somaColuna=0, prox=0;
    for(int coluna=0; coluna<10; coluna++){
        somaColuna=0;
        for(int linha=0; linha<60; linha++)
            somaColuna+=matriz[linha][coluna];
        matriz[60][prox]=somaColuna;
        prox++;
    }

    for(int i=0; i<3; i++){
        printf("\n\t\t");
        for(int j=0; j<2; j++){
            printf("%d ", matriz[i][j]);
        }
    }

    return 0;
}