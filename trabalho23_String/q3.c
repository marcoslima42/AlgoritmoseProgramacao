#include <stdio.h>
#include <string.h>

int main(){
    int dia=0, mes=0, ano=0;
    
    printf("\n\nDigite o dia: ");
    scanf("%d", &dia);
    printf("\n\nDigite o mes: ");
    scanf("%d", &mes);
    printf("\n\nDigite o ano: ");
    scanf("%d", &ano);


    printf("Voce nasceu em %d ", dia);
    if(mes==1)
        printf("Janeiro");
    else if(mes==2)
        printf("Fevereiro");
    else if(mes==3)
        printf("Marco");
    else if(mes==4)
        printf("Abril");
    else if(mes==5)
        printf("Maio");
    else if(mes==6)
        printf("Junho");
    else if(mes==7)
        printf("Julho");
    else if(mes==8)
        printf("Agosto");
    else if(mes==9)
        printf("Setembro");
    else if(mes==10)
        printf("Outubro");
    else if(mes==11)
        printf("Novembro");
    else 
        printf("Dezembro");
    
    printf(" de %d", ano);
    
    return 0;
}