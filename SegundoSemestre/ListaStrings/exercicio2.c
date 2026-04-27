/*Escreva um programa para ler 10 palavras. Para cada palavra lida escrever a primeira e a
última letra. Considere que cada palavra possui no máximo 30 caracteres.*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char palavra[10][30],primeira[10],ultima[10];
    
    for(i=0;i<10;i++){
        printf("Digite uma palavra\n");
        fgets(palavra[i],30,stdin);
        palavra[i][strcspn(palavra[i],"\n")] = '\0';
        printf("A primeira letra da palavra %d é %c\n",i+ 1,palavra[i][0]);
        printf("A última letra da palavra %d é %c\n", i+ 1,palavra[i][strlen(palavra[i]) - 1]);
    }
    return 0;
}
