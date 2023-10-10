#include <stdio.h>
#include <stdlib.h>

void numeroPerfeito(){
    int num=0, invalido=1;
    system("cls");
    printf("         NUMERO PERFEITO         \n");
    printf(" ");
    for(int i=0; i<30; i++){
        printf("%c", 220);
    }
    printf("\n\n\nDigite seu numero: ");
    do{
        scanf("%d", &num);
        if(num<=1 ){
            printf("\nNumero invalido, digite novamente: ");
            invalido=1;
        }
        else
            invalido=0;
    }while(invalido==1);
    
}

void menu(){
    printf("         MENU DE OPCOES          \n");
    printf(" ");
    for(int i=0; i<30; i++){
        printf("%c", 220);
    }
    printf("\n\n1 - NUMERO PERFEITO");
    printf("\n2 - ORCAMENTO VIDRACARIA");
    printf("\n3 - SEQUENCIA COM VARIACAO DE SINAL");
    printf("\n4 - NUMEROS DIVISIVEIS POR 4");
    printf("\n5 - SAIR");
    printf("\nEscolha o numero de uma das opcoes acima...");
}

int input_opc(int opc){
    int invalido=0, cont=1;
    
    do{
        printf("\n\n\nDigite: ");
        fflush(stdin);
        scanf("%d", &opc);
        if(opc<=0 || opc>5){
            invalido=1;
            printf("\n\nENTRADA INVALIDA, DIGITE NOVAMENTE...");
            if(cont==3){
                cont=0;
                system("cls");
                menu();
            }
        }
        else
            invalido=0;
        cont++;
    }while(invalido==1);

    return opc;
}

int main(){
    int opc=0;
    menu();
    opc=input_opc(opc);

    if(opc==1){
        numeroPerfeito();
    }
    else if(opc==2){

    }
    else if(opc==3){

    }
    else if(opc==4){    

    }
    else{
        printf("\n\n\nPROGRAMA ENCERRADO...");
    }

    return 0;
}
