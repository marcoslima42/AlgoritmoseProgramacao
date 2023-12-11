#include <stdio.h>
#include <string.h>

char* substituirPalavra(char frase[], char palavraAntiga[], char palavraNova[]) {
    char *ultimaOcorrencia = NULL;
    char copiaFrase[strlen(frase) + 1];
    strcpy(copiaFrase, frase);

    // Buscar a última ocorrência da palavra antiga na frase
    ultimaOcorrencia = strrchr(copiaFrase, ' ');
    if (ultimaOcorrencia != NULL) {
        // Substituir a palavra antiga pela palavra nova
        ultimaOcorrencia++;
        strcpy(ultimaOcorrencia, palavraNova);
    }

    return strdup(copiaFrase);
}

int main() {
    char frase[100];
    char palavraAntiga[20];
    char palavraNova[20];

    // Obter entrada do usuário
    printf("Digite uma frase: ");
    gets(frase);

    printf("Digite a palavra antiga: ");
    gets(palavraAntiga);

    printf("Digite a palavra nova: ");
    gets(palavraNova);

    // Chamar a função e imprimir o resultado
    char *fraseAtualizada = substituirPalavra(frase, palavraAntiga, palavraNova);
    printf("Frase com substituição: %s\n", fraseAtualizada);

    // Liberar a memória alocada pela strdup
    free(fraseAtualizada);

    return 0;
}