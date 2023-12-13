#include <stdio.h>
#include <windows.h>
#define tam 3
int main()
{
    int a[tam][tam], i, j, linha[tam], coluna[tam], cont, diagonal, secundaria;
    cont = diagonal = secundaria = 0;
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            scanf("%d", &a[i][j]);
        }
        linha[i] = 0;
        coluna[i] = 0;
    }
    system("cls");
    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            linha[i] += a[i][j];
            coluna[i] += a[j][i];
            if (i == j)
                diagonal += a[i][j];
            if (i + j == tam - 1)
                secundaria += a[i][j];
        }
    }
    for (i = 0; i < tam; i++)
    {
        if (linha[i] != linha[i + 1] && i < tam - 1)
        {
            cont++;
        }
        if (coluna[i] != coluna[i + 1] && i < tam - 1)
        {
            cont++;
        }
        if (linha[i] != coluna[i] || coluna[i] != diagonal || diagonal != secundaria)
        {
            cont++;
        }
    }
    if (cont == 0)
        printf("\nE UM QUADRADO MAGICO");
    else
        printf("NAO E QUADRADO MAGICO");
    return 0;
}