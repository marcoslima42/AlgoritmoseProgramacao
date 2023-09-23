#include <stdio.h>

int main(){
    float salario=0;
    int dp=0, cont=1;

    printf("\nRELATORIO DE FUNCIONARIOS\n");

    while(cont<=4){
        //entrada
        printf("\nFUNCIONARIO %d\n", cont);
        printf("\nDigite o salario do funcionario %d: ", cont);
        scanf("%f", &salario);
        printf("\nDigite a quantidade de dependentes: ");
        scanf("%d", &dp);
        printf("\nTECLE ENTER PARA PROCESSAR...");
        getch();

        //saida
        system("cls");
        printf("\nRELATORIO FUNCIONARIO %d\n\n", cont);
        if(dp==1)
            salario*=1.02;
        else if(dp==2)
            salario*=1.04;
        else if(dp==3)
            salario*=1.06;
        else if(dp==4)
            salario*=1.08;
        else
            salario*=1.1;
        printf("O Salario liquido e de %.2f", salario);
        cont++;
        getch();
        system("cls");

    }
    
    return 0;
}

