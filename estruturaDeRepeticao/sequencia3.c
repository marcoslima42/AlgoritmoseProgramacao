//c) 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , ... , N

#include <stdlib.h>
#include <stdio.h>

int main(){
    int opc=0;
    scanf("%d", &opc);
    
    while(opc<=0)
        scanf("%d", &opc);
        
    for(int n=0; n<=opc; n++){
        if(n<opc)
            printf("%d, ", n);
        else
            printf("%d.", n); 
    }
    return 0;
}