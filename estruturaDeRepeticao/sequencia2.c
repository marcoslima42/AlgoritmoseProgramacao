//b) 15 , 14 , 13 , 12 , 11 , 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 0

#include <stdlib.h>
#include <stdio.h>

int main(){
    for(int n=15; n>=0; n--){
        if(n==0)
            printf("%d.", n);
        else
            printf("%d, ", n); 
    }
    return 0;
}