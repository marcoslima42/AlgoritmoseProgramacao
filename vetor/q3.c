#include <stdio.h>
#include <windows.h>
#define tam 10
void desenharLinha(){
    for(int i=0; i<tam*2+2; i++)
        printf("_");
}

void desenharLinha2(){
    for(int i=0; i<tam*2+2; i++)
        printf("-");
}

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
    int num[tam], i=0, indicePar=6, indiceImpar=1, ultimaVez=0, coluna=1, linha=1;

    for(i=0; i<tam; i++){
        if((i+1)%2==0){     //indice par
            num[i]=indicePar;
            indicePar++;
        }
        else{       //indice impar
            num[i]=indiceImpar;
            indiceImpar++;
        }
    }
    coluna=10;
    linha=5;
    gotoxy(coluna, linha);
    desenharLinha();
    linha=6;
    gotoxy(coluna, linha);
    //printf("\n\n");
    for(i=0; i<tam; i++){
        ultimaVez++;
        if(ultimaVez<tam){
            printf("|%d", num[i]);
        }
        else
            printf("|%d|", num[i]);
    }
    linha=7;
    gotoxy(coluna, linha);
    desenharLinha2();

    return 0;
}