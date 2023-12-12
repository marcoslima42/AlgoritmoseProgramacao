#include <stdio.h>
#define tam 15
#define maiores 10

int main()
{
    double H[tam], X[tam];
    for (int i = 0; i < tam; i++)
    {
        H[i] = 0;
        X[i] = 0;
    }
    printf("FORAM %d MAIORES ELEMENTOS DE H", tam);
    for (int i = 0; i < tam; i++)
    {
        scanf("%lf", &H[i]);
    }
    for (int i = 0; i < maiores; i++)
    {
        double max = -1e9;
        int indiceMax = 0;
        for (int j = 0; j < tam; j++)
        {
            if (H[j] > max)
            {
                max = H[j];
                indiceMax = j;
            }
        }
        X[i] = max;
        H[indiceMax] = -1e9;
    }
    printf("FORAM %d MAIORES ELEMENTOS DE X:\n", maiores);
    for (int i = 0; i < maiores; i++)
    {
        printf("%.2lf ", X[i]);
    }
    return 0;
}