#include <stdlib.h>
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    nota1=nota2=nota3=0;

    printf("\nDIGITE AS TRES NOTAS DISPONIVEIS: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media=(nota1+nota2+nota3)/3;
    printf("\nMEDIA = %.2f", media);

    return 0;
}
