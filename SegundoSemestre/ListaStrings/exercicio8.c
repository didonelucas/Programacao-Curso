/*Escreva um programa para ler 10 palavras (considere que cada palavra possui no máximo 30
caracteres). Copiar para outra string cada palavra informada de forma que ela fique com os
caracteres na ordem inversa. Escrever a string com a palavra invertida.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,t;
    char palavra[10][30], inversa[10][30];
    for(i=0;i<10;i++){
        printf("Escreva uma palavra:\n");
        scanf("%29",palavra[i]);
        t = strlen(palavra[i])-1;
        
        for(j=t; j>=0; j--){
            inversa[i][t-j]=palavra[i][j];
            inversa[i][t+1] = '\0';
        }
    printf("%s\n",inversa[i]);
    }
    return 0;
}
