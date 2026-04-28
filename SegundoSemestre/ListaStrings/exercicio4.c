/*Escreva um programa para ler uma quantidade indeterminada de palavras (considere que
cada palavra possui no máximo 30 caracteres e contém apenas letras minúsculas). Converta
todas as letras de cada palavra lida para maiúsculas. Imprimir cada palavra após a
conversão. O programa se encerra quando for digitada uma palavra que começa pela letra 'f'.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{   int i=0,j;
    char palavra[100][30];
 
    do{
        printf("Digite uma palavra:");
        scanf(" %29[a-z]",palavra[i]);
        
        for(j=0; palavra[i][j]!='\0';j++){
            palavra[i][j]=toupper(palavra[i][j]);
        }
        printf("%s\n",palavra[i]);
        i++;
    }
    while(palavra[i-1][0]!='F');
    return 0;
}
