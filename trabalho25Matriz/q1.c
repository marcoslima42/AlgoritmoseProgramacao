#include <stdio.h>
#include <windows.h>
#define linha 2
#define coluna 7

int main(){
    int matriz[linha][coluna];

    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            printf("\nMATRIZ[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    system("cls");
    //entrada do numero
    int num=0, existe=0;
    scanf("%d", &num);
    
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            if(num==matriz[i][j]){
                existe++;
                printf("\n\nO elemento existe, sua posicao e [%d][%d]", i+1, j+1);
            }
        }
    }

    if(existe==0)
        printf("Elemento nao encontrado..."); 

    return 0;
}