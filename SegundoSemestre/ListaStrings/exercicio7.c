/*Escreva um programa para ler 10 palavras (considere que cada palavra possui no máximo 30
caracteres). Contar e escrever a frequência de cada caractere presente nestas palavras.*/

#include <stdio.h>

int main() {
    char palavra[10][30];
    int freq[256] = {0};
    int i, j;

    for(i = 0; i < 10; i++) {
        printf("Digite uma palavra: ");
        scanf("%s", palavra[i]);

        for(j = 0; palavra[i][j] != '\0'; j++) {
            freq[palavra[i][j]]++;
        }
    }
    printf("Frequencia dos caracteres:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }

    return 0;
}
