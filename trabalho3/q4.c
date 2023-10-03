#include <stdio.h>

int quadrado(int num1){
    num1*=num1;
    return num1;
}

int soma(int num2, int num3){
    num2+=num3;
    return num2;
}
int main(){
    float num1=0, num2=0, num3=0;
    scanf("%f %f %f", &num1, &num2, &num3);
    
    num1=quadrado(num1);
    num2=soma(num2, num3);

    printf("O quadrado %.0f, a soma %.0f", num1, num2);

    return 0;
}