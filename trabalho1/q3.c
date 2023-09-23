#include <stdio.h>

int main(){
    float capitalInicial=0, capital=0, taxa=0, juros=0, total=0, primeiraVez=1;
    char opc='S';

    while(opc=='S' || opc=='s'){    
        //entrada
        printf("\nJUROS COMPOSTO");
        printf("\n\nInsira o seu capital inicial: ");
        scanf("%f", &capitalInicial);
        printf("\nInsira o capital ao mes: ");
        scanf("%f", &capital);
        printf("\nInsira a taxa de juros: ");
        scanf("%f", &taxa);
        
        //processamento 
        
        
        for(int i=1; i<=12; i++){
            if(primeiraVez==1){    
                if(capitalInicial>0){
                    capital+=capitalInicial;
                    primeiraVez=0;
                }
            }
            juros=capital*(taxa/100);
            capital=capital+juros;
        }

        //saida
        printf("\n\n\nSaldo do investimento apos um ano: ");
        printf("\nR$ %.2f", total);
        printf("\n\nDESEJA EXECUTAR NOVAMENTE?");
        printf("\nSE SIM DIGITE 'S', SE NAO INSIRA QUALQUER TECLA\n");
        opc=getch();
        system("cls");
    }
    return 0;
}