#include <stdio.h>
int minutosEntrada(){
    int minutos=0;
    printf("\nDigite os minutos: ");
    scanf("%d", &minutos);
    return minutos;
}
int horasEntrada(){
    int horas=0;
    printf("\nDigite a hora:");
    fflush(stdin);
    scanf("%d", &horas);
    return horas;

}
int main(){
    int hrInicio=0, minInicio=0, hrSaida, minSaida=0, contHoras=0, contMinutos=0;
    hrInicio=horasEntrada();
    minInicio=minutosEntrada();

    printf("\nDigite sua saida\n");


    hrSaida=horasEntrada();
    minSaida=minutosEntrada();


    for(int i=hrInicio; i<hrSaida; i++){
        contHoras++;
    }

    for(int i=minInicio; i<minSaida; i++){
        contMinutos++;
    }
    //convertendo horas em minutos 
    contHoras=contHoras*60;

    printf("A duracao em minutos e de %d", contHoras+contMinutos);

    return 0;
}