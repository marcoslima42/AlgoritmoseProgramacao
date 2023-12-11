#include <stdio.h>

int main(){
    int linhaA, linhaB, colunaA, colunaB;
    
    printf("\n\nMULTIPLICACAO DE MATRIZES");
    do{
        printf("\n\nINSIRA A DIMENSAO DA MATRIZ A: ");
        printf("\n\nLINHAS E COLUNAS: \n");
        scanf("%d %d", &linhaA, &colunaA);

        printf("\n\nINSIRA A DIMENSAO DA MATRIZ B: ");
        printf("\n\nLINHAS E COLUNAS: \n");
        scanf("%d %d", &linhaB, &colunaB);
    }while(colunaA!=linhaB);
    
    int matrizA[linhaA][colunaA], matrizB[linhaB][colunaB], matrizAB[linhaA][colunaB];
    //processamento
    //J de A tem que ser o mesmo que I de B
    int soma=0;
    
    for(int i=0; i<linhaA; i++){
        for(int j=0; j<colunaA; j++){
            printf("\nMATRIZ A[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for(int i=0; i<linhaB; i++){
        for(int j=0; j<colunaB; j++){
            printf("\nMATRIZ B[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for(int i=0; i<linhaA; i++){
        for(int j=0; j<colunaB; j++){
            soma=0;
            for(int k=0; k<colunaA; k++){
                soma+=matrizA[i][k]*matrizB[k][j];
            }
            matrizAB[i][j]=soma;
        }
    }

    for(int i=0; i<linhaA; i++){
        printf("\n\t\t");
            for(int j=0; j<colunaB; j++){
                printf("%2.1d ", matrizAB[i][j]);
            }
    }
    return 0;
}