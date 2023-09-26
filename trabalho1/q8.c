#include <stdio.h>

int main(){
    float media=0, maior=0, menor=0, aux=0, total=0, qtd=0;
    int parar=0, flagMenor=0;

    while(parar==0){
        printf("\nDigite a media: ");
        fflush(stdin);
        scanf("%f", &media);
        if(media<0)
            parar=1;
        else
            aux=media;
        if(flagMenor==0){
            menor=aux;
            flagMenor=1;
        }

        if(maior<aux)
            maior=aux;
        if(menor>aux)
            menor=aux;

        qtd++;
        if(parar!=1)
            total+=aux;
    }

    qtd--;
    printf("\n\nA maior media foi %.2f", maior);
    printf("\nA menor media foi %.2f", menor);
    printf("\nA media aritmetica de todas notas foi %.2f", (total/qtd));
    return 0;
}