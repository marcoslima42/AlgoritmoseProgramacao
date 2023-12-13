#include <stdio.h>

int main() {
    char string[1000];
    //padrao de posicoes da criptografia
    int deslocamento = 3; 

    printf("Insira uma frase: ");
    gets(string);

    for (int i = 0; string[i] != '\0'; i++) {
        char carac = string[i];
        if ((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z')) {
            //operador ternario 
            //substituto direto do if para fazer numa linha so
            char base = (carac >= 'a' && carac <= 'z') ? 'a' : 'A';
            string[i] = (carac - base + deslocamento) % 26 + base;
        }
    }

    printf("Texto Criptografado: %s\n", string);

    return 0;
}