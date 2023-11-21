#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define tam 10

void verificarMedia(float numero[], int media){
    for(int i=0; i<tam; i++){
        if(numero[i]==media)
            printf("%.2f e igual a media!\n", numero[i]);
    }
}

int main(){
    float numero[tam];
    int media=0;
    
    for(int i=0; i<tam; i++){
        printf("MEDIA[%d]: ", i+1);
        fflush(stdin);
        scanf("%f", &numero[i]);
        media=media+numero[i];
    }

    media=media/tam;
    printf("\n\n");
    verificarMedia(numero, media);

    return 0;
}
