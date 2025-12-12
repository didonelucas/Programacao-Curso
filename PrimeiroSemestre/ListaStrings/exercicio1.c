#include <stdio.h>
#include <string.h>

int main() {
    char texto[100];
    int t;
    char aux;
    int inicio = 0;
    int fim;

    printf("Digite um texto: ");    
    fgets(texto, 100, stdin);

    t = strlen(texto);
    fim = t - 1;
     
    while (inicio < fim) {
        aux = texto[inicio]; 
        texto[inicio] = texto[fim]; 
        texto[fim] = aux; 

        inicio++;
        fim--;
    }
    printf("%s\n", texto);
}
