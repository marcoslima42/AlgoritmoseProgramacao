#include <stdio.h>
#include <string.h>

#define MAX_CITIES 10

int obterIndiceCidade(char cidade, char cidades[], int numCidades) {
    for (int i = 0; i < numCidades; i++) {
        if (cidades[i] == cidade) {
            return i;
        }
    }
    return -1; 
}

int main() {
    char cidades[MAX_CITIES];
    int distancias[MAX_CITIES][MAX_CITIES];
    char percurso[MAX_CITIES];
    int numCidades, numDistancias;

    // Obter o número de cidades
    printf("Digite o número de cidades (máximo %d): ", MAX_CITIES);
    scanf("%d", &numCidades);

    if (numCidades <= 0 || numCidades > MAX_CITIES) {
        printf("Número inválido de cidades.\n");
        return 1;
    }

    // Obter nomes das cidades
    printf("Digite os nomes das cidades (por exemplo, A B C): ");
    for (int i = 0; i < numCidades; i++) {
        scanf(" %c", &cidades[i]);
    }

    // Preencher matriz de distâncias
    memset(distancias, 0, sizeof(distancias));
    printf("Digite as distâncias entre as cidades:\n");
    for (int i = 0; i < numCidades; i++) {
        for (int j = 0; j < numCidades; j++) {
            if (i != j) {
                printf("Distância de %c para %c: ", cidades[i], cidades[j]);
                scanf("%d", &distancias[i][j]);
            }
        }
    }

    // Obter percurso
    printf("Digite o percurso (máximo %d cidades): ", MAX_CITIES);
    for (int i = 0; i < MAX_CITIES; i++) {
        scanf(" %c", &percurso[i]);
        if (percurso[i] == '\n') {
            break;
        }
    }

    // Calcular distância total
    int distanciaTotal = 0;
    for (int i = 0; i < MAX_CITIES && percurso[i] != '\n'; i++) {
        int cidadeAtual = obterIndiceCidade(percurso[i], cidades, numCidades);
        int proximaCidade = obterIndiceCidade(percurso[i + 1], cidades, numCidades);
        if (cidadeAtual != -1 && proximaCidade != -1) {
            distanciaTotal += distancias[cidadeAtual][proximaCidade];
        }
    }

    // Mostrar resultado
    printf("Distância total percorrida: %d km\n", distanciaTotal);

    return 0;
}
