//e) 1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 , 21 , ... , N

#include <stdlib.h>
#include <stdio.h>

int main(){
    int opc=0;
    scanf("%d", &opc);
    
    while(opc<=0)
        scanf("%d", &opc);
    
    int dif=0;

    for(int n=1; n<=opc; n=n+2){
        dif=opc-n;
        if(n<opc && dif>=2)
            printf("%d, ", n);
        else
            printf("%d.", n); 
    }
    return 0;
}