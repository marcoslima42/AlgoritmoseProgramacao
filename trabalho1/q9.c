#include <stdio.h>

int main(){
    int caso=0;
    float a=0, b=0, c=0, resultado=0;

    scanf("%d", &caso);

    if(caso>3)
        caso=3;

    for(int i=1; i<=caso; i++){
        scanf("%f %f %f", &a, &b, &c);
        resultado=(a*2+b*3+c*5);
        resultado/=10;
        printf("\n%.1f, caso %d\n", resultado, i);
    }
    return 0;
}