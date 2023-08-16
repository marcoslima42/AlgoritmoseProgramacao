#include <stdlib.h>
#include <stdio.h>

int main(){
    float c, f;
    c=f=0;

    printf("\nDIGITE A TEMPERATURA EM FAHRENHEIT: ");
    scanf("%f", &f);
    c=5.0f/9*(f-32);

    printf("\nA TEMPERATURA EM GRAUS CELSIUS E DE %.2f", c);
    return 0;
}
