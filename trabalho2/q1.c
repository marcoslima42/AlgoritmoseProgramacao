#include <stdio.h>

int main()
{
    long long fatorial=1;
    long long totalF=1;
    int x=0, flag=1;
    float termo=0, s=0,totalTermo=0; 
    
    scanf("%d", &x);
    
    while(fatorial<=3){
        for(int i=1; i<=fatorial; i++){
            totalF=i*totalF;
        }
        fatorial++;
        termo=x/totalF;
        
        if(flag==1)
            termo*=-1;
        
        flag*=-1;
        
        totalTermo+=termo;
    }
    
    s=x-totalTermo;
    
    printf("%.0f", s);
    
    //printf("%lld", fatorial);

    return 0;
}