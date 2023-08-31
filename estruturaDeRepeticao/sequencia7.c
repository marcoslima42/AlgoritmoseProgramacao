//g) N , ... , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 0

#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int opc=0;
    scanf("%d", &opc);
    
    while(opc<=0)
        scanf("%d", &opc);
    
    for(int n=opc; n>=0; n--){
        if(n!=0)
            printf("%d, ", n);
        else
            printf("%d.", n);
    }
    return 0;
}