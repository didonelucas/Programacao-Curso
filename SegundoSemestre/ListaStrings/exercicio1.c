/*Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a quantidade de
caracteres existentes na palavra. Considere que cada palavra possui no máximo 30
caracteres.*/
#include <stdio.h>
#include <string.h>

int main()
{
    int t[10], i,j;
    char palavra[10][30];
    
    for(i=0;i<10;i++){
        printf("Digite uma palavra\n");
        fgets(palavra[i],30,stdin);
        t[i] =strlen(palavra[i])-1;
        palavra[i][strcspn(palavra[i], "\n")] = '\0'; //Para não acontecer a quebra de linha após o %s
    }
    for(i=0;i<10;i++){
        printf("A palavra %s possui %d caracteres\n",palavra[i],t[i]);
    }
    
    return 0;
}
