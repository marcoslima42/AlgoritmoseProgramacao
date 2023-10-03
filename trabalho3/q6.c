#include <stdio.h>

void media(float nota1, float nota2, float nota3, char letra){
    if(letra=='a')
        printf("\nNota %.1f", ((nota1+nota2+nota3)/3));
    else if(letra=='p')
        printf("\nNota %.1f", (nota1*5+nota2*3+nota3*2)/(5+3+2));
    else if(letra=='h')
        printf("\nNota %.1f", 3/(1/nota1+1/nota2+1/nota3));
    else
        printf("\nOpcao Invalida");
}

int main(){
    float nota1=0, nota2=0, nota3=0;
    char letra=' ';

    scanf("%f %f %f %c", &nota1, &nota2, &nota3, &letra);
    media(nota1, nota2, nota3, letra);

    return 0;
}