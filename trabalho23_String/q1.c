#include <stdio.h>
#include <string.h>
#define tam 1000

int main(){
    char str1[tam];

    printf("\n\nConversao de minusculo para maiusculo");
    printf("\nEntre com a String: ");
    fflush(stdin);
    gets(str1);
    //fgets(str1, tam, stdin);

    for(int i=0; i<tam && str1[i]!='\0'; i++){
        if(str1[i]>=97 && str1[i]<=122)
            str1[i]-=32;
    }
    
    //printf("%s", str1);
    for(int i=0; i<tam && str1[i]!='\0'; i++){
        printf("%c", str1[i]);
    }

    return 0;
}