//h) N , ... , 5 , 4 , 3 , 2 , 1 , 0 , -1 , -2 , -3 , -4 , -5 , ... , -N

#include <stdlib.h>
#include <stdio.h>

int main(){
    int opc=0, n=0;
    
    do
        scanf("%d", &opc);
    while(opc<=0);
    
    n=opc;
    while(n>=0){
        printf("%d, ", n);
        n--;
    }
    n=1;
    while(n<=opc){
        if(n<opc)
            printf("%d, ", n*-1);
        else 
            printf("%d.", n*-1);
        n++;
    }
    
    return 0;
}