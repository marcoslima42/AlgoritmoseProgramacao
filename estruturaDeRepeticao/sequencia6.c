//f) 5 , 10 , 15 , 20 , 25 , 30 , 35 , 40 , 45 , 50 , 55 , ... , N

#include <stdlib.h>
#include <stdio.h>

int main(){
    int opc=0;
    scanf("%d", &opc);
    
    while(opc<=0)
        scanf("%d", &opc);
    
    int dif=0;
    
    for(int n=5; n<=opc; n=n+5){
        dif=opc-n;
        if(n<opc && dif>=5)
            printf("%d, ", n);
        else //if(n==opc || dif<5) 
        //apenas o ELSE e o bastante, 'n' e impossivel ser maior que 'opc'(quando maior ele sai do 'for').
        //Ha tres alternativas para 'dif', ser maior, igual ou zero, se zero automaticamente 
        //nao atende o primeiro if com operado logico '&&', logo executando perfeitamente em
        //todos os casos.
            printf("%d.", n); 
    }

    return 0;
}