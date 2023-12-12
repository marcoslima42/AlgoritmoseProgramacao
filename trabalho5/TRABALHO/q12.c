#include <stdio.h>
int main()
{
    double x[10], Y[10], u[20];
    printf("DIGITE OS VALORES DE x:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &x[i]);
        u[i] = x[i];
    }
    printf("DIGITE OS VALORES DE Y:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%lf", &Y[i]);
    }
    int tamU = 10;
    for (int i = 0; i < 10; i++)
    {
        int again = 0;
        for (int j = 0; j < tamU; j++)
        {
            if (x[i] == u[j])
            {
                again = 1;
                break;
            }
        }
        if (!again)
        {
            u[tamU] = x[i];
            tamU++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        int again = 0;
        for (int j = 0; j < tamU; j++)
        {
            if (Y[i] == u[j])
            {
                again = 1;
                break;
            }
        }
        if (!again)
        {
            u[tamU] = Y[i];
            tamU++;
        }
    }
    printf("\nUNINDO X E X SEM REPETIR:");
    for (int i = 0; i < tamU; i++)
    {
        printf("%.2lf ", u[i]);
    }
    return 0;
}
