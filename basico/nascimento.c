#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int idade=0, ano_atual=0;
    printf("\nANO DE NASCIMENTO\n");
    printf("DIGITE SUA IDADE EM ANOS, CONSIDERE JA TER FEITO ANIVERSARIO ESTE ANO: ");
    scanf("%d", &idade);

    //declarar variavel do tipo time
    time_t now;
    //receber do sistema dados de tempo, no caso a data atual
    time(&now);
    //converter a variavel do formato padrao da lib time.h para year 'ano'
    ano_atual=localtime(&now)->tm_year + 1900;
    //por conta de como foi desenvolvido a lib time.h se soma 1900, a funcao so 'conta' depois de 1900

    printf("DE ACORDO SUA IDADE VOCE NASCEU EM %d", ano_atual-idade);

    return 0;
}
