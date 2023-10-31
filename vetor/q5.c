#include <stdio.h>

void relatorio(int notaAluno, int *notas, int tam){
    int notasCopia[11], qtd=0;
        for(int i=0; i<tam; i++){
            notasCopia[i];
            qtd++;
        }
    }

    for(int i=0; i<tam; i++){
        if(notas[i]==notasCopia){
            printf("\n\nTiraram nota %d %d alunos", notaAluno, i);
        }
    }
} 
int main(){
    int i=0, tam=0, notaAluno=0;
    
    printf("\nRELATORIO DE NOTAS\n");
    printf("\n\nInsira a quantidade de alunos: ");
    scanf("%d", &tam);
    int notas[tam];

    for(i=0; i<tam; i++){
        printf("\nAluno %d", i+1);
        scanf("%d", &notas[i]);
    }

    for (i=0; i<=tam; i++){
        relatorio(notaAluno, notas, tam);
        notaAluno++;
    }

    return 0;
}