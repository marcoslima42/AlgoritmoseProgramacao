#include <stdio.h>
#include <windows.h>
#define tam 3

void imprimirMatriz (int matrizAB[tam][tam]){
    for(int i=0; i<tam; i++){
        printf("\n\t\t");
        for(int j=0; j<tam; j++){
            printf("%2.1d ", matrizAB[i][j]);
        }
    }
}

void inputMatriz(int matrizA[tam][tam], int matrizB[tam][tam]){
    int flag=0;
    char letra='A';
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            flag++;
            printf("MATRIZ %c[%d][%d]: ", letra, i, j);
            if(letra=='A')
                scanf("%d", &matrizA[i][j]);
            else
                scanf("%d", &matrizB[i][j]);
            if(flag==tam*tam){
                i=0;
                j=-1;
                letra='B';
            }
        }
    }
}


int main(){
    int matrizA[tam][tam], matrizB[tam][tam], matrizAB[tam][tam];
    inputMatriz(matrizA, matrizB);
    Sleep(150);
    system("cls");

    //produto da matriz
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            matrizAB[i][j]=matrizA[i][j]*matrizB[i][j];
        }
    }
    
    imprimirMatriz(matrizAB);

    return 0;
}