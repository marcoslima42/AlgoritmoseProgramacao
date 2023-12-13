#include <stdio.h>

int main(){
    int a, b, c, bolo=0;
    scanf("%d %d %d", &a, &b, &c);

    while(c>=5 && b>=3 && a>=2){
        bolo++;
        c-=5;
        b-=3;
        a-=2;
    }

    printf("%d", bolo);
    
    return 0;
}
