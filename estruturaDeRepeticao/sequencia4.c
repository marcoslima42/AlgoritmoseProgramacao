//d) 0 , 2 , 4 , 6 , 8 , 10 , 12 , 14 , 16 , 18 , 20 , ... , N

#include <stdlib.h>
#include <stdio.h>

int main(){
    int opc=0;
    scanf("%d", &opc);
    
    while(opc<=0)
        scanf("%d", &opc);
        
    int dif=0;
    
    for(int n=0; n<=opc; n=n+2){
        dif=opc-n;
        if(n<opc && dif>=2)
            printf("%d, ", n);
        else
            printf("%d.", n); 
    }
    return 0;
}