#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//Função gotoxy
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void moldura()
{
     int coluna = 15;
    int linha  = 5,i;
    system("cls");

    for(i = 0;i<30;i++)
    {
       gotoxy(coluna,linha);
       printf("*");
       coluna++;

    }

    gotoxy(22,7);
    printf("Estudo de caso");
    coluna = 15;
    linha = 15;
    for(i = 0;i<30;i++)
    {
       gotoxy(coluna,linha);
       printf("*");
       coluna++;

    }
    coluna = 15;
    linha = 5;
    for(i = 0;i<11;i++)
    {
       gotoxy(coluna,linha);
       printf("|");
       linha++;

    }

    coluna = 45;
    linha = 5;
    for(i = 0;i<11;i++)
    {
       gotoxy(coluna,linha);
       printf("|");
       linha++;

    }

    gotoxy(18,8);
    printf("1 - questao 1");
    gotoxy(18,9);
    printf("2 - questao 2");
    gotoxy(18,10);
    printf("3 - questao 3");
    gotoxy(18,11);
    printf("0 - Sair");
}

int main()
{
    int opt=0;

    do{
        moldura();
        gotoxy(18,13);
        printf("Informe a opcao desejada: ");
        scanf("%d",&opt);

        switch (opt)
        {
        case  1:
                printf("Funcao questão 1");
                break;
            case 2:
                printf("Funcao questão 2");
                break;
            case 3:
                printf("Funcao questao 3");
                break;
            case 0:
                printf("Saindo...");
                break;
            default:
                printf("Valor incorreto!");
                break;
        }
        getch();
    }while(opt != 0);


    getch();

    return 0;
}