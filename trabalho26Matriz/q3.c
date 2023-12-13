#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main()
{
    int n, cont, i;
    n = cont = 0;
    printf("Digite numero de pacientes:\n");
    scanf("%d", &n);
    int xolesterol[n], broteinas[n], toroteinas[n];
    char nome[n][tam];
    for (i = 0; i < n; i++)
    {
        xolesterol[i] = 0;
        broteinas[i] = 0;
        toroteinas[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("Digite nome do paciente %d\n", i + 1);
        fflush(stdin);
        gets(nome[i]);
        printf("Digite numero de xolesterol:\n");
        scanf("%d", &xolesterol[i]);
        while (xolesterol[i] < 0 || xolesterol[i] > 100)
        {
            printf("Valor invalido tente novamente:\n");
            scanf("%d", &xolesterol[i]);
        }
        printf("Digite numero de broteinas:\n");
        scanf("%d", &broteinas[i]);
        while (broteinas[i] < -10 || broteinas[i] > 10)
        {
            printf("Valor invalido tente novamente:\n");
            scanf("%d", &broteinas[i]);
        }
        printf("Digite numero de toroteinas:\n");
        scanf("%d", &toroteinas[i]);
        while (toroteinas[i] < 5000 || toroteinas[i] > 10000)
        {
            printf("Valor invalido tente novamente:\n");
            scanf("%d", &toroteinas[i]);
        }
    }
    system("cls");
    for (i = 0; i < n; i++)
    {
        printf("Paciente %d : %s\n", i + 1, nome[i]);
        if (xolesterol[i] < 30 || xolesterol[i] > 50)
        {
            cont++;
            printf("Tem hipoxolesterol (hiperxolesterol)\n");
        }
        if (broteinas[i] < 3 || broteinas[i] > 7)
        {
            cont++;
            printf("Tem hipobroteina (hiperbroteina)\n");
        }
        if (toroteinas[i] < 6500 || toroteinas[i] > 8000)
        {
            cont++;
            printf("Tem hipotoroteinas (hipertoroteinas)\n");
        }
        if (cont == 2)
        {
            printf("Paciente grave\n");
        }
        if (cont == 3)
            printf("Paciente muito grave\n");
        if (cont == 0)
            printf("Paciente normal\n");
        printf("\n\n");
        cont = 0;
    }
    // system("cls");
    return 0;
}