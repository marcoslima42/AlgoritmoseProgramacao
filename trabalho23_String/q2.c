#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char frase[250];
    char aux='p';
    //fgets(frase,250,stdin);
    gets(frase);
    int i=0;
    for(i=strlen(frase);frase[i]!=aux;i--)

    frase[i]='p';
    frase[++i]='a';
    frase[++i]='r';
    frase[++i]='c';
    frase[++i]='e';
    frase[++i]='l';
    frase[++i]='a';
    frase[++i]='\0';
    printf("%s",frase);

    return 0;
}