//a) 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15

#include <stdlib.h>
#include <stdio.h>

int main(){
    for(int n=0; n<16; n++){
        if(n<15)
            printf("%d, ", n);
        else
            printf("%d.", n); 
    }
    return 0;
}