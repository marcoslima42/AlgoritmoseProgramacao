#include <stdio.h>

int verificar(char letra){
    int flag=1;
    if(letra!='a' && letra!='e' && letra!='i' && letra!='o' && letra!='u')
        flag=0;
    else 
        flag=1;
    
    return flag;
}

int main(){
    int flag=0;
    char letra=' ';

    scanf("%c", &letra);
    flag=verificar(letra);
    printf("%d saida", flag);
    return 0;
}