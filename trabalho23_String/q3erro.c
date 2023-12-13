#include <stdio.h>
#include <string.h>

int main(){
    int dia=0, mes=0, ano=0;
    char strMes[30][12]={"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"}; 
    printf("\n\nDigite o ano: ");
    scanf("%d", &ano);
    printf("\n\nDigite o mes: ");
    scanf("%d", &mes);
    printf("\n\nDigite o dia: ");
    scanf("%d", &dia);

    printf("Voce nasceu em %d", dia);
    for(int i=0; i<10; i++){
        printf("de %c", strMes[i][mes]);
    }

    return 0;
}