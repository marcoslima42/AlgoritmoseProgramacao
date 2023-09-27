#include <stdio.h>

void menu(){
    printf("\n1.Alcool");
    printf("\n2.Gasolina");
    printf("\n3.Diesel");
    printf("\n4.FIM\n\n");
}

int main(){
    int fim=0, alcool=0, gasolina=0, diesel=0, opc=0;

    while(fim==0){
        menu();
        printf("\nDigite seu combustivel: ");
        scanf("%d", &opc);
        while(opc>4 || opc<1){
            printf("\nOpcao errada, digite novamente: ");
            scanf("%d", &opc);
        }
        if(opc==1)
            alcool++;
        else if(opc==2)
            gasolina++;
        else 
            diesel++;
        printf("\nMuito Obrigado!");
        getch();
        system("cls");
        if(opc==4)
            fim=1;
    }
    
    printf("%d Alcool, %d Gasolina, %d Diesel", alcool, gasolina, diesel);
    return 0;
}