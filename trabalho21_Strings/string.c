#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(){
    char str1[8]="curso c", str2[6];

    strncpy(str2, str1, 5);
    fflush(stdin);
    str2[6]='\0';

    printf("str = %s\n", strupr(str2));
    
    getch();
    
    return 0;
}