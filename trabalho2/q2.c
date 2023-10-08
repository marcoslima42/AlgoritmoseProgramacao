#include <stdio.h>
#include <math.h>

long long int fatorial(long long int num){
    int result=0;
    for(int i=1; i<=num; i++){
        result= i*result;
    }
    return result;
}

float input(float x){
    int invalido=0;
    
    do{
        scanf("%f", &x);
        if(x>360 || x<=0){
            printf("\nValor invalido, digite novamente: ");
            invalido=1;
        }
    } while(invalido==1);
    return x;
}

int main(){
    float sen=0, x=0;
    long long int factorial=0;
    
    printf("\nSENO DE X");
    printf("\nINSIRA X (EM GRAUS): ");
    x=input(x);
    
    int expoente=3;
    //for(int i=1; i<=15, i++){
        printf("\n\n%f testando oooo POW", pow(x, expoente));
    //}


}