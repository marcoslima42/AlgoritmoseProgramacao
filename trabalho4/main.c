#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void divisivel4(){

}

void seqSinal(){

}

float medida5(){
    float x=0;
    int xInteiro=0;
    
    printf("\n\n Insira a medida desejada: ");
    fflush(stdin);
    scanf("%f", &x);
    while(x<0 || (x<10 && x>0)){
        printf("\nMedida negativa ou muito baixa, digite novamente...");
        printf(" Insira acima de 100mm");
        fflush(stdin);
        scanf("%f", &x);
    }
    
    xInteiro=x;
    
    if((xInteiro % 5) != 0){
        printf("\n\n\nMedida invalida, o valor sera cobrado referente ao proximo multiplo de 5...");
        while((xInteiro % 5) != 0)
            xInteiro++;
    }
    x=xInteiro;
    return x;
}

void orcamentoVidracaria(){
    char novamente='s';
    int fim=0, valor=5;
    float comprimento=0, largura=0, pagar=0, maior=0, menor=0, total=0;
    while(novamente=='s' || novamente=='S'){
        system("cls");
        printf("         ORCAMENTO VIDRACARIA         \n");
        printf(" ");
        for(int i=0; i<36; i++){
            printf("%c", 280);
        }
    fim=0;
    do{
        comprimento=largura=pagar=0;
        printf("\n\nDigite o Comprimento\n");
        comprimento=medida5();
        printf("\n\nDigite a Largura\n");
        largura=medida5();
        
        if(comprimento==0 || largura==0)
            fim=1;
        else{
            pagar=(largura*comprimento)*valor;
            if(pagar>maior)
                maior=pagar;
            if(pagar<menor)
                menor=pagar;
            total+=pagar;

            printf("\nValor do orcamento atual %.2fmm X %.2fmm = %.2f\n\n", comprimento, largura, pagar);
            for(int i=0; i<36; i++){
                printf("%c", 220);
            }
        }
    }while(fim==0);

    printf("\n\n\nO maior orcamento %.2f", maior);
    printf("\nO menor orcamento %2.f", menor);
    printf("\nValor total dos orcamentos %2.f", total);
    }

}

void numeroPerfeito(){
    char novamente='s';
    while(novamente=='s' || novamente=='S'){
        int num=0, invalido=1;
        system("cls");
        printf("         NUMERO PERFEITO         \n");
        printf(" ");
        for(int i=0; i<30; i++){
            printf("%c", 280);
        }
        printf("\n\n\nDigite seu numero: ");
        do{
            fflush(stdin);
            scanf("%d", &num);
            if(num<=1 ){
                printf("\nNumero invalido, digite novamente: ");
                invalido=1;
            }
            else
                invalido=0;
        }while(invalido==1);

        int valor=1;
        int perfeito=0;

        while(valor<num){
            if(num%valor==0){
                perfeito+=valor;
            }
            valor++;
        }
        if(perfeito==num)
            printf("\n\nNUMERO PERFEITO!");
        else
            printf("\n\nSEU NUMERO NAO E PERFEITO!");


        printf("\n\n\nDESEJA EXECUTAR O PROGRAMA 1 NOVAMENTE?");
        printf(" SE SIM, DIGITE 'S' OU 's'...\n");
        fflush(stdin);
        scanf("%c", &novamente);
    }
}

void menu(){
    system("cls");
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

char backMenu(char novamente){
    system("cls");
    printf("\nDESEJA VOLTAR AO MENU?");
    printf(" SE SIM, DIGITE 'S' OU 's'...\n");
    fflush(stdin);
    scanf("%c", &novamente);
    return novamente;
}

int main(){
    int opc=0;
    char novamente='s';

    while(novamente=='S' || novamente=='s'){
        menu();
        opc=input_opc(opc);
        if(opc==1){
            numeroPerfeito();
            novamente=backMenu(novamente);
        }
        else if(opc==2){
            orcamentoVidracaria();
            novamente=backMenu(novamente);
        }
        else if(opc==3){
            seqSinal();
            novamente=backMenu(novamente);
        }
        else if(opc==4){
            divisivel4();
            novamente=backMenu(novamente);
        }
        else if(opc==5){
            printf("\n\n\nPROGRAMA ENCERRADO!");
            novamente='n';
        }
    }

    return 0;
}
