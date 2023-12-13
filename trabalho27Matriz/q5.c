#include <stdio.h>

int main(){
    int poltrona[8][5];

    for(int i=0; i<8; i++)
        for(int j=0; j<5; j++)
            poltrona[i][j]=0;
        
    int linha=0, coluna=0, flag=0;
    do{
        flag=0;
        printf("\nESCOLHA A POLTRONA: ");
        printf("\nEntre com a linha:\n");
        scanf("%d", &linha);
        printf("\nEntre com a coluna:\n");
        scanf("%d", &coluna);
        
        poltrona[linha][coluna]=1;
        printf("\n Deseja ocupar mais alguma poltrona?");
        scanf("%d", &flag);
    }while(flag==1);


    for(int i=0; i<8; i++){
        printf("\n\t\t");
            for(int j=0; j<5; j++){
                printf("%2.1d ", poltrona[i][j]);
            }
    }
    return 0;
}