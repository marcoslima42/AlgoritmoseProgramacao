#include <stdio.h>
#include <stdlib.h>
#define tam 5
#define tam2 4
int main()
{
    float m[tam][tam2], maior, media;
    int i, j;
    for (i = 0; i < tam; i++)
    {
        printf("Aluno %d\n", i + 1);
        printf("Digite a matricula:\n");
        scanf("%f", &m[i][0]);
        printf("Digite media das provas:\n");
        scanf("%f", &m[i][1]);
        printf("Digite media dos trabalhos:\n");
        scanf("%f", &m[i][2]);
        m[i][3] = m[i][1] + m[i][2];
        media += m[i][3];
        system("cls");
    }
    system("cls");
    for (i = 0; i < tam; i++)
    {
        printf("%.0f %.2f %.2f %.2f ", m[i][0], m[i][1], m[i][2], m[i][3]);
        if (i == 0)
            maior = m[i][3];
        if (maior < m[i][3])
            maior = m[i][3];
        printf("\n");
    }
    printf("Maior media foi %.2f\n", maior);
    printf("Media das notas foi %.2f", media / tam);
    // system("cls");
    return 0;
}