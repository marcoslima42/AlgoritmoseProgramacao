#include <stdio.h>

int main(){
    float nota=0, media=0, peso=0, pesoAtual=0;
    int qtdNotas=1;
    char conceito='A';
    
    printf("\nMEDIA PONDERADA");

    while(qtdNotas<=3){
        printf("\n\nInsira a nota %d: ", qtdNotas);
        scanf("%f", &nota);
        printf("\nInsira o peso %d: ", qtdNotas);
        scanf("%f", &pesoAtual);
        peso+=pesoAtual;
        media+=(pesoAtual*nota);
        qtdNotas++;
    }
        media/=peso;
        if(media>=8)
            conceito='A';
        else if(media>=7 && media<8)
            conceito='B';
        else if(media>=6 && media<7)
            conceito='C';
        else if(media>=5 && media<6)
            conceito='D';
        else 
            conceito='E';

        printf("\n\n\nA media ponderada e de %.2f", media);
        printf("\nConceito %c", conceito);
    return 0;
}
