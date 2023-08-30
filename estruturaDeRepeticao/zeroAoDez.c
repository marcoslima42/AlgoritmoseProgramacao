#include <stdlib.h>
#include <stdio.h>

int main(){
    for(int n=0; n<11; n++){
        if(n<10)
            printf("%d, ", n);
        else
            printf("%d.", n);
    }
}
