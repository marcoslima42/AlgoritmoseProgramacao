#include <stdio.h>

int main(){
    int tempo=0;
    char opc='S';

    while(opc=='S' || opc=='s'){    
        int primeiroMes=1;
        float montante=0, capital=0, taxa=0, juros=0, aux=0;
        
        //entrada
        printf("\nJUROS COMPOSTO");
        printf("\nInsira o capital ao mes: ");
        scanf("%f", &capital);
        aux=capital;
        printf("\nInsira a taxa de juros: ");
        scanf("%f", &taxa);
        
        //processamento 
        for(tempo=1; tempo<=12; tempo++){
            if(primeiroMes<12){
                juros=capital*(taxa/100);
                montante=montante+(capital+juros);
                capital=capital+juros;
                primeiroMes++;
            }
            else 
            montante+=aux;
        }
        

        //saida
        printf("\n\n\nSaldo do investimento apos um ano: ");
        printf("\nR$ %.2f", montante);
        printf("\n\nDESEJA EXECUTAR NOVAMENTE?");
        printf("\nSE SIM DIGITE 'S', SE NAO INSIRA QUALQUER TECLA\n");
        opc=getch();
        system("cls");
    }
    return 0;
}