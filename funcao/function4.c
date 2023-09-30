#include <stdio.h>
#include <stdlib.h>

float tres(float gasto, int parcela){
    gasto=gasto/parcela;
    gasto=gasto*1.03;
    return gasto;
}
float dois(float gasto){
    gasto*=2;
    return gasto;
}
float um(float gasto){
    gasto*=0.90;
    return gasto;
}
void menu(){
    printf("\nMENU");
    printf("\n1) Opcao: a vista com 10%% de desconto");
    printf("\n2) Opcao: em duas vezes (preco da etiqueta)");
    printf("\n3) Opcao: de 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");
    printf("Digite: ");
}


int main()
{
    float gasto=0;
    int opc=0;

    printf("\nPAGAMENTO LOLJA");
    printf("\nDigite o total gasto: ");
    scanf("%f", &gasto);
    menu();
    scanf("%d", &opc);

    if(opc==1){
        gasto=um(gasto);
        printf("\nO valor a ser pago e de: %.2f", gasto);
    }
    else if(opc==2){
        gasto=dois(gasto);
        printf("\nO valor a ser pago e de: %.2f", gasto);
    }
    else{
        if(gasto<100)
            printf("\nOpcao invalida, gasto menor que 100. Execute o prorama novamente...");
        else{
            int parcela=0;
            printf("\nQuantas parcelas? ");
            scanf("%d", &parcela);
            gasto=tres(gasto, parcela);
            printf("Sua parcela sera de %.2f\n", gasto);
            printf("\nSeu total sera de %.2f", gasto*parcela);
        }
    }
    return 0;
}
