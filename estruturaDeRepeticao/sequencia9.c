//i) 2 , 4 , 8 , 16 , 32 , 64 , 128 , ... , N

#include <stdlib.h>
#include <stdio.h>

int main(){
    int limit=0, aux=0, dif=0;
    
    do
        scanf("%d", &limit);
    while(limit<=0);
    
    
    for(int n=2; n<=limit; n=n*2){
        dif=limit-n;
        if(n<limit && dif>=(n/2))
            printf("%d, ", n);
        else
            printf("%d.", n);
    }
    return 0;
}