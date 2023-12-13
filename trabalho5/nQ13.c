#include <stdio.h>
#define tam 30
int main()
{
    int vetorX[tam], vetorJ[tam];
    int maior = 0;
    printf("INSIRA %d ELEMENTOS DO VETOR X:\n", tam);
    for (int i = 0; i < 30; i++)
    {
        scanf("%d", &vetorX[i]);
        if (vetorX[i] > maior)
        {
            maior = vetorX[i];
        }
    }
    for (int i = 0; i < 30; i++)
    {
        vetorJ[i] = vetorX[i] * maior;
    }
    printf("ELEMENTOS DO VETOR J:\n");
    for (int i = 0; i < 30; i++)
    {
        printf("%d ", vetorJ[i]);
    }
    return 0;
}
