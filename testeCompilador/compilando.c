#include <stdio.h>
#include <stdlib.h>
void menu(){
    printf("\n\nmenu");
}
int main(){
    int t=0;
    printf("depois de ja ter compilado uma vez");
    printf("mais uma pra garatir");
    scanf("%d", &t);
    printf("\npegou!");
    printf("depois de ter debugado uma vez");
    menu();
    system("\n\npause\n\n");
    printf("\n\n\n\nultimavez");
    return 0;
}