#include <stdio.h>
#include <stdlib.h>
#define tam 10
#define tam2 3
int main()
{
    int matricula[tam2], i, j, cont;
    char prova[tam2][tam], resp[tam];
    cont = 0;
    for (i = 0; i < tam2; i++)
    {
        matricula[i] = 0;
        for (j = 0; j < tam; j++)
        {
            prova[i][j] = ' ';
            resp[j] = ' ';
        }
    }
    printf("Digite as respoastas da prova\n");
    for (i = 0; i < tam; i++)
    {
        fflush(stdin);
        scanf("%c", &resp[i]);
    }
    system("cls");
    for (i = 0; i < tam2; i++)
    {
        printf("Digite matricula do aluno %d\n", i + 1);
        scanf("%d", &matricula[i]);
        printf("Digite respostas do aluno\n");
        for (j = 0; j < tam; j++)
        {
            fflush(stdin);
            scanf("%c", &prova[i][j]);
        }
        system("cls");
    }
    for (i = 0; i < tam2; i++)
    {
        printf("Aluno %d com matricula %d\n", i + 1, matricula[i]);
        printf("Respostas da prova:\n");
        for (j = 0; j < tam; j++)
        {
            printf("%c ", prova[i][j]);
            if (prova[i][j] == resp[j])
                cont++;
        }
        printf("\n");
        if (cont >= 7)
            printf("Aluno foi aprovado com %d %%\n", cont * 10);
        else
            printf("Aluno acertou %d %% da prova mas nao foi aprovado\n", cont * 10);
        cont = 0;
    }
    return 0;
}
