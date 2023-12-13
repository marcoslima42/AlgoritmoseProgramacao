#include <stdio.h>
#define tam 8

int main(){
    int matriz[tam][tam]= {{1,3,0,5,4,0,2,1},{1,0,1,0,0,1,0,0}, {0,0,0,0,1,0,6,0},
    {1,0,0,1,1,0,0,1}, {0,1,0,4,0,0,1,0}, {0,0,3,1,0,0,1,1}, {1,0,6,6,0,0,1,0}, {1,0,5,0,1,1,0,6}};
    int ausencia=0, peoes=0, torres=0, reis=0, cavalo=0, bispo=0, rainha=0;

    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(matriz[i][j]==1)
                peoes++;
            if(matriz[i][j]==3)
                torres++;
            if(matriz[i][j]==5)
                reis++;
            if(matriz[i][j]==0)
                ausencia++;
            if(matriz[i][j]==2)
                cavalo++;
            if(matriz[i][j]==4)
                bispo++;
            if(matriz[i][j]==6)
                rainha++;
        }
    }

    printf("\n\nPeoes %d, torres %d, reis %d, ausencia de pecas %d, cavalos %d, bispos %d, rainhas %d", peoes, torres, reis, ausencia, cavalo, bispo, rainha);
    printf("\nA soma total de peoes e bispos e de %d", peoes+bispo);

    return 0;
}
