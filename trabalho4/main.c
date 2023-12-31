#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void divisivel4(){
    char novamente='s';

    while(novamente=='s' || novamente=='S'){
        system("cls");
        printf("         NUMEROS DIVISIVEIS POR 4         \n");
        printf(" ");
        for(int i=0; i<40; i++){
            printf("%c", 280);
        }        
        int num=0;
        printf("\n\nQual o intervalo:\n");
        do
        {
            fflush(stdin);
            scanf("%d", &num);
            if(num<=0)
                printf("\nIntervalo menor ou igual a zero, digite novamente: ");
        }while(num<=0);

        for(int i=1; i<=num; i++){
            if((i % 4) == 0)
                printf("\n%d e divisivel 4", i);
        }

        printf("\n\n\nDESEJA EXECUTAR O PROGRAMA 3 NOVAMENTE?");
        printf(" SE SIM, DIGITE 'S' OU 's'...\n");
        fflush(stdin);
        scanf("%c", &novamente);
    }
}

void seqSinal(){
    char novamente='s';

    while(novamente=='s' || novamente=='S'){
        int qtdTermo=1;
        float s=0, numerador=1000, denominador=5, atual=0;
        printf("\n\nQuantos termos voce deseja?\n");
        do
        {
            fflush(stdin);
            scanf("%d", &qtdTermo);
            if(qtdTermo<=0)
                printf("\nTermo menor ou igual a zero, digite novamente: ");
        }while(qtdTermo<=0);

        for(int i=1; i<=qtdTermo; i++){
            atual=numerador/denominador;
            numerador-=3;
            denominador+=5;
            if((i % 2) == 0)
                atual*=-1;
            s+=atual;
        }
        printf("\n\n O resultado de 'S' e %.2f", s);

        printf("\n\n\nDESEJA EXECUTAR O PROGRAMA 3 NOVAMENTE?");
        printf(" SE SIM, DIGITE 'S' OU 's'...\n");
        fflush(stdin);
        scanf("%c", &novamente);
    }
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
    int fim=0, valor=5, primeiraVez=1, cont=0;
    float comprimento=0, largura=0, pagar=0, maior=0, menor=0, total=0;
    system("cls");
    printf("         ORCAMENTO VIDRACARIA         \n");
    printf(" ");
    for(int i=0; i<36; i++){
        printf("%c", 280);
    }
    
    do{
        fim=0;
        comprimento=largura=pagar=0;
        printf("\n\nDigite o Comprimento\n");
        comprimento=medida5();
        printf("\n\nDigite a Largura\n");
        largura=medida5();
        
        if(comprimento==0 || largura==0)
            fim=1;
        else{
            pagar=(largura*comprimento)*valor;
            if(primeiraVez==1){
                primeiraVez=0;
                menor=pagar;
            }
            if(pagar>maior)
                maior=pagar;
            if(pagar<menor)
                menor=pagar;
            total+=pagar;

            printf("\nValor do orcamento atual %.2fmm X %.2fmm = %.2f\n\n", comprimento, largura, pagar);
            for(int i=0; i<36; i++){
                printf("%c", 220);
            }
            cont++;
        }
    }while(fim==0);

    printf("\n\n\nO maior orcamento %.2f", maior);
    printf("\nO menor orcamento %2.f", menor);
    printf("\nValor total dos orcamentos %2.f", total);
    printf("\nForam processado(s) %d orcamentos\n\n", cont);
    system("pause");
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
