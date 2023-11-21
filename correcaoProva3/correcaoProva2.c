#include <stdio.h>
#include <windows.h>

//Função gotoxy
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void moldura3(){
    int coluna=5, linha=5, i=0;

    coluna=25;
    linha=7;
    gotoxy(coluna, linha);
    printf("MENU");
    coluna=15;
    linha=9;
    gotoxy(coluna, linha); 
    printf("1.a vista com 10%% de desconto");
    linha=10;
    gotoxy(coluna, linha);
    printf("2.em duas vezes(preco da etqueta)");
    linha=11;
    gotoxy(coluna, linha);
    printf("3.de 3 ate 10 vezes com 3%% de juros ao mes(somente para compras acima de R$ 100)");
    linha=12;
    gotoxy(coluna, linha);
    printf("escolha uma das opcoes: ");

    //linha horizontal inferior
    coluna=5;
    linha=15;
    for(i=1; i<=46; i++){
        gotoxy(coluna, linha);
        coluna++;
        printf("-");
    }

    //linha vertical a esquerda
    linha=5;
    coluna=5;
    for(i=1; i<=10; i++){
        gotoxy(coluna, linha);
        linha++;
        printf("|");
    }

    //linha vertical a direita 
    coluna=50;
    linha=5;
    for(i=1; i<=10; i++){
        gotoxy(coluna, linha);
        linha++;
        printf("|");
    }
    
    
    

}
void opcao3(){
    int cod=0;
    float preco=0;

    printf("\n\nDigite o valor do produto: ");
    scanf("%f", &preco);
    printf("\n\nDigite o codigo da opcao de pagamento: ");
    scanf("%d", &cod);
    if(cod==1){
        printf("A vista em dinheiro ou pix, recebe 10%% de desconto");
        printf("\n\n%2.f", preco*0.90);
    }
    else if(cod==2){
        printf("Em 2 vezes, preco normal de etiqueta sem juros");
        printf("\n\n2x de %2.f", preco/2);
    }
    else if(cod==3){
        printf("Em 3 vezes, preco normal de etiqueta mais juros de 10%%");
        printf("\n\n3x de %2.f", (preco*1.3)/3);
    }
}

float opcao2(){
    system("cls");
    printf("\nSEQUENCIA DE S");
    float s=1;
    int n=0;
    do{
        fflush(stdin);
        scanf("%d", &n);
    }while(n<=0);
    float i=2;
    while(i<=n){
        s+=(float)(1/i);
        i++;
    }

    printf("%.4f", s);
    getch();
    return s;
}

void opcao1(){
    system("cls");
    printf("\nCALCULO DE NOTAS\n\n");
    float nota1=0, nota2=0, nota3=0, maior=0, menor=100;
    printf("Digite as notas\n");
    do{
        fflush(stdin);
        scanf("%f %f %f", &nota1, &nota2, &nota3);
    }while(nota1>0 && nota2>0 && nota3>0 && nota1<100 && nota2<100 && nota3<100);

    printf("\n Media com as 3 notas %.2f", (nota1+nota2+nota3)/3);

    maior=nota1;

    if(maior<nota2)
        maior=nota2;
    else if(maior<nota3)
    maior=nota3;

    menor=nota1;
    if(menor>nota2)
        menor=nota2;
    else if(menor>nota3)
        menor=nota3;
    
    //descobrir as duas notas mais altas 
    if(nota1>menor && nota2>menor)
        printf("A media das duas notas mais altas e %.2f", (nota1+nota2)/2);
    if(nota1>menor && nota3>menor)
        printf("A media das duas notas mais altas e %.2f", (nota1+nota3)/2);
    if(nota2>menor && nota1>menor)
        printf("A media das duas notas mais altas e %.2f", (nota2+nota1)/2);
    if(nota2>menor && nota3>menor)
        printf("A media das duas notas mais altas e %.2f", (nota2+nota3)/2);
    if(nota3>menor && nota1>menor)
        printf("A media das duas notas mais altas e %.2f", (nota3+nota1)/2);
    if(nota3>menor && nota2>menor)
        printf("A media das duas notas mais altas e %.2f", (nota3+nota2)/2);

    printf("\nNota mais alta %.2f", maior);

    printf("\nNota mais baixa %.2f", menor);
    getch();
}

void menu(){
    int coluna=5, linha=5, i=0;
    
    for(i=1; i<=46; i++){
        gotoxy(coluna, linha);
        coluna++;
        printf("-");
    }
    
    coluna=25;
    linha=7;
    gotoxy(coluna, linha);
    printf("MENU");
    coluna=15;
    linha=9;
    gotoxy(coluna, linha); 
    printf("1.Calculo de Notas");
    linha=10;
    gotoxy(coluna, linha);
    printf("2.Sequencia para calculo de S");
    linha=11;
    gotoxy(coluna, linha);
    printf("3.Pagamento de compras em uma loja");
    linha=12;
    gotoxy(coluna, linha);
    printf("escolha uma das opcoes: ");

    //linha horizontal inferior
    coluna=5;
    linha=15;
    for(i=1; i<=46; i++){
        gotoxy(coluna, linha);
        coluna++;
        printf("-");
    }

    //linha vertical a esquerda
    linha=5;
    coluna=5;
    for(i=1; i<=10; i++){
        gotoxy(coluna, linha);
        linha++;
        printf("|");
    }

    //linha vertical a direita 
    coluna=50;
    linha=5;
    for(i=1; i<=10; i++){
        gotoxy(coluna, linha);
        linha++;
        printf("|");
    }
}

int main(){
    char novamente='s';
    int opc=0, erro=0;
    float s=0;

    menu();
    //entrada e validacao de opc
    do{
        fflush(stdin);
        scanf("%d", &opc);
        if(opc<0 || opc>3)
            erro=1;
    }while(erro==1);

    while(novamente=='s'){
        if(opc==1){
            system("cls");
            opcao1();
            system("cls");
            menu();
            do{
                fflush(stdin);
                scanf("%d", &opc);
                if(opc<0 || opc>3)
                    erro=1;
            }while(erro==1);
        }
        else if(opc==2){
            system("cls");
            s=opcao2();
            printf("O valor de S e %.4f", s);
            getch();
            system("cls");
            menu();
            do{
                fflush(stdin);
                scanf("%d", &opc);
                if(opc<0 || opc>3)
                    erro=1;
            }while(erro==1);
        }

        else if(opc==3){
            system("cls");
            opcao3();
            system("cls");
            menu();
            do{
                fflush(stdin);
                scanf("%d", &opc);
                if(opc<0 || opc>3)
                    erro=1;
            }while(erro==1);
        }

        else if(opc==0){
            novamente='n';
            system("cls");
            printf("\n PROGRAMA FINALIZADO!");
        }

    }
    
    return 0;
}